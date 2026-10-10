#pragma once

#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_texture_page_cache.h"

#include <array>
#include <mutex>
#include <vector>

class GSCpuBackend final : public GSRasterBackend
{
public:
    GSCpuBackend();

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;

    void Submit(const GSPrimitiveBatch &batch) override;
    // Differential diagnostics; call before rendering, not concurrently.
    void SetTexturePageReuseEnabled(bool enabled) { m_texturePageReuseEnabled = enabled; }
    void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override;
    void BeginTransfer(const GSTransferCommand &command) override;
    void UploadImage(const uint8_t *data, uint32_t sizeBytes) override;

    void Flush() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest &request) override;

    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;

    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

    // Row interleaving for parallel rasterization: on the calling thread,
    // draws only touch rows whose 16-row group index % count == index.
    // Every pixel keeps the operation order of a serial draw.
    static void SetThreadBand(unsigned index, unsigned count);

    // Decodes the whole texture of a draw state (textureWidth x textureHeight
    // texels) from GS local memory to RGBA8888 with CLUT and TEXA applied,
    // reading memory directly. Used by GPU backends to build textures.
    void DecodeTexture(const GSDrawState &state, std::vector<uint32_t> &out);
    // Rows [firstRow, firstRow + rowCount) of the same decode into out
    // (rowCount x textureWidth texels): a big texture a band at a time.
    // DecodeTexture is this for every row.
    void DecodeTextureRows(const GSDrawState &state, uint32_t firstRow, uint32_t rowCount, uint32_t *out);
    // Writes a rectangle of pixel values (row-major, width * height) into GS
    // local memory in the given format, taking the lock once.
    void WriteVramRect(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x0, uint32_t y0,
                       uint32_t width, uint32_t height, const uint32_t *values);

    // Content hash of the CLUT buffer (recomputed only after a load).
    uint64_t ClutHash()
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        return ClutContentHash();
    }

    // CLUT buffer state, for GS command captures (gs_threaded_backend).
    void GetClutState(std::array<uint16_t, 512> &clut, std::array<uint32_t, 2> &cbp) const
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        const_cast<GSCpuBackend *>(this)->FillDeferredClutUnlocked(); // the same state, filled in
        clut = m_clut;
        cbp = m_clutCbp;
    }
    void SetClutState(const std::array<uint16_t, 512> &clut, const std::array<uint32_t, 2> &cbp)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_clutDeferred = false;
        m_clut = clut;
        m_clutCbp = cbp;
        ++m_clutGeneration;
    }
    // A CLUT load whose result the caller already has (the Xbox renderer's
    // palette cache): the CLD address mirror as LoadClut keeps it, the
    // buffer, and its content hash.
    void SetLoadedClut(const GSTex0Reg &tex0, const std::array<uint16_t, 512> &clut, uint64_t hash)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (tex0.cld == 2u || tex0.cld == 4u)
            m_clutCbp[0] = tex0.cbp;
        else if (tex0.cld == 3u || tex0.cld == 5u)
            m_clutCbp[1] = tex0.cbp;
        m_clutDeferred = false;
        m_clut = clut;
        ++m_clutGeneration;
        m_clutHash = hash;
        m_clutHashGeneration = m_clutGeneration;
    }

    // Full CLUT loads: 8-bit indices, CSM1 and a 32-bit CLUT from CSA 0, so
    // all 512 halfwords of the buffer are replaced. Their 256 source words
    // are one contiguous 1 KB of local memory (the four CT32 blocks from
    // CBP) in a fixed order. ReadFullClut fills clut (512 halfwords) as
    // LoadClut would, without the row reads; false when the source runs
    // past the end of local memory (CBP above kLastContiguousClutCbp).
    static constexpr uint32_t kLastContiguousClutCbp = 16380u;
    static bool FullClutLoad(const GSTex0Reg &tex0);
    bool ReadFullClut(uint32_t cbp, uint32_t cpsm, uint16_t *clut) const;
    // The content hash ClutHash gives for a CLUT buffer (512 halfwords).
    static uint64_t HashClut(const uint16_t *clut);
    // A full load (FullClutLoad, CBP within kLastContiguousClutCbp) whose
    // buffer stays in local memory until something reads it: the CLD
    // address mirror as SetLoadedClut keeps it and the content hash now;
    // the buffer is filled (ReadFullClut) only before a draw, a texture
    // decode, a state read or a load over part of it, and before any write
    // to local memory (Xbox renderer's palette identities).
    void DeferClutLoad(const GSTex0Reg &tex0, uint64_t hash)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        if (tex0.cld == 2u || tex0.cld == 4u)
            m_clutCbp[0] = tex0.cbp;
        else if (tex0.cld == 3u || tex0.cld == 5u)
            m_clutCbp[1] = tex0.cbp;
        m_clutDeferred = true;
        m_deferredCbp = tex0.cbp;
        m_deferredCpsm = tex0.cpsm;
        ++m_clutGeneration;
        m_clutHash = hash;
        m_clutHashGeneration = m_clutGeneration;
    }
    // Deferred loads whose buffer was filled in (statistics).
    uint32_t ClutFills() const { return m_clutFills; }
    // Development (self-checks): a load done again with the row reads,
    // whatever the CLD mirror says (it stands); the content hash is worked
    // out afresh from the buffer.
    void LoadClutAgain(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        FillDeferredClutUnlocked();
        LoadClutUnlocked(tex0, texclut);
    }
    // Development (boot self-test): ReadFullClut's fixed order against
    // LoadClut's row reads over random local memory at a few CBPs, both
    // 32-bit formats. Local memory and the CLUT state are restored. True
    // when they agree.
    bool CheckFullClutOrder();

    // Byte ranges of GS local memory a primitive may read or write; end is
    // UINT64_MAX when the range is unknown or wraps. Conservative (whole
    // scissor rectangle for render targets).
    struct VramRange
    {
        uint64_t begin = 0, end = 0;
    };
    static VramRange TextureRange(const GSDrawState &state);
    static VramRange FrameRange(const GSDrawState &state);
    static VramRange DepthRange(const GSDrawState &state);
    static VramRange ClutRange(const GSTex0Reg &tex0);
    // True when the primitive cannot observe its own frame/depth writes
    // through texture sampling.
    static bool TextureReadOnlyDuringDraw(const GSDrawState &state);

private:
    void ResetUnlocked();
    void LoadClutUnlocked(const GSTex0Reg &tex0, const GSTexClutReg &texclut);
    uint32_t ReadVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const;
    uint32_t ReadTextureVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y);
    void WriteVramUnlocked(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value);

    void DrawPrimitive(const GSPrimitiveBatch &batch);
    void DrawSprite(const GSPrimitiveBatch &batch);
    void DrawTriangle(const GSPrimitiveBatch &batch);
    void DrawLine(const GSPrimitiveBatch &batch);
    void WritePixel(const GSDrawState &state, int x, int y, int z, uint8_t r, uint8_t g, uint8_t b, uint8_t a, uint8_t fog);
    uint32_t SampleTexture(const GSDrawState &state, float s, float t, float q, uint16_t u, uint16_t v);
    uint32_t LookupCLUT(const GSDrawState &state, uint8_t index, uint8_t cpsm, uint8_t csm, uint8_t csa, uint8_t sourcePsm);

    void PerformLocalToLocalTransfer();
    void PerformLocalToHostTransfer();
    PresentationFrame PresentFromLocalMemory(const GSPresentationRequest &request);
    bool CopyFrameToHostRgba(const GSFrameReg &frame,
                             uint32_t width,
                             uint32_t height,
                             std::vector<uint8_t> &outPixels,
                             bool preserveAlpha,
                             bool useLocalMemoryLayout,
                             bool frameBaseIsPages,
                             uint32_t sourceOriginX,
                             uint32_t sourceOriginY) const;

    using WriteVramFunc = void (*)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    using ReadVramFunc = uint32_t (*)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t);

    static constexpr size_t kPsmHandlerCount = 1u << 6u;
    mutable std::mutex m_mutex;
    uint8_t *m_vram = nullptr;
    uint32_t m_vramSize = 0;
    std::array<ReadVramFunc, kPsmHandlerCount> m_readVramFuncs{};
    std::array<WriteVramFunc, kPsmHandlerCount> m_writeVramFuncs{};
    std::array<uint16_t, 512> m_clut{};
    std::array<uint32_t, 2> m_clutCbp{};
    // A deferred full load (DeferClutLoad) not yet in m_clut, and its source.
    bool m_clutDeferred = false;
    uint32_t m_deferredCbp = 0, m_deferredCpsm = 0, m_clutFills = 0;
    void FillDeferredClutUnlocked()
    {
        if (m_clutDeferred)
            FillDeferredClutSlow();
    }
    void FillDeferredClutSlow();
    GSMem::TexturePageCache m_texturePageCache;
    bool m_texturePageReuseEnabled = true;
    std::vector<uint32_t> m_spriteTexels;
    bool m_useSpriteTexels = false;
    // Texels SampleTexture reads while m_useSpriteTexels (sprite expansion or
    // a decoded-texture cache entry); m_expandedSampled records whether any
    // texel was read, for replaying the page cache's last access.
    const uint32_t *m_expandedTexels = nullptr;
    bool m_expandedSampled = false;

    // Decoded (deswizzled, palette-expanded) textures for read-only sampling
    // by triangles. Entries are dropped when their GS memory may change.
    struct DecodedTexture
    {
        bool valid = false;
        uint32_t tbp0 = 0, tbw = 0, psm = 0, width = 0, height = 0;
        uint32_t cpsm = 0, csm = 0, csa = 0, texa = 0;
        uint64_t clutHash = 0;
        uint64_t begin = 0, end = 0, lastUse = 0;
        std::vector<uint32_t> texels;
    };
    std::vector<DecodedTexture> m_decoded; // LRU within kDecodedTexelBudget
    size_t m_decodedTexels = 0;
    uint64_t m_decodedUnionBegin = 0, m_decodedUnionEnd = 0; // covers every valid entry
    static constexpr size_t kDecodedTexelBudget = 1u << 20; // 4 MiB of RGBA
    static constexpr size_t kDecodedMaxEntries = 128;
    uint64_t m_decodeTick = 0;
    uint32_t m_clutGeneration = 0;
    // Content hash of m_clut, recomputed lazily when the generation moved.
    uint64_t m_clutHash = 0;
    uint32_t m_clutHashGeneration = UINT32_MAX;
    uint64_t ClutContentHash();
    const uint32_t *FindOrDecodeTexture(const GSDrawState &state);
    void InvalidateDecoded(uint64_t begin, uint64_t end);
    void InvalidateAllDecoded();
    // GS memory in [begin, end) may have changed: drop decoded textures and
    // note whether the texture page cache's latched page became stale (it
    // stays stale until the page cache loads another page).
    void NoteVramWrite(uint64_t begin, uint64_t end);
    bool LatchedPageFresh() const { return m_texturePageCache.PageLoads() >= m_latchedStaleUntilLoads; }
    uint64_t m_latchedStaleUntilLoads = 0;

public:
    // Called by GSThreadedBackend on workers that skip a VRAM-writing command
    // executed by worker 0.
    void InvalidateDecodedTextures()
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        NoteVramWrite(0, UINT64_MAX);
    }

private:
    uint32_t m_lastSpriteU = 0, m_lastSpriteV = 0;

    GSTransferCommand m_transfer{};
    GSTransferSnapshot m_transferState{};
    std::vector<uint8_t> m_localToHostBuffer;
    size_t m_localToHostReadPos = 0;
};
