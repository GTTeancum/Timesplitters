// Xbox entry point: the same runtime and recompiled game as the PC build.
//
// Disc layout (built by src/xbox/Makefile):
//   D:\default.xbe
//   D:\game-data\...          the game's own files (SLUS_200.90, PAK, MUSIC, ...)
//   D:\ps2disc.iso            the PS2 disc image: the game reads its directory
//                             sectors itself, as on the PC build
// Writable data on the hard disk:
//   E:\TimeSplitters\mc0\     memory card 1
//   E:\TimeSplitters\timesplitters.log
#include "ps2_runtime.h"
#include "runtime/gs/gs_frontend.h"
#include "xbox_log.h"
#include "gs_nv2a_backend.h"
#include "runtime/ps2_vu1.h"
#include "runtime/ps2_vu1.h"

#include <hal/debug.h>
#include <hal/video.h>
#include <nxdk/mount.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <chrono>
#include <ctime>
#include <sstream>
#include <cstring>
#include <vector>
#include <filesystem>
#include "raylib.h"
#include "runtime/ee_scheduler.h"
#include "runtime/ps2_io_stats.h"
#include "ps2_runtime_macros.h"

void xboxSetFrameHook(void (*hook)());
void xboxLastBlit(int &width, int &height, int &litPercent);
#include <iostream>

namespace
{
    constexpr const char *kGameData = "D:\\game-data";
    constexpr const char *kSaveRoot = "E:\\TimeSplitters";

    // Free physical memory, for tracking the 64 MB budget during start-up.
    void logMemory(const char *label)
    {
        MM_STATISTICS stats{};
        stats.Length = sizeof(stats);
        MmQueryStatistics(&stats);
        std::cout << "[TS:xbox] " << label << ": " << (stats.AvailablePages * 4u) / 1024u << " MB free of "
                  << (stats.TotalPhysicalPages * 4u) / 1024u << " MB" << std::endl;
    }

    PS2Runtime *g_rt = nullptr;
    constexpr size_t kScriptDrawFromRead = 1100;

    // Every few seconds: is the game advancing? (development aid)
    void statusHook()
    {
        static double next = 0.0;
        const double now = GetTime();
        if (now < next || !g_rt)
            return;
        next = now + 3.0;
        std::ostringstream out;
        const EeKernelSnapshot snap = g_rt->eeScheduler().snapshot();
        MM_STATISTICS stats{};
        stats.Length = sizeof(stats);
        MmQueryStatistics(&stats);
        out << "t=" << int(now) << "s free=" << stats.AvailablePages * 4u << "K vsync=" << g_rt->eeScheduler().currentVSyncTick()
                  << " ee=" << snap.eeCycle / 1000000u << "M rd=" << ps2x::ioStats().bytes.load() / 1024u << "KB cp=" << ps2x::copyStats().reads.load() << "/"
                  << ps2x::copyStats().bytes.load() / 1024u << "KB/" << ps2x::copyStats().microseconds.load() / 1000u << "ms";
        const ps2x::SchedulerWaitProbe &wait = ps2x::schedulerWaitProbe();
        if (const int site = wait.site.load())
            out << " wait@" << site << " asked " << wait.requestedMicroseconds.load() / 1000 << "ms, "
                      << (ps2x::steadyMicroseconds() - wait.startedMicroseconds.load()) / 1000 << "ms ago";
        // Scripted runs: no drawing while the script is still in the menus
        // (it starts the match about 1,100 reads in).
        if (g_rt->padBackend().scriptActive())
            ps2x::rasterSuspended().store(g_rt->padBackend().scriptReadCount() < kScriptDrawFromRead);
        if (g_rt->padBackend().scriptActive())
            out << " script reads=" << g_rt->padBackend().scriptReadCount()
                << (g_rt->padBackend().scriptExhausted() ? " done" : "");
        int blitWidth = 0, blitHeight = 0, lit = 0;
        xboxLastBlit(blitWidth, blitHeight, lit);
        out << std::endl << "  dma=" << g_rt->memory().dmaStartCount() << " gif=" << g_rt->memory().gifCopyCount()
                  << " vif=" << g_rt->memory().vifWriteCount() << std::endl
                  << "  gs=" << g_rt->gs().hostPresentationSequence() << " shown=" << blitWidth << "x"
                  << blitHeight << " lit=" << lit << "% tex=" << g_nv2aTextureStats.fills << "/"
                  << g_nv2aTextureStats.fillBytes / 1024u << "K res=" << g_nv2aTextureStats.resident << "/"
                  << g_nv2aTextureStats.residentBytes / 1024u << "K z=" << std::hex << g_nv2aTextureStats.zpsm
                  << "/" << g_nv2aTextureStats.test << "/" << g_nv2aTextureStats.zmask << std::dec << " "
                  << g_nv2aTextureStats.zmin << ".." << g_nv2aTextureStats.zmax << " frame " << g_nv2aTextureStats.frameTextures
                  << "/" << g_nv2aTextureStats.frameTextureBytes / 1024u << "K fills " << g_nv2aTextureStats.frameFills << " wb tex/draw/clut/xfer/cpu "
                  << g_nv2aTextureStats.wbTexture << "/" << g_nv2aTextureStats.wbDraw << "/" << g_nv2aTextureStats.wbClut << "/"
                  << g_nv2aTextureStats.wbTransfer << "/" << g_nv2aTextureStats.wbCpuWrite << " miss new/ver/clut/evict "
                  << g_nv2aTextureStats.missNew << "/" << g_nv2aTextureStats.missVersion << "/"
                  << g_nv2aTextureStats.missClut << "/" << g_nv2aTextureStats.missEvicted << std::endl
                  << "  vu runs=" << g_vu1Stats.runs << " jit=" << g_vu1Stats.jitEntries << " handoff=" << g_vu1Stats.handoffs
                  << " interp=" << g_vu1Stats.interpPairs << " cyc=" << g_vu1Stats.cycles / 1000u << "K kickwait="
                  << g_vu1Stats.kickWaitCycles / 1000u << "K gpuframes=" << g_nv2aTextureStats.frames << std::endl;
        const ps2x::GuestCallProbe &calls = ps2x::guestCallProbe();
        out << "  sys=" << calls.syscalls.load() << " last " << std::hex << calls.lastSyscall.load() << std::dec
                  << " rpc=" << calls.rpcs.load() << " last " << std::hex << calls.lastRpcClient.load() << "/"
                  << calls.lastRpcNumber.load() << std::dec << std::endl;
        if (const R5900Context *ctx = g_rt->eeScheduler().currentContext())
        {
            static uint32_t samples[8];
            // Where the running game thread is right now (several samples).
            out << "  pc";
            for (uint32_t &sample : samples)
            {
                sample = ctx->pc;
                Sleep(3);
                out << " " << std::hex << sample;
            }
            out << " a0=" << GPR_U32(ctx, 4) << " a1=" << GPR_U32(ctx, 5) << std::dec << std::endl;
        }
        // Game threads: id, status/wait reason, where they are.
        out << " ";
        for (const EeThreadSnapshot &thread : snap.threads)
            out << " " << thread.id << ":" << int(thread.status) << "/" << int(thread.waitReason) << "@"
                      << std::hex << thread.pc << "<" << thread.ra << std::dec;
        out << std::endl;
        xboxLogSetStatus(out.str());
    }

    // std::chrono on nxdk: check the clocks advance like the kernel timer.
    void checkClocks()
    {
        const auto s0 = std::chrono::steady_clock::now();
        const auto w0 = std::chrono::system_clock::now();
        Sleep(100);
        const auto s1 = std::chrono::steady_clock::now();
        const auto w1 = std::chrono::system_clock::now();
        std::cout << "[TS:xbox] 100 ms sleep: steady "
                  << std::chrono::duration_cast<std::chrono::milliseconds>(s1 - s0).count() << " ms, system "
                  << std::chrono::duration_cast<std::chrono::milliseconds>(w1 - w0).count() << " ms" << std::endl;
    }

    // Rough CPU speed: a dependent integer chain of known length (development
    // aid; a real 733 MHz Pentium III runs about one step per clock).
    void checkCalendar()
    {
        const std::time_t now = std::time(nullptr);
        std::tm tm{};
        const int failed = localtime_s(&tm, &now);
        std::cout << "[TS:xbox] time()=" << static_cast<long long>(now) << " localtime " << (failed ? "failed" : "ok") << " "
                  << tm.tm_year + 1900 << "-" << tm.tm_mon + 1 << "-" << tm.tm_mday << " " << tm.tm_hour << ":" << tm.tm_min
                  << std::endl;
    }

    void checkCpuSpeed()
    {
        const auto start = std::chrono::steady_clock::now();
        volatile uint32_t seed = 12345u;
        uint32_t x = seed;
        for (uint32_t i = 0; i < 100000000u; ++i)
            x = x * 1664525u + 1013904223u;
        seed = x;
        const auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count();
        std::cout << "[TS:xbox] 100M steps: " << ms << " ms (" << (ms ? 100000 / ms : 0) << " M steps/s)" << std::endl;

        // Memory copy speed, 16 x 1 MB.
        std::vector<uint8_t> a(1u << 20, 1), b(1u << 20, 2);
        const auto copyStart = std::chrono::steady_clock::now();
        for (int i = 0; i < 16; ++i)
            std::memcpy(i & 1 ? a.data() : b.data(), i & 1 ? b.data() : a.data(), a.size());
        const auto copyMs = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - copyStart).count();
        std::cout << "[TS:xbox] memcpy 16 MB: " << copyMs << " ms" << std::endl;
    }

    void halt(const char *message)
    {
        std::cerr << "[TS:xbox] " << message << std::endl;
        debugPrint("%s\n", message);
        for (;;)
            Sleep(1000);
    }
}

int main()
{
    // Until the runtime draws its first frame, log lines are also printed on
    // screen, so a stall during start-up is visible.
    XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);
    xboxLogInit();
    xboxLogToScreen(true);
    if (nxMountDrive('E', "\\Device\\Harddisk0\\Partition1\\"))
    {
        CreateDirectoryA(kSaveRoot, nullptr);
        CreateDirectoryA("E:\\TimeSplitters\\mc0", nullptr);
        xboxLogOpenFile("E:\\TimeSplitters\\timesplitters.log");
    }
    std::cout << "[TS:xbox] TimeSplitters starting" << std::endl;
    logMemory("at start");
    checkClocks();
    checkCpuSpeed();
    checkCalendar();

    static PS2Runtime rt; // large; keep it off the stack
    logMemory("runtime constructed");
    // The screen is drawn by the NV2A (gs_nv2a_backend.cpp), installed
    // before the runtime sets up GS memory; without it, the software renderer.
    if (std::unique_ptr<GSNv2aBackend> gpu = GSNv2aBackend::Create())
    {
        rt.gs().setRasterBackend(std::move(gpu));
        std::cout << "[TS:xbox] drawing on the NV2A" << std::endl;
    }
    else
        std::cout << "[TS:xbox] NV2A unavailable: software renderer" << std::endl;
    logMemory("renderer ready");
    rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if (!rt.initialize("TimeSplitters"))
        halt("runtime initialisation failed");
    logMemory("runtime initialised");

    const std::string elf = std::string(kGameData) + "\\SLUS_200.90";
    if (!rt.loadELF(elf))
        halt("could not load D:\\game-data\\SLUS_200.90");
    logMemory("game loaded");

    PS2Runtime::IoPaths paths = PS2Runtime::getIoPaths();
    paths.hostRoot = kGameData;
    paths.cdRoot = kGameData;
    paths.mcRoot = std::string(kSaveRoot) + "\\mc0";
    paths.cdImage = "D:\\ps2disc.iso";
    PS2Runtime::setIoPaths(paths);

    // Test runs: a controller script on the disc (D:utoplay.pad, added by
    // `make AUTOPLAY=<script>`) plays itself from a blank memory card, as the
    // PC build's TS_PAD_SCRIPT does.
    if (GetFileAttributesA("D:\\autoplay.pad") != INVALID_FILE_ATTRIBUTES)
    {
        std::error_code ec;
        std::filesystem::remove_all(paths.mcRoot, ec);
        std::filesystem::create_directories(paths.mcRoot, ec);
        std::string error;
        if (rt.padBackend().loadScriptFile("D:\\autoplay.pad", &error))
        {
            uint8_t *rdram = rt.memory().getRDRAM();
            rt.padBackend().setScriptU32Reader([rdram](uint32_t address) {
                uint32_t value = 0;
                if (address <= PS2_RAM_SIZE - sizeof(value))
                    std::memcpy(&value, rdram + address, sizeof(value));
                return value;
            });
            std::cout << "[TS:xbox] playing D:\\autoplay.pad" << std::endl;
        }
        else
            std::cout << "[TS:xbox] autoplay.pad: " << error << std::endl;
    }

    rt.gs().setHostPresentationMode(GS::HostPresentationMode::Signal);
    rt.setHostAspectRatio(4.0f / 3.0f);

    std::cout << "[TS:xbox] running" << std::endl;
    g_rt = &rt;
    xboxSetFrameHook(statusHook);
    xboxLogToScreen(false);
    rt.run();
    std::cout << "[TS:xbox] stopped" << std::endl;
    halt("game stopped");
    return 0;
}
