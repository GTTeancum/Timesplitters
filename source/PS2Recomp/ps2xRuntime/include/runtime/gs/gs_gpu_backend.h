#pragma once

#include "runtime/gs/gs_backend.h"

#include <array>
#include <functional>
#include <memory>

struct GLFWwindow;

// OpenGL 3.3 GS renderer (experimental, TS_GS_GPU=1).
//
// Draws primitives on the GPU into render targets that mirror GS frame and
// depth buffers. GS local memory stays authoritative for everything the CPU
// side touches: uploads, CLUT loads, transfers and readbacks go through an
// internal GSCpuBackend, and GPU-rendered buffers are written back to local
// memory before anything reads the pages they cover (texture decode,
// local->host readback, presentation). Results are close to, but not
// bit-identical with, the CPU rasterizer.
class GSGpuBackend final : public GSRasterBackend
{
public:
    // Creates a hidden window whose GL context shares objects with the
    // current (raylib) context. Call on the main thread after InitWindow.
    static GLFWwindow *CreateSharedContextWindow();

    // renderScale: internal resolution multiplier (1..4).
    explicit GSGpuBackend(GLFWwindow *contextWindow, int renderScale = 1);
    ~GSGpuBackend() override;

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
    bool PresentAsync(const GSPresentationRequest &request, std::function<void(PresentationFrame &&)> done) override;

    bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override;

    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t> &out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

    // Latest high-resolution presented frame (render_scale > 1): a GL texture
    // shared with the window's context. Call on the window's thread.
    static bool LatestHdFrame(unsigned &texture, int &width, int &height);

    // Sets the CLUT buffer (replaying a GS command capture).
    void SetClutState(const std::array<uint16_t, 512> &clut, const std::array<uint32_t, 2> &cbp);

private:
    struct Impl;
    std::unique_ptr<Impl> m;
};
