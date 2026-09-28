// OpenGL 3.3 GS renderer. See gs_gpu_backend.h for the model.
//
// GL function pointers come from raylib's glad instance (loaded at
// InitWindow); this backend renders on its own thread with a hidden window
// whose context shares objects with raylib's.
#include "external/glad.h"
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"

#include "runtime/gs/gs_gpu_backend.h"
#include "runtime/gs/gs_cpu_backend.h"
#include "runtime/gs/gs_texture_replacement.h"
#include "ThreadNaming.h"
#include "runtime/ps2_sample_profiler.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <immintrin.h>
#include <cstring>
#include <deque>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <vector>

namespace
{
    constexpr uint64_t kPageBytes = 8192u;
    constexpr uint32_t kPageCount = 512u;
    constexpr int kTargetHeight = 512;

    // Colour channels are stored as c/255, alpha as a/128 (so blend factors
    // using alpha match the GS's (x * alpha) >> 7), in RGBA16F targets.
    const char *kVertexShader = R"(#version 330 core
layout(location = 0) in vec3 aPos;      // x, y in target pixels; z normalized
layout(location = 1) in vec4 aColor;    // 0..255
layout(location = 2) in vec3 aTex;      // s,t,q or texel coordinates (q = 1)
layout(location = 3) in float aFog;     // 0..255
uniform vec2 uTarget;                   // target size in pixels
out vec4 vColor;
flat out vec4 vColorFlat;
out vec3 vTex;
out float vFog;
out float vDepth;
void main()
{
    gl_Position = vec4(aPos.x / uTarget.x * 2.0 - 1.0, aPos.y / uTarget.y * 2.0 - 1.0, 0.0, 1.0);
    vColor = aColor;
    vColorFlat = aColor;
    vTex = aTex;
    vFog = aFog;
    vDepth = aPos.z;
}
)";

    const char *kFragmentShader = R"(#version 330 core
in vec4 vColor;
flat in vec4 vColorFlat;
in vec3 vTex;
in float vFog;
in float vDepth;
uniform sampler2D uTexture;
uniform int uTme;
uniform int uCoordMode;     // 0 texel coordinates, 1 s/q, t/q
uniform ivec2 uTexSize;
uniform int uLinear;
uniform ivec2 uWrap;        // GS CLAMP modes
uniform ivec4 uRegion;      // minU, maxU, minV, maxV
uniform int uReplaced;      // uTexture is a replacement image (any size, normalised coordinates)
uniform int uTfx;
uniform int uTcc;
uniform int uIip;
uniform int uAtest;         // 0 off, else 1 + ATST
uniform int uAref;
uniform int uAfail;
uniform int uFge;
uniform vec3 uFogColor;     // 0..255
uniform int uFba;
uniform int uPabe;
uniform int uFactor;        // blend C: 0 As, 1 Ad, 2 FIX (not used here), -1 off
layout(location = 0, index = 0) out vec4 outColor;
layout(location = 0, index = 1) out vec4 outFactor;

int wrapCoord(int c, int size, int mode, int lo, int hi)
{
    if (mode == 0) return c & (size - 1);
    if (mode == 1) return clamp(c, 0, size - 1);
    if (mode == 2) return clamp(c, lo, hi);
    return (c & lo) | hi;
}

vec4 texel(int u, int v)
{
    u = wrapCoord(u, uTexSize.x, uWrap.x, uRegion.x, uRegion.y);
    v = wrapCoord(v, uTexSize.y, uWrap.y, uRegion.z, uRegion.w);
    u = clamp(u, 0, uTexSize.x - 1);
    v = clamp(v, 0, uTexSize.y - 1);
    return floor(texelFetch(uTexture, ivec2(u, v), 0) * 255.0 + 0.5);
}

void main()
{
    vec4 c = uIip != 0 ? floor(clamp(vColor, 0.0, 255.0)) : vColorFlat;
    if (uTme != 0)
    {
        vec2 t = uCoordMode == 1 ? vec2(vTex.x / (abs(vTex.z) > 1e-8 ? vTex.z : 1.0) * float(uTexSize.x),
                                         vTex.y / (abs(vTex.z) > 1e-8 ? vTex.z : 1.0) * float(uTexSize.y))
                                 : vTex.xy;
        vec4 tc;
        if (uReplaced != 0)
        {
            // Wrap in the original texture's texel space, then sample the
            // replacement filtered at the same relative position.
            vec2 size = vec2(uTexSize);
            vec2 p = t;
            p.x = uWrap.x == 1 ? clamp(p.x, 0.0, size.x) : uWrap.x == 2 ? clamp(p.x, float(uRegion.x), float(uRegion.y) + 1.0) : p.x;
            p.y = uWrap.y == 1 ? clamp(p.y, 0.0, size.y) : uWrap.y == 2 ? clamp(p.y, float(uRegion.z), float(uRegion.w) + 1.0) : p.y;
            tc = floor(texture(uTexture, p / size) * 255.0 + 0.5);
        }
        else if (uLinear != 0)
        {
            vec2 p = t - 0.5;
            vec2 b = floor(p);
            vec2 f = p - b;
            ivec2 i = ivec2(b);
            vec4 c00 = texel(i.x, i.y), c10 = texel(i.x + 1, i.y);
            vec4 c01 = texel(i.x, i.y + 1), c11 = texel(i.x + 1, i.y + 1);
            tc = floor(mix(mix(c00, c10, f.x), mix(c01, c11, f.x), f.y) + 0.5);
        }
        else
            tc = texel(int(floor(t.x)), int(floor(t.y)));
        vec4 r;
        if (uTfx == 0)      { r.rgb = floor(tc.rgb * c.rgb / 128.0); r.a = uTcc != 0 ? floor(tc.a * c.a / 128.0) : c.a; }
        else if (uTfx == 1) { r.rgb = tc.rgb; r.a = uTcc != 0 ? tc.a : c.a; }
        else if (uTfx == 2) { r.rgb = floor(tc.rgb * c.rgb / 128.0) + c.a; r.a = uTcc != 0 ? tc.a + c.a : c.a; }
        else                { r.rgb = floor(tc.rgb * c.rgb / 128.0) + c.a; r.a = uTcc != 0 ? tc.a : c.a; }
        c = clamp(r, 0.0, 255.0);
    }
    if (uAtest != 0)
    {
        int a = int(c.a);
        int m = uAtest - 1;
        bool pass = m == 1 || (m == 2 && a < uAref) || (m == 3 && a <= uAref) || (m == 4 && a == uAref) ||
                    (m == 5 && a >= uAref) || (m == 6 && a > uAref) || (m == 7 && a != uAref);
        if (!pass && (uAfail == 0 || uAfail == 2))
            discard; // KEEP; ZB_ONLY approximated
    }
    if (uFge != 0)
    {
        float fog = clamp(floor(vFog), 0.0, 255.0);
        c.rgb = floor(fog * c.rgb / 256.0) + floor((255.0 - fog) * uFogColor / 256.0);
    }
    float storedAlpha = c.a;
    if (uFba != 0) storedAlpha = float(int(storedAlpha) | 0x80);
    outColor = vec4(c.rgb / 255.0, storedAlpha / 128.0);
    float factor = c.a / 128.0;
    if (uPabe != 0 && c.a < 128.0) factor = 1.0; // no blending for this pixel (A-B)*1+... approximation
    outFactor = vec4(factor);
    gl_FragDepth = vDepth;
}
)";

    // Clear/copy helper: draws a quad sampling a float image into a target.
    struct Vertex
    {
        float x, y, z;
        float r, g, b, a;
        float s, t, q;
        float fog;
    };

    GSCpuBackend::VramRange frameRangeRows(uint32_t psm, uint32_t fbp, uint32_t fbw, uint32_t rows)
    {
        GSDrawState state{};
        state.context.frame.psm = static_cast<uint8_t>(psm);
        state.context.frame.fbp = fbp;
        state.context.frame.fbw = std::max<uint32_t>(fbw, 1u);
        state.context.scissor.x1 = static_cast<uint16_t>(std::max<uint32_t>(fbw, 1u) * 64u - 1u);
        state.context.scissor.y1 = static_cast<uint16_t>(rows ? rows - 1u : 0u);
        return GSCpuBackend::FrameRange(state);
    }

    bool overlaps(const GSCpuBackend::VramRange &a, const GSCpuBackend::VramRange &b)
    {
        if (a.end == UINT64_MAX || b.end == UINT64_MAX)
            return true;
        return a.begin < b.end && b.begin < a.end;
    }

    // Write-back packing: converts rows of a render target into GS pixel
    // values on the GPU (one uint per pixel), so reading back costs 4 bytes
    // per pixel and no CPU conversion.
    const char *kPackVertexShader = R"(#version 330 core
void main()
{
    gl_Position = vec4(gl_VertexID == 1 ? 3.0 : -1.0, gl_VertexID == 2 ? 3.0 : -1.0, 0.0, 1.0);
}
)";

    const char *kPackFragmentShader = R"(#version 330 core
uniform sampler2D uSource;
uniform int uMode;  // 0: 32-bit colour, 1: 16-bit colour, 2: depth
uniform int uFirst; // first target row
uniform int uScale; // render scale (sample the top-left texel of each GS pixel)
out uint oValue;
uint channel(float v, float scale)
{
    return uint(clamp(floor(v * scale + 0.5), 0.0, 255.0));
}
void main()
{
    vec4 t = texelFetch(uSource, ivec2(int(gl_FragCoord.x), int(gl_FragCoord.y) + uFirst) * uScale, 0);
    if (uMode == 2)
    {
        float z = t.r * 4294967296.0;
        oValue = z >= 4294967295.0 ? 0xFFFFFFFFu : uint(z + 0.5);
        return;
    }
    uint r = channel(t.r, 255.0), g = channel(t.g, 255.0), b = channel(t.b, 255.0), a = channel(t.a, 128.0);
    oValue = uMode == 1 ? ((r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10) | ((a >> 7) << 15))
                        : (r | (g << 8) | (b << 16) | (a << 24));
}
)";

    GLuint compileShader(GLenum type, const char *source)
    {
        GLuint shader = glCreateShader(type);
        glShaderSource(shader, 1, &source, nullptr);
        glCompileShader(shader);
        GLint ok = 0;
        glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
        if (!ok)
        {
            char log[2048];
            glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
            std::fprintf(stderr, "[TS:gs-gpu] shader compile failed: %s\n", log);
        }
        return shader;
    }
}

namespace
{
    std::mutex g_hdMutex;
    struct
    {
        unsigned texture = 0;
        int width = 0, height = 0;
        GLsync fence = nullptr;
        uint64_t sequence = 0;
    } g_hdFrame;

    void publishHdFrame(GLuint texture, int width, int height, GLsync fence)
    {
        std::lock_guard<std::mutex> lock(g_hdMutex);
        if (g_hdFrame.fence)
            glDeleteSync(g_hdFrame.fence);
        g_hdFrame.texture = texture;
        g_hdFrame.width = width;
        g_hdFrame.height = height;
        g_hdFrame.fence = fence;
        ++g_hdFrame.sequence;
    }
}

bool GSGpuBackend::LatestHdFrame(unsigned &texture, int &width, int &height)
{
    std::lock_guard<std::mutex> lock(g_hdMutex);
    if (!g_hdFrame.texture)
        return false;
    if (g_hdFrame.fence)
    {
        glWaitSync(g_hdFrame.fence, 0, GL_TIMEOUT_IGNORED);
    }
    texture = g_hdFrame.texture;
    width = g_hdFrame.width;
    height = g_hdFrame.height;
    return true;
}

struct GSGpuBackend::Impl
{
    // ------------------------------------------------------------ targets
    struct Target
    {
        bool depth = false;
        uint32_t base = 0;     // fbp (colour) or zbp (depth), in pages
        uint32_t fbw = 1;
        uint32_t psm = 0;
        uint32_t rows = 0;     // rows mirrored from / valid in local memory
        GLuint texture = 0;
        GLuint fbo = 0;        // colour targets only
        bool gpuDirty = false; // GPU content newer than local memory
        int dirtyMin = INT_MAX, dirtyMax = -1; // rows drawn since the last write-back
        GSCpuBackend::VramRange range{};
    };
    std::vector<Target> targets;

    struct TextureEntry
    {
        uint32_t tbp0, tbw, psm, width, height, cpsm, csm, csa, texa;
        uint64_t clutHash, versionSum, lastUse;
        GSCpuBackend::VramRange range;
        GLuint texture;
        bool renderTarget = false; // drawn by the GPU: never dumped or replaced
        GLuint replacement = 0;    // from textures/replacements, or 0
    };
    // Replacement images by content hash (0: looked up, none exists).
    std::unordered_map<uint64_t, GLuint> replacementTextures;
    std::vector<TextureEntry> textures;
    uint64_t textureTick = 0;
    std::array<uint32_t, kPageCount> pageVersion{};
    uint64_t clutHash = 0;

    // ---------------------------------------------------------- commands
    enum class Kind : uint8_t
    {
        Submit,
        LoadClut,
        BeginTransfer,
        Upload,
        Flush,
        Clear,
        WriteVram,
        Present,
        SyncMemory,
        Reset
    };
    struct Command
    {
        Kind kind;
        GSPrimitiveBatch batch;
        GSTex0Reg tex0{};
        GSTexClutReg texclut{};
        GSTransferCommand transfer{};
        std::vector<uint8_t> payload;
        GSContext context{};
        uint32_t values[6]{};
        GSPresentationRequest request{};
        std::function<void(PresentationFrame &&)> done;
    };

    GLFWwindow *window = nullptr;
    std::thread thread;
    std::mutex mutex;
    std::condition_variable wake, idle;
    std::vector<Command> queue, work; // swapped; both keep their capacity
    uint64_t submitted = 0, completed = 0;
    bool stop = false;
    bool sleeping = false; // GL thread waits for work (push must notify)
    std::atomic<size_t> queued{0}; // commands in queue (spin check without the lock)
    unsigned drainers = 0; // threads waiting in drain (the GL thread must notify)

    GSCpuBackend cpu;
    // Render targets are `scale` times the GS resolution in each direction
    // (timesplitters.ini render_scale); write-backs to local memory sample
    // one texel per GS pixel, loads from local memory are blown up.
    int scale = 1;
    GLuint uploadColor = 0, uploadDepth = 0, uploadColorFbo = 0, uploadDepthFbo = 0, blitDepthFbo = 0;
    int uploadWidth = 0, uploadHeight = 0;
    // High-resolution presentation (scale > 1): the displayed buffer is
    // copied from its GPU target into one of these for the window to draw.
    struct HdSlot
    {
        GLuint texture = 0, fbo = 0;
        int width = 0, height = 0;
    };
    std::array<HdSlot, 3> hdSlots{};
    unsigned hdNext = 0;
    uint8_t *vram = nullptr;
    uint32_t vramSize = 0;
    GSTransferSnapshot lastTransfer{};

    // --------------------------------------------------------------- GL
    GLuint program = 0, vao = 0, vbo = 0;
    GLuint packProgram = 0, packVao = 0, packTexture = 0, packFbo = 0;
    GLint uPackSource = -1, uPackMode = -1, uPackFirst = -1, uPackScale = -1;
    int packWidth = 0;
    std::vector<uint32_t> packValues;
    GLint uTarget = -1, uTexture = -1, uTme = -1, uCoordMode = -1, uTexSize = -1, uLinear = -1, uWrap = -1, uReplaced = -1,
          uRegion = -1, uTfx = -1, uTcc = -1, uIip = -1, uAtest = -1, uAref = -1, uAfail = -1, uFge = -1,
          uFogColor = -1, uFba = -1, uPabe = -1, uFactor = -1;

    // Current batch: consecutive primitives with an identical key.
    struct DrawKey
    {
        int colorTarget, depthTarget;
        GLuint texture;
        GLenum topology;
        int tme, coordMode, texW, texH, linear, wrapU, wrapV, regionMinU, regionMaxU, regionMinV, regionMaxV, replaced;
        int tfx, tcc, iip, atest, aref, afail, fge, fogR, fogG, fogB, fba, pabe;
        int blend, blendA, blendB, blendC, blendD, fix;
        int ztest, zwrite, colorMask;
        int scissorX0, scissorY0, scissorX1, scissorY1;
        bool operator==(const DrawKey &) const = default;
    };
    DrawKey batchKey{};
    bool batchOpen = false;
    std::vector<Vertex> vertices;

    // Presentation: snapshot local memory, convert on a separate thread.
    struct PresentJob
    {
        unsigned buffer;
        GSPresentationRequest request;
        std::function<void(PresentationFrame &&)> done;
    };
    std::thread presenter;
    std::mutex presentMutex;
    std::condition_variable presentWake;
    std::deque<PresentJob> presentJobs;
    bool presentStop = false;
    std::array<std::vector<uint8_t>, 2> presentSnapshots;
    std::array<std::unique_ptr<GSCpuBackend>, 2> presentBackends;
    std::array<bool, 2> presentBusy{};
    unsigned nextPresentBuffer = 0;

    void presenterLoop()
    {
        ThreadNaming::SetCurrentThreadName("GSGpuPresenter");
        for (;;)
        {
            PresentJob job;
            {
                std::unique_lock<std::mutex> lock(presentMutex);
                presentWake.wait(lock, [&] { return presentStop || !presentJobs.empty(); });
                if (presentJobs.empty())
                    return;
                job = std::move(presentJobs.front());
                presentJobs.pop_front();
            }
            PresentationFrame frame = presentBackends[job.buffer]->Present(job.request);
            if (job.done)
                job.done(std::move(frame));
            {
                std::lock_guard<std::mutex> lock(presentMutex);
                presentBusy[job.buffer] = false;
            }
            presentWake.notify_all();
        }
    }

    void queuePresent(Command &c)
    {
        unsigned buffer;
        {
            std::unique_lock<std::mutex> lock(presentMutex);
            buffer = nextPresentBuffer;
            presentWake.wait(lock, [&] { return !presentBusy[buffer]; });
            presentBusy[buffer] = true;
            nextPresentBuffer = (buffer + 1u) % 2u;
        }
        auto &snapshot = presentSnapshots[buffer];
        if (!presentBackends[buffer])
            presentBackends[buffer] = std::make_unique<GSCpuBackend>();
        if (snapshot.size() != vramSize)
        {
            snapshot.assign(vramSize, 0u);
            presentBackends[buffer]->Initialize(snapshot.data(), vramSize);
        }
        std::memcpy(snapshot.data(), vram, vramSize);
        {
            std::lock_guard<std::mutex> lock(presentMutex);
            presentJobs.push_back({buffer, c.request, std::move(c.done)});
        }
        c.done = nullptr;
        presentWake.notify_all();
    }

    // Copies the displayed buffer's region from its (scaled) GPU target into a
    // presentation texture the window draws instead of the native frame.
    // Mirrors GSCpuBackend::PresentFromLocalMemory for the single-circuit
    // case; other setups keep the native frame.
    bool presentHd(const GSPresentationRequest &request)
    {
        const bool enable1 = (request.pmode & 1ull) != 0ull, enable2 = (request.pmode & 2ull) != 0ull;
        // Both circuits on is fine when they show the same buffer (this game
        // does); anything else keeps the native frame.
        if (!enable1 && !enable2)
            return false;
        if (enable1 && enable2 && (request.dispfb1 != request.dispfb2 || request.display1 != request.display2))
            return false;
        const uint64_t dispfb = enable1 ? request.dispfb1 : request.dispfb2;
        const uint64_t display = enable1 ? request.display1 : request.display2;
        uint32_t fbp = uint32_t(dispfb & 0x1FFu), fbw = uint32_t((dispfb >> 9) & 0x3Fu), psm = uint32_t((dispfb >> 15) & 0x1Fu);
        uint32_t originX = uint32_t((dispfb >> 32) & 0x7FFu), originY = uint32_t((dispfb >> 43) & 0x7FFu);
        const uint32_t dw = uint32_t((display >> 32) & 0x0FFFu), dh = uint32_t((display >> 44) & 0x07FFu);
        const uint32_t magh = uint32_t((display >> 23) & 0x0Fu);
        uint32_t width = (dw + 1u) / (magh + 1u), height = dh + 1u;
        if (width < 64u || height < 64u)
        {
            width = 640u;
            height = 448u;
        }
        width = std::min<uint32_t>(width, 640u);
        height = std::min<uint32_t>(height, 512u);
        if (request.hasPreferredSource && request.preferredDestFbp == fbp && request.preferredSource.fbw != 0u)
        {
            fbp = request.preferredSource.fbp;
            fbw = request.preferredSource.fbw;
            psm = request.preferredSource.psm;
            originX = originY = 0u;
        }
        const int index = findTarget(false, fbp, std::max<uint32_t>(fbw, 1u), psm);
        if (index < 0)
            return false;
        const Target &t = targets[size_t(index)];
        const int x0 = int(originX) * scale, y0 = int(originY) * scale;
        const int w = int(width) * scale, h = int(height) * scale;
        HdSlot &slot = hdSlots[hdNext];
        hdNext = (hdNext + 1u) % unsigned(hdSlots.size());
        if (slot.width != w || slot.height != h)
        {
            if (!slot.texture)
            {
                glGenTextures(1, &slot.texture);
                glGenFramebuffers(1, &slot.fbo);
            }
            glBindTexture(GL_TEXTURE_2D, slot.texture);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, nullptr);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glBindFramebuffer(GL_FRAMEBUFFER, slot.fbo);
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, slot.texture, 0);
            slot.width = w;
            slot.height = h;
        }
        glDisable(GL_SCISSOR_TEST);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glBindFramebuffer(GL_READ_FRAMEBUFFER, t.fbo);
        glReadBuffer(GL_COLOR_ATTACHMENT0);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, slot.fbo);
        glBlitFramebuffer(x0, y0, x0 + w, y0 + h, 0, 0, w, h, GL_COLOR_BUFFER_BIT, GL_NEAREST);
        // The display ignores frame-buffer alpha: make the copy opaque, as the
        // native path does, so the window's alpha blending shows it as-is.
        glBindFramebuffer(GL_FRAMEBUFFER, slot.fbo);
        glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_TRUE);
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        GLsync fence = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);
        glFlush();
        publishHdFrame(slot.texture, w, h, fence);
        return true;
    }

    // ------------------------------------------------------------ worker
    void run()
    {
        ThreadNaming::SetCurrentThreadName("GSGpu");
        glfwMakeContextCurrent(window);
        initGl();
        for (;;)
        {
            work.clear();
            {
                // Primitives usually arrive in bursts: poll briefly (without
                // the producer's lock) before sleeping, so push rarely needs
                // a system call.
                for (unsigned spin = 0; spin < 2048 && queued.load(std::memory_order_relaxed) == 0u; ++spin)
                    _mm_pause();
                std::unique_lock<std::mutex> lock(mutex);
                if (queue.empty() && !stop)
                {
                    sleeping = true;
                    wake.wait(lock, [&] { return stop || !queue.empty(); });
                    sleeping = false;
                }
                if (queue.empty() && stop)
                    break;
                work.swap(queue);
                queued.store(0, std::memory_order_relaxed);
            }
            for (Command &c : work)
                execute(c);
            bool notify;
            {
                std::lock_guard<std::mutex> lock(mutex);
                completed += work.size();
                notify = drainers != 0u;
            }
            if (notify)
                idle.notify_all();
        }
        flushBatch();
        glFinish();
        glfwMakeContextCurrent(nullptr);
    }

    void push(Command &&c)
    {
        bool notify;
        {
            std::lock_guard<std::mutex> lock(mutex);
            queue.push_back(std::move(c));
            ++submitted;
            queued.store(queue.size(), std::memory_order_relaxed);
            notify = sleeping;
        }
        if (notify)
            wake.notify_one();
    }

    void drain()
    {
        std::unique_lock<std::mutex> lock(mutex);
        const uint64_t target = submitted;
        ++drainers;
        idle.wait(lock, [&] { return completed >= target; });
        --drainers;
    }

    void initGl()
    {
        GLuint vs = compileShader(GL_VERTEX_SHADER, kVertexShader);
        GLuint fs = compileShader(GL_FRAGMENT_SHADER, kFragmentShader);
        program = glCreateProgram();
        glAttachShader(program, vs);
        glAttachShader(program, fs);
        glLinkProgram(program);
        GLint ok = 0;
        glGetProgramiv(program, GL_LINK_STATUS, &ok);
        if (!ok)
        {
            char log[2048];
            glGetProgramInfoLog(program, sizeof(log), nullptr, log);
            std::fprintf(stderr, "[TS:gs-gpu] program link failed: %s\n", log);
        }
        glDeleteShader(vs);
        glDeleteShader(fs);
#define TS_UNIFORM(name) name = glGetUniformLocation(program, #name)
        TS_UNIFORM(uTarget); TS_UNIFORM(uTexture); TS_UNIFORM(uTme); TS_UNIFORM(uCoordMode);
        TS_UNIFORM(uTexSize); TS_UNIFORM(uLinear); TS_UNIFORM(uWrap); TS_UNIFORM(uRegion); TS_UNIFORM(uReplaced);
        TS_UNIFORM(uTfx); TS_UNIFORM(uTcc); TS_UNIFORM(uIip); TS_UNIFORM(uAtest); TS_UNIFORM(uAref);
        TS_UNIFORM(uAfail); TS_UNIFORM(uFge); TS_UNIFORM(uFogColor); TS_UNIFORM(uFba); TS_UNIFORM(uPabe);
        TS_UNIFORM(uFactor);
#undef TS_UNIFORM
        glGenVertexArrays(1, &vao);
        glGenBuffers(1, &vbo);
        glBindVertexArray(vao);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<void *>(offsetof(Vertex, x)));
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<void *>(offsetof(Vertex, r)));
        glEnableVertexAttribArray(2);
        glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<void *>(offsetof(Vertex, s)));
        glEnableVertexAttribArray(3);
        glVertexAttribPointer(3, 1, GL_FLOAT, GL_FALSE, sizeof(Vertex), reinterpret_cast<void *>(offsetof(Vertex, fog)));
        glPixelStorei(GL_PACK_ALIGNMENT, 1);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

        GLuint pvs = compileShader(GL_VERTEX_SHADER, kPackVertexShader);
        GLuint pfs = compileShader(GL_FRAGMENT_SHADER, kPackFragmentShader);
        packProgram = glCreateProgram();
        glAttachShader(packProgram, pvs);
        glAttachShader(packProgram, pfs);
        glLinkProgram(packProgram);
        glGetProgramiv(packProgram, GL_LINK_STATUS, &ok);
        if (!ok)
        {
            char log[2048];
            glGetProgramInfoLog(packProgram, sizeof(log), nullptr, log);
            std::fprintf(stderr, "[TS:gs-gpu] pack program link failed: %s\n", log);
        }
        glDeleteShader(pvs);
        glDeleteShader(pfs);
        uPackSource = glGetUniformLocation(packProgram, "uSource");
        uPackScale = glGetUniformLocation(packProgram, "uScale");
        uPackMode = glGetUniformLocation(packProgram, "uMode");
        uPackFirst = glGetUniformLocation(packProgram, "uFirst");
        glGenVertexArrays(1, &packVao);
        glGenFramebuffers(1, &packFbo);
    }

    // Packs rows [first, first + rows) of a target into GS pixel values.
    const uint32_t *packRows(const Target &t, int width, int first, int rows)
    {
        if (width > packWidth)
        {
            if (packTexture)
                glDeleteTextures(1, &packTexture);
            glGenTextures(1, &packTexture);
            glBindTexture(GL_TEXTURE_2D, packTexture);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_R32UI, width, kTargetHeight, 0, GL_RED_INTEGER, GL_UNSIGNED_INT, nullptr);
            glBindFramebuffer(GL_FRAMEBUFFER, packFbo);
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, packTexture, 0);
            packWidth = width;
        }
        glBindFramebuffer(GL_FRAMEBUFFER, packFbo);
        glViewport(0, 0, width, rows);
        glDisable(GL_SCISSOR_TEST);
        glDisable(GL_BLEND);
        glDisable(GL_DEPTH_TEST);
        glDepthMask(GL_FALSE);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glUseProgram(packProgram);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, t.texture);
        glUniform1i(uPackSource, 0);
        const bool sixteen = t.psm == GS_PSM_CT16 || t.psm == GS_PSM_CT16S;
        glUniform1i(uPackMode, t.depth ? 2 : sixteen ? 1 : 0);
        glUniform1i(uPackFirst, first);
        glUniform1i(uPackScale, scale);
        glBindVertexArray(packVao);
        glDrawArrays(GL_TRIANGLES, 0, 3);
        packValues.resize(size_t(width) * size_t(rows));
        glReadBuffer(GL_COLOR_ATTACHMENT0);
        glReadPixels(0, 0, width, rows, GL_RED_INTEGER, GL_UNSIGNED_INT, packValues.data());
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        glDepthMask(GL_TRUE);
        return packValues.data();
    }

    // ------------------------------------------------------- local memory
    void bumpPages(const GSCpuBackend::VramRange &range)
    {
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
        {
            for (uint32_t &v : pageVersion)
                ++v;
            return;
        }
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            ++pageVersion[p];
    }

    uint64_t versionSum(const GSCpuBackend::VramRange &range) const
    {
        uint64_t sum = 0;
        if (range.end == UINT64_MAX || range.end > kPageCount * kPageBytes)
        {
            for (uint32_t v : pageVersion)
                sum = sum * 31u + v;
            return sum;
        }
        for (uint64_t p = range.begin / kPageBytes; p < (range.end + kPageBytes - 1) / kPageBytes && p < kPageCount; ++p)
            sum = sum * 31u + pageVersion[p];
        return sum;
    }

    // Copies the drawn rows of a GPU target back into GS local memory.
    void writeBack(Target &t)
    {
        if (!t.gpuDirty || t.rows == 0u)
            return;
        flushBatch();
        const int width = int(t.fbw * 64u);
        const int first = std::max(0, t.dirtyMin);
        const int last = std::min(int(t.rows) - 1, t.dirtyMax);
        if (last >= first)
        {
            const int rows = last - first + 1;
            const uint32_t *values = packRows(t, width, first, rows);
            cpu.WriteVramRect(t.psm, t.base * 32u, t.fbw, 0u, uint32_t(first), uint32_t(width), uint32_t(rows),
                              values);
            cpu.TextureFlush(); // its page cache may hold the old contents
        }
        t.gpuDirty = false;
        t.dirtyMin = INT_MAX;
        t.dirtyMax = -1;
        bumpPages(t.range);
    }

    // Loads rows [from, to) of a target from GS local memory.
    void loadRows(Target &t, uint32_t from, uint32_t to)
    {
        if (to <= from)
            return;
        flushBatch();
        const int width = int(t.fbw * 64u);
        const int count = int(to - from);
        if (t.depth)
        {
            std::vector<float> depth(size_t(width) * count);
            for (int y = 0; y < count; ++y)
                for (int x = 0; x < width; ++x)
                {
                    const uint32_t z = cpu.ReadVram(t.psm, t.base * 32u, t.fbw, uint32_t(x), from + uint32_t(y));
                    depth[size_t(y) * width + x] = float(double(z) / 4294967296.0);
                }
            if (scale == 1)
            {
                glBindTexture(GL_TEXTURE_2D, t.texture);
                glTexSubImage2D(GL_TEXTURE_2D, 0, 0, int(from), width, count, GL_DEPTH_COMPONENT, GL_FLOAT, depth.data());
            }
            else
                uploadScaled(t, int(from), width, count, depth.data());
            return;
        }
        const bool sixteen = t.psm == GS_PSM_CT16 || t.psm == GS_PSM_CT16S;
        std::vector<float> pixels(size_t(width) * count * 4u);
        for (int y = 0; y < count; ++y)
            for (int x = 0; x < width; ++x)
            {
                uint32_t v = cpu.ReadVram(t.psm, t.base * 32u, t.fbw, uint32_t(x), from + uint32_t(y));
                if (sixteen)
                    v = ((v & 0x1Fu) << 3) | (((v >> 5) & 0x1Fu) << 11) | (((v >> 10) & 0x1Fu) << 19) |
                        (((v >> 15) & 1u) << 31);
                float *p = &pixels[(size_t(y) * width + x) * 4u];
                p[0] = float(v & 0xFFu) / 255.0f;
                p[1] = float((v >> 8) & 0xFFu) / 255.0f;
                p[2] = float((v >> 16) & 0xFFu) / 255.0f;
                p[3] = float(t.psm == GS_PSM_CT24 ? 0x80u : (v >> 24) & 0xFFu) / 128.0f;
            }
        if (scale == 1)
        {
            glBindTexture(GL_TEXTURE_2D, t.texture);
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, int(from), width, count, GL_RGBA, GL_FLOAT, pixels.data());
        }
        else
            uploadScaled(t, int(from), width, count, pixels.data());
    }

    // Uploads native-resolution rows into a scaled target: through a native
    // staging texture, then a nearest-neighbour blit.
    void uploadScaled(Target &t, int from, int width, int count, const float *data)
    {
        if (width > uploadWidth || count > uploadHeight)
        {
            uploadWidth = std::max(uploadWidth, width);
            uploadHeight = std::max(uploadHeight, count);
            if (!uploadColor)
            {
                glGenTextures(1, &uploadColor);
                glGenTextures(1, &uploadDepth);
                glGenFramebuffers(1, &uploadColorFbo);
                glGenFramebuffers(1, &uploadDepthFbo);
                glGenFramebuffers(1, &blitDepthFbo);
            }
            glBindTexture(GL_TEXTURE_2D, uploadColor);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, uploadWidth, uploadHeight, 0, GL_RGBA, GL_FLOAT, nullptr);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glBindTexture(GL_TEXTURE_2D, uploadDepth);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT32F, uploadWidth, uploadHeight, 0, GL_DEPTH_COMPONENT,
                         GL_FLOAT, nullptr);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
            glBindFramebuffer(GL_FRAMEBUFFER, uploadColorFbo);
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, uploadColor, 0);
            glBindFramebuffer(GL_FRAMEBUFFER, uploadDepthFbo);
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, uploadDepth, 0);
            glDrawBuffer(GL_NONE);
            glReadBuffer(GL_NONE);
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
        }
        glBindTexture(GL_TEXTURE_2D, t.depth ? uploadDepth : uploadColor);
        glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, count, t.depth ? GL_DEPTH_COMPONENT : GL_RGBA, GL_FLOAT, data);
        glDisable(GL_SCISSOR_TEST);
        if (t.depth)
        {
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, blitDepthFbo);
            glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, t.texture, 0);
            glDrawBuffer(GL_NONE);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, uploadDepthFbo);
            glBlitFramebuffer(0, 0, width, count, 0, from * scale, width * scale, (from + count) * scale,
                              GL_DEPTH_BUFFER_BIT, GL_NEAREST);
        }
        else
        {
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, t.fbo);
            glBindFramebuffer(GL_READ_FRAMEBUFFER, uploadColorFbo);
            glReadBuffer(GL_COLOR_ATTACHMENT0);
            glBlitFramebuffer(0, 0, width, count, 0, from * scale, width * scale, (from + count) * scale,
                              GL_COLOR_BUFFER_BIT, GL_NEAREST);
        }
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
    }

    void dropTarget(size_t index)
    {
        flushBatch(); // the open batch refers to targets by index
        Target &t = targets[index];
        writeBack(t);
        if (t.fbo)
            glDeleteFramebuffers(1, &t.fbo);
        glDeleteTextures(1, &t.texture);
        targets.erase(targets.begin() + long(index));
    }

    // Writes back every GPU target overlapping range; optionally drops them
    // (their mirror becomes stale after a CPU-side write).
    void syncRange(const GSCpuBackend::VramRange &range, bool drop)
    {
        for (size_t i = 0; i < targets.size();)
        {
            if (overlaps(targets[i].range, range))
            {
                writeBack(targets[i]);
                if (drop)
                {
                    dropTarget(i);
                    continue;
                }
            }
            ++i;
        }
    }

    // Finds or creates the target for a buffer, making rows [0, rows) valid.
    int acquireTarget(bool depth, uint32_t base, uint32_t fbw, uint32_t psm, uint32_t rows)
    {
        rows = std::min<uint32_t>(std::max<uint32_t>(rows, 1u), kTargetHeight);
        fbw = std::max<uint32_t>(fbw, 1u);
        const bool depthPsm = depth;
        auto sameFormat = [&](const Target &t) {
            const bool a16 = t.psm == GS_PSM_CT16 || t.psm == GS_PSM_CT16S || t.psm == GS_PSM_Z16 || t.psm == GS_PSM_Z16S;
            const bool b16 = psm == GS_PSM_CT16 || psm == GS_PSM_CT16S || psm == GS_PSM_Z16 || psm == GS_PSM_Z16S;
            return t.psm == psm || (a16 == b16 && t.depth == depthPsm);
        };
        for (size_t i = 0; i < targets.size(); ++i)
        {
            Target &t = targets[i];
            if (t.depth == depth && t.base == base && t.fbw == fbw && sameFormat(t) && t.psm == psm)
            {
                if (rows > t.rows)
                {
                    const auto grown = frameRangeRows(psm, base, fbw, rows);
                    // Growing may cover other targets: sync them first.
                    for (size_t j = 0; j < targets.size();)
                    {
                        if (j != i && overlaps(targets[j].range, grown))
                        {
                            dropTarget(j);
                            if (j < i)
                                --i;
                            continue;
                        }
                        ++j;
                    }
                    Target &g = targets[i];
                    loadRows(g, g.rows, rows);
                    g.rows = rows;
                    g.range = grown;
                }
                return int(i);
            }
        }
        const auto range = frameRangeRows(psm, base, fbw, rows);
        for (size_t j = 0; j < targets.size();)
        {
            if (overlaps(targets[j].range, range))
            {
                dropTarget(j);
                continue;
            }
            ++j;
        }
        Target t;
        t.depth = depth;
        t.base = base;
        t.fbw = fbw;
        t.psm = psm;
        t.rows = rows;
        t.range = range;
        const int width = int(fbw * 64u);
        glGenTextures(1, &t.texture);
        glBindTexture(GL_TEXTURE_2D, t.texture);
        if (depth)
            glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT32F, width * scale, kTargetHeight * scale, 0,
                         GL_DEPTH_COMPONENT, GL_FLOAT, nullptr);
        else
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA16F, width * scale, kTargetHeight * scale, 0, GL_RGBA, GL_FLOAT,
                         nullptr);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        if (!depth)
        {
            glGenFramebuffers(1, &t.fbo);
            glBindFramebuffer(GL_FRAMEBUFFER, t.fbo);
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, t.texture, 0);
            glBindFramebuffer(GL_FRAMEBUFFER, 0);
        }
        targets.push_back(t);
        loadRows(targets.back(), 0, rows);
        return int(targets.size() - 1);
    }

    // --------------------------------------------------------- textures
    // Returns the texture to bind; replaced is set when it is a replacement.
    GLuint acquireTexture(const GSDrawState &state, bool &replaced)
    {
        replaced = false;
        const auto &tex = state.context.tex0;
        const uint32_t texW = std::max<uint32_t>(1u, state.textureWidth);
        const uint32_t texH = std::max<uint32_t>(1u, state.textureHeight);
        GSDrawState full = state;
        full.context.clamp = 0; // decode covers the whole texture
        const auto range = GSCpuBackend::TextureRange(full);
        // Render-to-texture: bring GPU results into local memory first.
        bool renderTarget = false;
        for (Target &t : targets)
        {
            if (!overlaps(t.range, range))
                continue;
            renderTarget = true;
            if (t.gpuDirty)
                writeBack(t);
        }
        const bool indexed = tex.psm == GS_PSM_T8 || tex.psm == GS_PSM_T4 || tex.psm == GS_PSM_T8H ||
                             tex.psm == GS_PSM_T4HL || tex.psm == GS_PSM_T4HH;
        const uint32_t texa = uint32_t(state.texa.ta0) | (uint32_t(state.texa.ta1) << 8) | (state.texa.aem ? 0x10000u : 0u);
        const uint64_t hash = indexed ? clutHash : 0u;
        const uint64_t versions = versionSum(range);
        for (TextureEntry &e : textures)
        {
            if (e.tbp0 == tex.tbp0 && e.tbw == tex.tbw && e.psm == tex.psm && e.width == texW && e.height == texH &&
                e.texa == texa && e.clutHash == hash &&
                (!indexed || (e.cpsm == tex.cpsm && e.csm == tex.csm && e.csa == tex.csa)))
            {
                if (e.versionSum != versions)
                {
                    e.renderTarget = renderTarget;
                    uploadTexture(e, state, texW, texH);
                    e.versionSum = versions;
                }
                e.lastUse = ++textureTick;
                replaced = e.replacement != 0;
                return replaced ? e.replacement : e.texture;
            }
        }
        if (textures.size() >= 512)
        {
            auto oldest = std::min_element(textures.begin(), textures.end(),
                                           [](const TextureEntry &a, const TextureEntry &b) { return a.lastUse < b.lastUse; });
            glDeleteTextures(1, &oldest->texture);
            textures.erase(oldest);
        }
        TextureEntry e{tex.tbp0, tex.tbw, tex.psm, texW, texH, tex.cpsm, tex.csm, tex.csa, texa, hash, versions,
                       ++textureTick, range, 0};
        e.renderTarget = renderTarget;
        glGenTextures(1, &e.texture);
        uploadTexture(e, state, texW, texH);
        textures.push_back(e);
        replaced = e.replacement != 0;
        return replaced ? e.replacement : e.texture;
    }

    void uploadTexture(TextureEntry &e, const GSDrawState &state, uint32_t w, uint32_t h)
    {
        std::vector<uint32_t> texels;
        cpu.DecodeTexture(state, texels);
        e.replacement = 0;
        if (!e.renderTarget && texels.size() >= size_t(w) * h && gs_texture_replacement::active())
        {
            const uint64_t contentHash = gs_texture_replacement::hash(texels.data(), w, h);
            gs_texture_replacement::dump(contentHash, texels.data(), w, h);
            e.replacement = replacementTexture(contentHash);
        }
        glBindTexture(GL_TEXTURE_2D, e.texture);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, int(w), int(h), 0, GL_RGBA, GL_UNSIGNED_BYTE, texels.data());
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    }

    GLuint replacementTexture(uint64_t contentHash)
    {
        if (const auto found = replacementTextures.find(contentHash); found != replacementTextures.end())
            return found->second;
        GLuint texture = 0;
        std::vector<uint32_t> texels;
        int width = 0, height = 0;
        if (gs_texture_replacement::load(contentHash, texels, width, height))
        {
            glGenTextures(1, &texture);
            glBindTexture(GL_TEXTURE_2D, texture);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, texels.data());
            glGenerateMipmap(GL_TEXTURE_2D);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        }
        replacementTextures[contentHash] = texture;
        return texture;
    }

    void refreshClutHash()
    {
        std::array<uint16_t, 512> clut{};
        std::array<uint32_t, 2> cbp{};
        cpu.GetClutState(clut, cbp);
        uint64_t h = 0xcbf29ce484222325ull;
        for (uint16_t v : clut)
            h = (h ^ v) * 0x100000001b3ull;
        clutHash = h;
    }

    // ------------------------------------------------------------ drawing
    void flushBatch()
    {
        if (!batchOpen || vertices.empty())
        {
            vertices.clear();
            return;
        }
        const DrawKey &k = batchKey;
        Target &color = targets[size_t(k.colorTarget)];
        glBindFramebuffer(GL_FRAMEBUFFER, color.fbo);
        if (k.depthTarget >= 0)
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, targets[size_t(k.depthTarget)].texture, 0);
        else
            glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, 0, 0);
        const int width = int(color.fbw * 64u);
        glViewport(0, 0, width * scale, kTargetHeight * scale);
        glEnable(GL_SCISSOR_TEST);
        glScissor(k.scissorX0 * scale, k.scissorY0 * scale, (k.scissorX1 - k.scissorX0 + 1) * scale,
                  (k.scissorY1 - k.scissorY0 + 1) * scale);
        glUseProgram(program);
        glUniform2f(uTarget, float(width), float(kTargetHeight));
        glUniform1i(uTexture, 0);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, k.texture);
        glUniform1i(uTme, k.tme);
        glUniform1i(uCoordMode, k.coordMode);
        glUniform2i(uTexSize, k.texW, k.texH);
        glUniform1i(uLinear, k.linear);
        glUniform2i(uWrap, k.wrapU, k.wrapV);
        glUniform4i(uRegion, k.regionMinU, k.regionMaxU, k.regionMinV, k.regionMaxV);
        glUniform1i(uReplaced, k.replaced);
        if (k.replaced)
        {
            // Repeat wrapping is done by the sampler so filtering stays seamless.
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, k.wrapU == 0 || k.wrapU == 3 ? GL_REPEAT : GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, k.wrapV == 0 || k.wrapV == 3 ? GL_REPEAT : GL_CLAMP_TO_EDGE);
        }
        glUniform1i(uTfx, k.tfx);
        glUniform1i(uTcc, k.tcc);
        glUniform1i(uIip, k.iip);
        glUniform1i(uAtest, k.atest);
        glUniform1i(uAref, k.aref);
        glUniform1i(uAfail, k.afail);
        glUniform1i(uFge, k.fge);
        glUniform3f(uFogColor, float(k.fogR), float(k.fogG), float(k.fogB));
        glUniform1i(uFba, k.fba);
        glUniform1i(uPabe, k.pabe);
        glUniform1i(uFactor, k.blendC);
        // Depth
        if (k.depthTarget >= 0 && k.ztest != 1)
        {
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(k.ztest == 0 ? GL_NEVER : k.ztest == 2 ? GL_GEQUAL : GL_GREATER);
        }
        else if (k.depthTarget >= 0)
        {
            glEnable(GL_DEPTH_TEST);
            glDepthFunc(GL_ALWAYS);
        }
        else
            glDisable(GL_DEPTH_TEST);
        glDepthMask(k.zwrite ? GL_TRUE : GL_FALSE);
        glColorMask((k.colorMask & 1) != 0, (k.colorMask & 2) != 0, (k.colorMask & 4) != 0, (k.colorMask & 8) != 0);
        applyBlend(k);
        glBindVertexArray(vao);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, GLsizeiptr(vertices.size() * sizeof(Vertex)), vertices.data(), GL_STREAM_DRAW);
        glDrawArrays(k.topology, 0, GLsizei(vertices.size()));
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glDepthMask(GL_TRUE);
        glDisable(GL_SCISSOR_TEST);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        vertices.clear();
        batchOpen = false;
    }

    // GS blend: ((A - B) * C >> 7) + D, A/B/D in {Cs, Cd, 0}, C in {As, Ad, FIX}.
    void applyBlend(const DrawKey &k)
    {
        if (!k.blend)
        {
            glDisable(GL_BLEND);
            return;
        }
        glEnable(GL_BLEND);
        GLenum f = k.blendC == 0 ? GL_SRC1_ALPHA : k.blendC == 1 ? GL_DST_ALPHA : GL_CONSTANT_ALPHA;
        GLenum inv = k.blendC == 0 ? GL_ONE_MINUS_SRC1_ALPHA : k.blendC == 1 ? GL_ONE_MINUS_DST_ALPHA : GL_ONE_MINUS_CONSTANT_ALPHA;
        glBlendColor(0.0f, 0.0f, 0.0f, float(k.fix) / 128.0f);
        GLenum eq = GL_FUNC_ADD, src = GL_ONE, dst = GL_ZERO;
        const int a = k.blendA, b = k.blendB, d = k.blendD; // 0 Cs, 1 Cd, 2 zero
        if (a == b)
        {
            src = d == 0 ? GL_ONE : GL_ZERO;
            dst = d == 1 ? GL_ONE : GL_ZERO;
        }
        else if (a == 0 && b == 1 && d == 1) { src = f; dst = inv; }
        else if (a == 0 && b == 2 && d == 1) { src = f; dst = GL_ONE; }
        else if (a == 0 && b == 2 && d == 2) { src = f; dst = GL_ZERO; }
        else if (a == 1 && b == 0 && d == 0) { src = inv; dst = f; }
        else if (a == 1 && b == 2 && d == 0) { src = GL_ONE; dst = f; }
        else if (a == 2 && b == 0 && d == 1) { eq = GL_FUNC_REVERSE_SUBTRACT; src = f; dst = GL_ONE; }
        else if (a == 2 && b == 1 && d == 1) { src = GL_ZERO; dst = inv; }
        else if (a == 0 && b == 1 && d == 2) { eq = GL_FUNC_SUBTRACT; src = f; dst = f; }
        else if (a == 1 && b == 0 && d == 2) { eq = GL_FUNC_REVERSE_SUBTRACT; src = f; dst = f; }
        else if (a == 1 && b == 2 && d == 2) { src = GL_ZERO; dst = f; }
        else if (a == 2 && b == 0 && d == 0) { src = inv; dst = GL_ZERO; }
        else if (a == 2 && b == 1 && d == 0) { eq = GL_FUNC_SUBTRACT; src = GL_ONE; dst = f; }
        else if (a == 0 && b == 2 && d == 0) { src = GL_ONE; dst = GL_ZERO; }      // Cs*(1+C): approximated
        else if (a == 1 && b == 2 && d == 1) { src = GL_ZERO; dst = GL_ONE; }      // Cd*(1+C): approximated
        else { src = GL_ONE; dst = GL_ZERO; }
        glBlendEquationSeparate(eq, GL_FUNC_ADD);
        glBlendFuncSeparate(src, dst, GL_ONE, GL_ZERO);
    }

    void submit(const GSPrimitiveBatch &batch)
    {
        const GSDrawState &state = batch.state;
        const auto &ctx = state.context;
        const uint64_t test = ctx.test;
        const int ztest = int((test >> 17) & 3u);
        if (ztest == 0)
            return; // depth test NEVER
        const uint32_t fbw = std::max<uint32_t>(ctx.frame.fbw, 1u);
        const uint32_t rows = uint32_t(ctx.scissor.y1) + 1u;

        GLuint texture = 0;
        bool replaced = false;
        if (state.prim.tme)
            texture = acquireTexture(state, replaced);
        const int colorTarget = acquireTarget(false, ctx.frame.fbp, fbw, ctx.frame.psm, rows);
        const bool depthUsed = ztest != 1 || !ctx.zbuf.zmask;
        int depthTarget = -1;
        if (depthUsed)
            depthTarget = acquireTarget(true, ctx.zbuf.zbp, fbw, ctx.zbuf.psm, rows);
        // acquireTarget may have erased entries: re-resolve the colour index.
        const int color = findTarget(false, ctx.frame.fbp, fbw, ctx.frame.psm);
        (void)colorTarget;

        DrawKey k{};
        k.colorTarget = color;
        k.depthTarget = depthTarget >= 0 ? findTarget(true, ctx.zbuf.zbp, fbw, ctx.zbuf.psm) : -1;
        k.texture = texture;
        switch (state.prim.type)
        {
        case GS_PRIM_POINT: k.topology = GL_POINTS; break;
        case GS_PRIM_LINE:
        case GS_PRIM_LINESTRIP: k.topology = GL_LINES; break;
        default: k.topology = GL_TRIANGLES; break;
        }
        k.tme = state.prim.tme ? 1 : 0;
        const bool sprite = state.prim.type == GS_PRIM_SPRITE;
        k.coordMode = (state.prim.fst || sprite) ? 0 : 1;
        k.texW = std::max<int>(1, state.textureWidth);
        k.texH = std::max<int>(1, state.textureHeight);
        k.linear = state.linearFilter ? 1 : 0;
        k.replaced = replaced ? 1 : 0;
        const uint64_t clamp = ctx.clamp;
        k.wrapU = int(clamp & 3u);
        k.wrapV = int((clamp >> 2) & 3u);
        k.regionMinU = int((clamp >> 4) & 0x3FFu);
        k.regionMaxU = int((clamp >> 14) & 0x3FFu);
        k.regionMinV = int((clamp >> 24) & 0x3FFu);
        k.regionMaxV = int((clamp >> 34) & 0x3FFu);
        k.tfx = ctx.tex0.tfx;
        k.tcc = ctx.tex0.tcc;
        k.iip = state.prim.iip ? 1 : 0;
        k.atest = (test & 1u) ? int(((test >> 1) & 7u) + 1u) : 0;
        k.aref = int((test >> 4) & 0xFFu);
        k.afail = int((test >> 12) & 3u);
        k.fge = state.prim.fge ? 1 : 0;
        k.fogR = state.fogR;
        k.fogG = state.fogG;
        k.fogB = state.fogB;
        k.fba = ((ctx.fba & 1u) != 0u && ctx.frame.psm != GS_PSM_CT24) ? 1 : 0;
        k.pabe = state.pabe ? 1 : 0;
        k.blend = state.prim.abe ? 1 : 0;
        k.blendA = int(ctx.alpha & 3u);
        k.blendB = int((ctx.alpha >> 2) & 3u);
        k.blendC = int((ctx.alpha >> 4) & 3u);
        k.blendD = int((ctx.alpha >> 6) & 3u);
        if (k.blendA == 3) k.blendA = 2;
        if (k.blendB == 3) k.blendB = 2;
        if (k.blendD == 3) k.blendD = 2;
        if (k.blendC == 3) k.blendC = 2;
        k.fix = int((ctx.alpha >> 32) & 0xFFu);
        k.ztest = ztest;
        k.zwrite = (!ctx.zbuf.zmask && k.depthTarget >= 0) ? 1 : 0;
        const uint32_t msk = ctx.frame.fbmsk;
        k.colorMask = ((msk & 0x000000FFu) != 0x000000FFu ? 1 : 0) | ((msk & 0x0000FF00u) != 0x0000FF00u ? 2 : 0) |
                      ((msk & 0x00FF0000u) != 0x00FF0000u ? 4 : 0) |
                      ((msk & 0xFF000000u) != 0xFF000000u && ctx.frame.psm != GS_PSM_CT24 ? 8 : 0);
        k.scissorX0 = ctx.scissor.x0;
        k.scissorY0 = ctx.scissor.y0;
        k.scissorX1 = std::max<int>(ctx.scissor.x0, ctx.scissor.x1);
        k.scissorY1 = std::max<int>(ctx.scissor.y0, ctx.scissor.y1);

        if (!batchOpen || !(k == batchKey))
        {
            flushBatch();
            batchKey = k;
            batchOpen = true;
        }
        auto markDirty = [&](Target &t) {
            t.gpuDirty = true;
            t.dirtyMin = std::min(t.dirtyMin, k.scissorY0);
            t.dirtyMax = std::max(t.dirtyMax, k.scissorY1);
        };
        markDirty(targets[size_t(k.colorTarget)]);
        if (k.zwrite)
            markDirty(targets[size_t(k.depthTarget)]);

        const float ofx = float(int(ctx.xyoffset.ofx >> 4));
        const float ofy = float(int(ctx.xyoffset.ofy >> 4));
        auto vertex = [&](const GSVertex &v, float s, float t, float q) {
            Vertex out;
            out.x = v.x - ofx;
            out.y = v.y - ofy;
            out.z = float(v.z / 4294967296.0);
            out.r = v.r;
            out.g = v.g;
            out.b = v.b;
            out.a = v.a;
            out.s = s;
            out.t = t;
            out.q = q;
            out.fog = v.fog;
            return out;
        };
        auto coords = [&](const GSVertex &v, float &s, float &t, float &q) {
            if (state.prim.fst)
            {
                s = float(v.u) / 16.0f;
                t = float(v.v) / 16.0f;
                q = 1.0f;
            }
            else
            {
                s = v.s;
                t = v.t;
                q = v.q;
            }
        };

        if (state.prim.type == GS_PRIM_SPRITE)
        {
            const GSVertex &a = batch.vertices[0];
            const GSVertex &b = batch.vertices[1];
            float s0, t0, s1, t1;
            if (state.prim.fst)
            {
                s0 = float(a.u >> 4); t0 = float(a.v >> 4);
                s1 = float(b.u >> 4); t1 = float(b.v >> 4);
            }
            else
            {
                const float q0 = std::fabs(a.q) > 1e-8f ? a.q : 1.0f;
                const float q1 = std::fabs(b.q) > 1e-8f ? b.q : 1.0f;
                s0 = a.s / q0 * float(k.texW); t0 = a.t / q0 * float(k.texH);
                s1 = b.s / q1 * float(k.texW); t1 = b.t / q1 * float(k.texH);
            }
            GSVertex c = b; // sprites use the second vertex colour, depth and fog
            GSVertex p00 = c, p10 = c, p01 = c, p11 = c;
            p00.x = a.x; p00.y = a.y;
            p10.x = b.x; p10.y = a.y;
            p01.x = a.x; p01.y = b.y;
            p11.x = b.x; p11.y = b.y;
            const Vertex v00 = vertex(p00, s0, t0, 1.0f), v10 = vertex(p10, s1, t0, 1.0f);
            const Vertex v01 = vertex(p01, s0, t1, 1.0f), v11 = vertex(p11, s1, t1, 1.0f);
            vertices.push_back(v00); vertices.push_back(v10); vertices.push_back(v11);
            vertices.push_back(v00); vertices.push_back(v11); vertices.push_back(v01);
            return;
        }
        const unsigned count = k.topology == GL_TRIANGLES ? 3u : k.topology == GL_LINES ? 2u : 1u;
        for (unsigned i = 0; i < count; ++i)
        {
            float s, t, q;
            coords(batch.vertices[i], s, t, q);
            vertices.push_back(vertex(batch.vertices[i], s, t, q));
        }
    }

    int findTarget(bool depth, uint32_t base, uint32_t fbw, uint32_t psm) const
    {
        for (size_t i = 0; i < targets.size(); ++i)
            if (targets[i].depth == depth && targets[i].base == base && targets[i].fbw == std::max<uint32_t>(fbw, 1u) &&
                targets[i].psm == psm)
                return int(i);
        return -1;
    }

    void syncAll()
    {
        flushBatch();
        for (Target &t : targets)
            writeBack(t);
    }

    // ------------------------------------------------------------ commands
    void execute(Command &c)
    {
        switch (c.kind)
        {
        case Kind::Submit:
            submit(c.batch);
            break;
        case Kind::LoadClut:
        {
            GSDrawState state{};
            state.context.tex0 = c.tex0;
            state.context.tex0.psm = GS_PSM_CT32;
            (void)state;
            // The CLUT may come from a GPU-rendered buffer.
            const uint64_t begin = uint64_t(c.tex0.cbp / 32u) * kPageBytes;
            syncRange({begin, begin + 2u * kPageBytes}, false);
            cpu.LoadClut(c.tex0, c.texclut);
            refreshClutHash();
            break;
        }
        case Kind::BeginTransfer:
        {
            flushBatch();
            if (c.transfer.direction == 0u)
            {
                // Host -> local: the destination's GPU mirrors become stale.
                const auto dest = frameRangeRows(c.transfer.bitbltbuf.dpsm, c.transfer.bitbltbuf.dbp / 32u,
                                                 c.transfer.bitbltbuf.dbw,
                                                 uint32_t(c.transfer.trxpos.dsay) + c.transfer.trxreg.rrh + 1u);
                syncRange({dest.begin, dest.end == UINT64_MAX ? UINT64_MAX : dest.end + 2u * kPageBytes}, true);
            }
            else if (c.transfer.direction == 1u)
            {
                // Local -> host: only buffers covering the source matter.
                const auto source = frameRangeRows(c.transfer.bitbltbuf.spsm, c.transfer.bitbltbuf.sbp / 32u,
                                                   c.transfer.bitbltbuf.sbw,
                                                   uint32_t(c.transfer.trxpos.ssay) + c.transfer.trxreg.rrh + 1u);
                syncRange({source.begin, source.end == UINT64_MAX ? UINT64_MAX : source.end + 2u * kPageBytes}, false);
            }
            else
                syncAll();
            if (c.transfer.direction == 2u)
            {
                // Local -> local rewrites destination pages.
                for (size_t i = 0; i < targets.size();)
                    dropTarget(i);
            }
            cpu.BeginTransfer(c.transfer);
            if (c.transfer.direction == 2u)
                bumpPages({0, UINT64_MAX});
            break;
        }
        case Kind::Upload:
            cpu.UploadImage(c.payload.data(), uint32_t(c.payload.size()));
            bumpPages({0, UINT64_MAX});
            break;
        case Kind::Flush:
            flushBatch();
            break;
        case Kind::Clear:
            clear(c.context, c.values[0]);
            break;
        case Kind::WriteVram:
            syncAll();
            for (size_t i = 0; i < targets.size();)
                dropTarget(i);
            cpu.WriteVram(c.values[0], c.values[1], c.values[2], c.values[3], c.values[4], c.values[5]);
            bumpPages({0, UINT64_MAX});
            break;
        case Kind::Present:
        {
            flushBatch();
            for (Target &t : targets)
                if (!t.depth)
                    writeBack(t);
            if (scale > 1 && !presentHd(c.request))
                publishHdFrame(0, 0, 0, nullptr); // the window shows the native frame
            queuePresent(c);
            break;
        }
        case Kind::SyncMemory:
            syncAll();
            glFinish();
            break;
        case Kind::Reset:
            flushBatch();
            while (!targets.empty())
            {
                targets.back().gpuDirty = false;
                dropTarget(targets.size() - 1);
            }
            for (TextureEntry &e : textures)
                glDeleteTextures(1, &e.texture);
            textures.clear();
            cpu.Reset();
            refreshClutHash();
            break;
        }
    }

    void clear(const GSContext &ctx, uint32_t rgba)
    {
        const uint32_t fbw = std::max<uint32_t>(ctx.frame.fbw, 1u);
        const uint32_t rows = uint32_t(std::max(ctx.scissor.y0, ctx.scissor.y1)) + 1u;
        acquireTarget(false, ctx.frame.fbp, fbw, ctx.frame.psm, rows);
        const int index = findTarget(false, ctx.frame.fbp, fbw, ctx.frame.psm);
        flushBatch();
        Target &t = targets[size_t(index)];
        uint8_t a = uint8_t(rgba >> 24);
        if ((ctx.fba & 1ull) != 0ull && ctx.frame.psm != GS_PSM_CT24)
            a |= 0x80u;
        glBindFramebuffer(GL_FRAMEBUFFER, t.fbo);
        glEnable(GL_SCISSOR_TEST);
        glScissor(int(ctx.scissor.x0) * scale, int(ctx.scissor.y0) * scale,
                  (std::max(ctx.scissor.x0, ctx.scissor.x1) - ctx.scissor.x0 + 1) * scale,
                  (std::max(ctx.scissor.y0, ctx.scissor.y1) - ctx.scissor.y0 + 1) * scale);
        const uint32_t msk = ctx.frame.fbmsk;
        glColorMask((msk & 0xFFu) != 0xFFu, (msk & 0xFF00u) != 0xFF00u, (msk & 0xFF0000u) != 0xFF0000u,
                    (msk & 0xFF000000u) != 0xFF000000u && ctx.frame.psm != GS_PSM_CT24);
        glClearColor(float(rgba & 0xFFu) / 255.0f, float((rgba >> 8) & 0xFFu) / 255.0f,
                     float((rgba >> 16) & 0xFFu) / 255.0f, float(a) / 128.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
        glDisable(GL_SCISSOR_TEST);
        glBindFramebuffer(GL_FRAMEBUFFER, 0);
        t.gpuDirty = true;
        t.dirtyMin = std::min<int>(t.dirtyMin, ctx.scissor.y0);
        t.dirtyMax = std::max<int>(t.dirtyMax, std::max(ctx.scissor.y0, ctx.scissor.y1));
    }
};

GLFWwindow *GSGpuBackend::CreateSharedContextWindow()
{
    GLFWwindow *current = glfwGetCurrentContext();
    if (!current)
        return nullptr;
    glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
    GLFWwindow *window = glfwCreateWindow(16, 16, "GS", nullptr, current);
    glfwWindowHint(GLFW_VISIBLE, GLFW_TRUE);
    glfwMakeContextCurrent(current);
    return window;
}

GSGpuBackend::GSGpuBackend(GLFWwindow *contextWindow, int renderScale)
    : m(std::make_unique<Impl>())
{
    m->window = contextWindow;
    m->scale = std::clamp(renderScale, 1, 4);
    m->presenter = std::thread([this] { m->presenterLoop(); });
    m->thread = std::thread([this] { m->run(); });
    // TS_SAMPLE_PROFILE_GPU=1: profile the GL thread instead of the EE.
    if (const char *gs = std::getenv("TS_SAMPLE_PROFILE_GPU"); gs && *gs)
        ps2_sample_profiler::start(m->thread);
}

GSGpuBackend::~GSGpuBackend()
{
    m->drain();
    {
        std::lock_guard<std::mutex> lock(m->mutex);
        m->stop = true;
    }
    m->wake.notify_all();
    m->thread.join();
    {
        std::lock_guard<std::mutex> lock(m->presentMutex);
        m->presentStop = true;
    }
    m->presentWake.notify_all();
    m->presenter.join();
}

void GSGpuBackend::Initialize(uint8_t *vram, uint32_t vramSize)
{
    m->drain();
    m->vram = vram;
    m->vramSize = vramSize;
    m->cpu.Initialize(vram, vramSize);
    Impl::Command c{Impl::Kind::Reset};
    m->push(std::move(c));
    m->drain();
}

void GSGpuBackend::Reset()
{
    Impl::Command c{Impl::Kind::Reset};
    m->push(std::move(c));
    m->drain();
    m->lastTransfer = {};
}

void GSGpuBackend::Submit(const GSPrimitiveBatch &batch)
{
    Impl::Command c{Impl::Kind::Submit};
    c.batch = batch;
    m->push(std::move(c));
}

void GSGpuBackend::LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut)
{
    Impl::Command c{Impl::Kind::LoadClut};
    c.tex0 = tex0;
    c.texclut = texclut;
    m->push(std::move(c));
}

void GSGpuBackend::BeginTransfer(const GSTransferCommand &command)
{
    Impl::Command c{Impl::Kind::BeginTransfer};
    c.transfer = command;
    m->push(std::move(c));
    m->lastTransfer = {};
    m->lastTransfer.direction = command.direction;
    m->lastTransfer.totalPixels = command.trxreg.rrw * command.trxreg.rrh;
}

void GSGpuBackend::UploadImage(const uint8_t *data, uint32_t sizeBytes)
{
    Impl::Command c{Impl::Kind::Upload};
    c.payload.assign(data, data + sizeBytes);
    m->push(std::move(c));
}

void GSGpuBackend::Flush()
{
    // Nothing to do: every queued primitive carries its full draw state,
    // and the GL thread flushes its batch before anything reads memory.
}

void GSGpuBackend::TextureFlush()
{
    Flush();
}

void GSGpuBackend::Sync(GSSyncReason reason)
{
    if (reason == GSSyncReason::Finish || reason == GSSyncReason::Presentation)
        return;
    Impl::Command c{Impl::Kind::SyncMemory};
    m->push(std::move(c));
    m->drain();
}

PresentationFrame GSGpuBackend::Present(const GSPresentationRequest &request)
{
    PresentationFrame result;
    std::mutex done;
    Impl::Command c{Impl::Kind::Present};
    c.request = request;
    c.done = [&](PresentationFrame &&frame) { result = std::move(frame); };
    m->push(std::move(c));
    m->drain();
    return result;
}

bool GSGpuBackend::PresentAsync(const GSPresentationRequest &request, std::function<void(PresentationFrame &&)> done)
{
    Impl::Command c{Impl::Kind::Present};
    c.request = request;
    c.done = std::move(done);
    m->push(std::move(c));
    return true;
}

bool GSGpuBackend::ClearFramebuffer(const GSContext &context, uint32_t rgba)
{
    const uint32_t psm = context.frame.psm;
    if (context.frame.fbw == 0u ||
        !(psm == GS_PSM_CT32 || psm == GS_PSM_CT24 || psm == GS_PSM_CT16 || psm == GS_PSM_CT16S))
        return false;
    Impl::Command c{Impl::Kind::Clear};
    c.context = context;
    c.values[0] = rgba;
    m->push(std::move(c));
    return true;
}

uint32_t GSGpuBackend::ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes)
{
    m->drain();
    return m->cpu.ConsumeLocalToHostBytes(dst, maxBytes);
}

uint32_t GSGpuBackend::ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const
{
    Impl::Command c{Impl::Kind::SyncMemory};
    m->push(std::move(c));
    m->drain();
    return m->cpu.ReadVram(psm, base, bw, x, y);
}

void GSGpuBackend::WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value)
{
    Impl::Command c{Impl::Kind::WriteVram};
    c.values[0] = psm;
    c.values[1] = base;
    c.values[2] = bw;
    c.values[3] = x;
    c.values[4] = y;
    c.values[5] = value;
    m->push(std::move(c));
}

void GSGpuBackend::SnapshotVram(std::vector<uint8_t> &out) const
{
    Impl::Command c{Impl::Kind::SyncMemory};
    m->push(std::move(c));
    m->drain();
    m->cpu.SnapshotVram(out);
}

void GSGpuBackend::SetClutState(const std::array<uint16_t, 512> &clut, const std::array<uint32_t, 2> &cbp)
{
    m->drain();
    m->cpu.SetClutState(clut, cbp);
    Impl::Command c{Impl::Kind::Flush};
    m->push(std::move(c));
    m->drain();
}

GSTransferSnapshot GSGpuBackend::GetTransferSnapshot() const
{
    return m->lastTransfer;
}
