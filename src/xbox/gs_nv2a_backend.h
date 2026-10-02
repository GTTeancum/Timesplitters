#pragma once
// GS renderer for the original Xbox: draws the game's screen on the NV2A.
//
// The display buffers (the frame buffers the game shows) are drawn by the
// GPU straight into pbkit's back buffer, scaled to 640x480, and presenting
// is a buffer flip. Everything else stays on an internal GSCpuBackend, whose
// GS local memory remains authoritative: uploads, CLUT loads, transfers and
// off-screen draws (render-to-texture). GPU-drawn screen pixels are written
// back to local memory only when something reads them (texture decode,
// local->host or local->local transfers), and CPU writes to the screen are
// loaded into the back buffer before the next GPU draw or flip.
#include "runtime/gs/gs_cpu_backend.h"

#include <memory>

class GSNv2aBackend final : public GSRasterBackend
{
public:
    // Starts pbkit (after XVideoSetMode). Null when the GPU is unavailable.
    static std::unique_ptr<GSNv2aBackend> Create();
    ~GSNv2aBackend() override;

    void Initialize(uint8_t *vram, uint32_t vramSize) override;
    void Reset() override;

    void Submit(const GSPrimitiveBatch &batch) override;
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

    struct Impl;

private:
    GSNv2aBackend();
    std::unique_ptr<Impl> m;
};
