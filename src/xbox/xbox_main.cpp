// Xbox entry point: the same runtime and recompiled game as the PC build.
//
// Disc layout (built by src/xbox/Makefile):
//   D:\default.xbe
//   D:\game-data\...          the game's own files (SLUS_200.90, PAK, MUSIC, ...)
//   D:\ps2disc.iso            the PS2 disc image: the game reads its directory
//                             sectors itself, as on the PC build
//   D:\textures.xtp           prebuilt textures (optional; xbox_texture_pack.h)
//   D:\native-bg\levelN.xbg   preconverted background geometry (TS_BG_NATIVE)
//   D:\TitleImage.xbx, D:\SaveImage.xbx, D:\TitleMeta.xbx
//                             the Xbox dashboard's icons and title name
//                             (src/xbox/assets)
// Writable data on the hard disk, where the Xbox dashboard finds it
// (xbox_saves.h; 54530001 is the XBE's title ID):
//   E:\UDATA\54530001\mc0\, mc1\   memory cards 1 and 2
//   E:\UDATA\54530001\timesplitters.log
#include "ps2_runtime.h"
#include "runtime/gs/gs_frontend.h"
#include "xbox_log.h"
#include "xbox_hwprof.h"
#include "xbox_saves.h"
#include "xbox_perf.h"
#include "xbox_bg_game.h"
#include "xbox_bg_runtime.h"
#include "xbox_gif_native.h"
#include "xbox_gif_direct.h"
#include "xbox_dma_chain.h"
#include "xbox_draw_record.h"
#include "xbox_vif_record.h"
#include "xbox_model_cache.h"
#include "xbox_native_2d.h"
#include "xbox_native_fx.h"
#include "xbox_vif_source.h"
#include "xbox_lazy_commit.h"
#include "gs_nv2a_backend.h"
#include "runtime/ps2_vu1.h"
#include "runtime/ps2_vu1.h"
#include "runtime/ps2_spu2.h"

#include <hal/debug.h>
#include <hal/video.h>
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
#include "../../project/game/ts_native_math.h"

void xboxSetFrameHook(void (*hook)());
void xboxLastBlit(int &width, int &height, int &litPercent);
#include <iostream>

extern uint32_t g_audioBuffers, g_audioMixKcyc; // xbox_raylib.cpp

namespace
{
    constexpr const char *kGameData = "D:\\game-data";

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
        if (g_rt)
        {
            // make TS_HWPROF=1: the sampling profiler's window (else nothing).
            HwprofCounters counters;
            counters.scriptReads = g_rt->padBackend().scriptActive() ? uint32_t(g_rt->padBackend().scriptReadCount()) : 0u;
            counters.gameFrames = g_nv2aTextureStats.gameFrames;
            counters.eeWaitMicroseconds = ps2x::schedulerWaitProbe().waitedMicroseconds.load();
            counters.gpuWaitKcyc = g_nv2aTextureStats.kcycWait;
            hwprofFrame(counters);
            // Free-memory low-water mark; the frame-time window (xbox_perf.cpp).
            xboxPerfHostFrame(g_rt->padBackend().scriptActive(), counters.scriptReads);
        }
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
        out << "t=" << int(now) << "s free=" << stats.AvailablePages * 4u << "K pool=" << stats.PoolPagesCommitted * 4u
            << "K vsync=" << g_rt->eeScheduler().currentVSyncTick()
                  << " ee=" << snap.eeCycle / 1000000u << "M rd=" << ps2x::ioStats().bytes.load() / 1024u << "KB cp=" << ps2x::copyStats().reads.load() << "/"
                  << ps2x::copyStats().bytes.load() / 1024u << "KB"; // guest memcpy is not timed on the Xbox
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
                  << " vif=" << g_rt->memory().vifWriteCount() << " vif1 chains=" << g_vif1StreamStats.chains
                  << " pieces=" << g_vif1StreamStats.pieces << " split=" << g_vif1StreamStats.splits << " vec fast/slow="
                  << g_vif1StreamStats.fastVectors << "/" << g_vif1StreamStats.slowVectors << " batch ahead/heap="
                  << g_vif1StreamStats.batchFlushes << "/" << g_vif1StreamStats.batchOverflows << " vifdiff="
                  << g_vif1StreamStats.diffs << "/" << g_vif1StreamStats.checked << std::endl
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
                  << g_nv2aTextureStats.missClut << "/" << g_nv2aTextureStats.missEvicted << " pack hit/load/miss/wait/full/busy "
                  << g_nv2aTextureStats.packHits << "/" << g_nv2aTextureStats.packLoads << "/" << g_nv2aTextureStats.packMisses
                  << "/" << g_nv2aTextureStats.packWaits << "/" << g_nv2aTextureStats.packNoRoom << "/" << g_nv2aTextureStats.packBusy
                  << " pool=" << g_nv2aTextureStats.packPoolBytes / 1024u << "K evict=" << g_nv2aTextureStats.packEvictions
                  << " (max " << g_nv2aTextureStats.packMostVictims << ") read=" << g_nv2aTextureStats.packLoadMs << "ms (max "
                  << g_nv2aTextureStats.packLongestMs << ") budget=" << g_nv2aTextureStats.textureBudgetKB << "K" << std::endl
                  << "  vu runs=" << g_vu1Stats.runs << " jit=" << g_vu1Stats.jitEntries << " handoff=" << g_vu1Stats.handoffs
                  << " offscreen=" << g_nv2aTextureStats.offscreenDraws << "@" << std::hex << g_nv2aTextureStats.offscreenFbp
                  << "/" << g_nv2aTextureStats.offscreenFbw << "/" << g_nv2aTextureStats.offscreenPsm << "/" << g_nv2aTextureStats.offscreenPrim
                  << std::dec << " gpuwaits=" << g_nv2aTextureStats.gpuWaits << " (vb/xf/push/retire/rb "
                  << g_nv2aTextureStats.waitVb << "/" << g_nv2aTextureStats.waitXf << "/" << g_nv2aTextureStats.waitPush << "/"
                  << g_nv2aTextureStats.waitRetire << "/" << g_nv2aTextureStats.waitReadback << ") strips=" << g_nv2aTextureStats.xfStrips
                  << " verts=" << g_nv2aTextureStats.xfVertices << " near=" << g_nv2aTextureStats.nearFallbacks
                  << " clut=" << g_nv2aTextureStats.clutLoads << " screenloads=" << g_nv2aTextureStats.screenLoads << " kcyc native/wait/rb=" << g_nv2aTextureStats.kcycNative << "/"
                  << g_nv2aTextureStats.kcycWait << "/" << g_nv2aTextureStats.kcycReadback
                  << " interp=" << g_vu1Stats.interpPairs << " cyc=" << g_vu1Stats.cycles / 1000u << "K kickwait="
                  << g_vu1Stats.kickWaitCycles / 1000u << "K gpuframes=" << g_nv2aTextureStats.frames << " game=" << g_nv2aTextureStats.gameFrames
                  << " early=" << g_nv2aTextureStats.earlyHandouts << " pushpeak=" << g_nv2aTextureStats.pushPeakKB << "K pbend=" << g_nv2aTextureStats.framePbEnds << "/" << g_nv2aTextureStats.pbEnds << " pal=" << g_nv2aTextureStats.paletteHits << " snd=" << g_audioBuffers << "/" << g_audioMixKcyc << "K/"
                  << g_spu2VoiceSamples / 1000u << "Kv"
                  << "  mat rep/hit/miss=" << g_nv2aTextureStats.materialRepeats << "/" << g_nv2aTextureStats.materialHits
                  << "/" << g_nv2aTextureStats.materialMisses << " kconst=" << g_nv2aTextureStats.constRebuilds
                  << " texfast=" << g_nv2aTextureStats.textureFast << " drawdiff=" << g_nv2aTextureStats.drawDiffs << "/"
                  << g_nv2aTextureStats.drawChecked << "(" << g_nv2aTextureStats.drawDiffLast << ") ringdiff="
                  << g_nv2aTextureStats.ringDiffs << "/" << g_nv2aTextureStats.ringChecked << " idle="
                  << wait.waitedMicroseconds.load() / 1000 << "ms" << std::endl;
        const ps2x::GuestCallProbe &calls = ps2x::guestCallProbe();
        out << "  sys=" << calls.syscalls.load() << " last " << std::hex << calls.lastSyscall.load() << std::dec
                  << " rpc=" << calls.rpcs.load() << " last " << std::hex << calls.lastRpcClient.load() << "/"
                  << calls.lastRpcNumber.load() << std::dec << " sched it=" << g_eeSchedulerStats.loopIterations
                  << "/unw=" << g_eeSchedulerStats.unwinds << " mathdiff=" << g_tsNativeMath.mismatches << "("
                  << (g_tsNativeMath.firstFailed ? g_tsNativeMath.firstFailed : "-") << ") nan="
                  << g_tsNativeMath.nanPayloads << " native=" << g_tsNativeMath.native << std::endl;
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
#if !TS_PERF
        // One short timing line in the log file too: on real hardware there is
        // no debugger reading the status block, the log is copied off the disk.
        // Free memory and what usually moves it: the kernel's pool (file
        // and other kernel objects), the heap and other virtual memory, and
        // the renderer's texture cache (records / KB of GPU pages; records
        // dropped by its record limit, GPU allocations retried after giving
        // memory back). Flat over hours.
        std::cout << "[TS:perf] t=" << int(now) << " vsync=" << g_rt->eeScheduler().currentVSyncTick()
                  << " game=" << g_nv2aTextureStats.gameFrames << " idle=" << wait.waitedMicroseconds.load() / 1000
                  << "ms reads=" << g_rt->padBackend().scriptReadCount() << " free=" << stats.AvailablePages * 4u
                  << "K pool=" << stats.PoolPagesCommitted * 4u << "K vm=" << stats.VirtualMemoryBytesCommitted / 1024u
                  << "K tex=" << g_nv2aTextureStats.resident << "/" << g_nv2aTextureStats.residentBytes / 1024u << "K"
                  << " trim=" << g_nv2aTextureStats.recordTrims << " retry=" << g_nv2aTextureStats.allocRetries
                  << std::endl;
#else
        // A few short timing lines in the log file too ([TS:perf] and the
        // rest, xbox_perf.cpp): on real hardware there is no debugger
        // reading the status block, the log is copied off the disk.
        XboxPerfInputs perf;
        perf.seconds = uint32_t(now);
        perf.vsync = g_rt->eeScheduler().currentVSyncTick();
        perf.scriptActive = g_rt->padBackend().scriptActive();
        perf.scriptReads = uint32_t(g_rt->padBackend().scriptReadCount());
        perf.rdram = g_rt->memory().getRDRAM();
#if TS_HWPROF
        const HwprofSampleCounts samples = hwprofSampleCounts();
        perf.hwprof = true;
        perf.rtcSamples = samples.samples;
        perf.rtcIdle = samples.idle;
        perf.gpuGraph = samples.gpuGraph;
        perf.gpuFifo = samples.gpuFifo;
        perf.gpuBusy = samples.gpuBusy;
#endif
        xboxPerfReport(perf);
#endif
        renderCountersReport(); // [TS:render] (project/game/ts_render_counters.cpp)
#if TS_LAZY_GUEST_RAM
        {
            // Guest memory committed on first touch (xbox_lazy_commit.cpp):
            // each range's committed/reserved KB; pages the handler committed
            // on a read / a write, faults on a page just committed by another
            // thread, and KB committed ahead of file reads.
            XboxLazyStats lazy;
            xboxLazyGetStats(lazy);
            std::cout << "[TS:lazy]";
            for (int i = 0; i < lazy.ranges; ++i)
                std::cout << " " << lazy.names[i] << "=" << lazy.committedKB[i] << "/" << lazy.sizeKB[i] << "K";
            std::cout << " faults r/w/again=" << lazy.readFaults << "/" << lazy.writeFaults << "/" << lazy.refaults
                      << " precommit=" << lazy.precommitKB << "K" << std::endl;
        }
#endif
        std::cout << "[TS:tex] " << nv2aLookupStats() << std::endl;
#if TS_BG_NATIVE
        XboxBgRuntimeStats bg;
        if (xboxBgGetStats(bg))
            std::cout << "[TS:bg] level=" << bg.level << " active=" << bg.active
                      << " pack/bind=" << bg.packBytes / 1024u << "/" << bg.bindingBytes / 1024u << "K"
                      << " strips/verts=" << bg.matchedStrips << "/" << bg.matchedVertices
                      << " fallback=" << bg.fallbackStrips << " diff=" << bg.geometryDiffs
                      << " reject=" << bg.sourceRejects << "/" << bg.loadRejects
                      << " invalid=" << bg.invalidations
                      << " lookup hit/search=" << bg.bindingCacheHits << "/" << bg.bindingSearches
                      << " provenance range/row=" << bg.provenanceFastRanges << "/" << bg.provenanceRowChecks
                      << " batch accept/try/fallback=" << bg.batchAccepted << "/" << bg.batchAttempts
                      << "/" << bg.batchFallbacks
                      << " batch strips/verts=" << bg.batchStrips << "/" << bg.batchVertices
                      << std::endl;
#endif
#if TS_GIF_NATIVE
        const XboxGifNativeStats gif = xboxGifNativeGetStats();
        std::cout << "[TS:gif-native] packets/tags/writes=" << gif.packets << "/" << gif.tags
                  << "/" << gif.packedWrites << " plan hit/build=" << gif.planHits << "/" << gif.planBuilds
                  << " reject/busy=" << gif.rejected << "/" << gif.cacheBusy
                  << " fallback queue/worker/stream=" << gif.queuedFallbacks << "/"
                  << gif.workerFallbacks << "/" << gif.streamFallbacks << std::endl;
#endif
#if TS_GIF_DIRECT
        // Cumulative; declined = format/partial (native PACKED entry), debug, busy.
        const XboxGifDirectStats &direct = g_xboxGifDirectStats;
        std::cout << "[TS:gif-direct] packets=" << direct.packets << " runs/gpu/prims=" << direct.runs << "/"
                  << direct.gpuRuns << "/" << direct.prims << " writes/skipped=" << direct.writes << "/"
                  << direct.skipped << " images/carried=" << direct.images << "/" << direct.carried
                  << " declined=" << direct.declined[XboxGifDirectStats::Format] << "/"
                  << direct.declined[XboxGifDirectStats::Partial] << "/"
                  << direct.declined[XboxGifDirectStats::Debug] << "/" << direct.declined[XboxGifDirectStats::Busy]
#if TS_NATIVE_2D
                  << " deferred=" << direct.deferred
#endif
                  << std::endl;
#endif
#if TS_NATIVE_2D
        // Cumulative. nested: batches decoded as the original stream, by
        // reason (parse/rows/program/arbiter/cycle/other); kept: builder calls
        // in a kept list (dlPushDmaTag), run as originals.
        XboxNative2dStats native2d;
        xboxNative2dGetStats(native2d);
        std::cout << "[TS:2d] items/tokens/walked/lost=" << native2d.items << "/" << native2d.tokens << "/"
                  << native2d.walked << "/" << native2d.lost << " fast/kicks=" << native2d.fast << "/" << native2d.kicks
                  << " nested=" << native2d.nested << " (" << native2d.declined[0] << "/" << native2d.declined[1] << "/"
                  << native2d.declined[2] << "/" << native2d.declined[3] << "/" << native2d.declined[4] << "/"
                  << native2d.declined[5] << ") kept=" << native2d.pushed << " gs-fallback=" << native2d.gsFallback
                  << std::endl;
#endif
#if TS_NATIVE_FX
        // Cumulative. kicks: 0x3FE0 kicks taken past VU1 memory; flushes: GS
        // calls carrying them (spans: their pieces); gs-original: flushes the
        // GS took the original way. Left on the original route: UNPACKs to
        // TOPS+0 with no kick after them, program/arbiter/worker/capture
        // state, rows, packet (IMAGE or past its rows).
        {
            const XboxNativeFxStats &fx = g_xboxNativeFxStats;
            std::cout << "[TS:fx] kicks=" << fx.kicks << " flushes/spans=" << fx.flushes << "/" << fx.spans
                      << " gs-original=" << fx.gsOriginal << " left not-kick/state/rows/packet=" << fx.notKick << "/"
                      << fx.state << "/" << fx.rows << "/" << fx.packet << std::endl;
        }
#endif
#if TS_DMA_CHAIN_CACHE
        XboxDmaChainStats dma;
        if (xboxDmaChainGetStats(dma))
            std::cout << "[TS:dma-chain] request/hit/build=" << dma.requests << "/" << dma.hits
                      << "/" << dma.built << " changed/declined=" << dma.changed << "/" << dma.declined
                      << " admitted tags/bytes=" << dma.admittedTags << "/" << dma.admittedBytes
                      << std::endl;
#endif
#if TS_DRAW_RECORDS
        XboxDrawRecordStats records;
        if (xboxDrawRecordGetStats(records))
            std::cout << "[TS:draw-record] notes/new/reuse=" << records.notes << "/" << records.created
                      << "/" << records.reused << " precalc/dbuf=" << records.notesPrecalc << "/" << records.notesDbuf
                      << " ref=" << records.notesRef[0] << "/" << records.notesRef[1] << "/" << records.notesRef[2]
                      << " lookup/hit/hint=" << records.lookups << "/"
                      << records.hits << "/" << records.hintHits
                      << " changed/reject/busy=" << records.changed << "/" << records.rejected
                      << "/" << records.busy << " accepted=" << records.accepted
                      << " payload/tte=" << records.transportAccepted[0] << "/" << records.transportAccepted[1]
                      << " candidates/capped=" << records.candidates << "/" << records.candidateLimits
                      << " dma prepared/lookup=" << records.dmaAccepted << "/" << records.dmaLookups
                      << " dma tags/bytes=" << records.dmaTags << "/" << records.dmaBytes
                      << std::endl;
        XboxVifRecordStats prefixes;
        if (xboxVifRecordGetStats(prefixes))
            std::cout << "[TS:vif-record] attempt/hit/build=" << prefixes.attempts << "/" << prefixes.hits
                      << "/" << prefixes.built << " reject/busy=" << prefixes.rejected << "/" << prefixes.busy
                      << " prefixes/commands/vectors/bytes=" << prefixes.prefixes << "/" << prefixes.commands
                      << "/" << prefixes.vectors << "/" << prefixes.bytes << std::endl;
#endif
#if TS_VIF_SOURCE
        XboxVifSourceStats sources;
        if (xboxVifSourceGetStats(sources))
            std::cout << "[TS:vif-source] prefixes/armed/claimed=" << sources.prefixes << "/"
                      << sources.armed << "/" << sources.claims
                      << " reject/busy=" << sources.rejected << "/" << sources.busy
                      << " groups/strips/vertices=" << sources.groups << "/" << sources.strips
                      << "/" << sources.vertices << std::endl;
#endif
#if TS_NATIVE_MODELS
        XboxModelStats models;
        xboxModelGetStats(models);
        std::cout << "[TS:models] models/ready/failed=" << models.models << "/" << models.ready << "/" << models.failed
                  << " captures/ok=" << models.captures << "/" << models.captured << " fail=" << models.failures[1]
                  << "," << models.failures[2] << "," << models.failures[3] << "," << models.failures[4] << ","
                  << models.failures[5] << "," << models.failures[6] << "," << models.failures[7]
                  << " replays/draws/runs/verts=" << models.replays << "/" << models.replayDraws << "/"
                  << models.replayRuns << "/" << models.replayVertices << " declined/missing=" << models.replayDeclined
                  << "/" << models.replayMissing << " steps/inline=" << models.replaySteps << "/" << models.inlined
                  << " stale/verify/flush=" << models.stale << "/" << models.verifies << "/" << models.flushes
                  << " evict/compact=" << models.evicted << "/" << models.compactions << " vtxKB=" << models.vertexBytes / 1024u << " files load/save/fail="
                  << models.fileLoads << "/" << models.fileSaves << "/" << models.fileFailures << std::endl;
        XboxPrologueStats prologues;
        xboxPrologueGetStats(prologues);
        std::cout << "[TS:prologue] tokens/expanded/lost=" << prologues.tokens << "/" << prologues.expanded << "/"
                  << prologues.lost << " refs=" << prologues.refs
#if TS_NATIVE_REPLAY
                  << " native/run/inline/lost=" << prologues.native << "/" << prologues.nativeDecoded << "/"
                  << prologues.nativeInline << "/" << prologues.nativeLost
#endif
                  << std::endl;
#if TS_DIRECT_MODELS
        // The direct model route (DIRECT-MODELS-PLAN.md): partGfx's precalc
        // CALLs and those taken direct, the reasons the rest kept the CALL,
        // the walker's markers (walked: expanded with the CALL instead), and
        // the decoder's replays, chains decoded from guest memory and lost records.
        XboxDirectStats direct;
        if (xboxDirectGetStats(direct))
            std::cout << "[TS:direct] calls/taken=" << direct.calls << "/" << direct.taken
                      << " keep token/ready/kind/verify/record=" << direct.noToken << "/" << direct.notReady << "/"
                      << direct.kind << "/" << direct.verify << "/" << direct.record << " marked/walked=" << direct.marked
                      << "/" << direct.walked << " replayed/lean/inline/lost=" << direct.replayed << "/" << direct.lean
                      << "/" << direct.inlined << "/" << direct.lost << " prologue native/decoded="
                      << direct.prologueNative << "/" << direct.prologueDecoded << " vu1 in/first="
                      << direct.materialized << "/" << direct.materializedFirst << " gs syncs=" << direct.gsSyncs
                      << " cpu draws/runstrips=" << direct.cpuDraws << "/" << direct.cpuRunStrips
                      << " strips nopre/short=" << direct.nonPreStrips << "/" << direct.shortStrips << std::endl;
#endif
#endif
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

    // Quick reboot into the dashboard with a launch-data page saying so (the
    // user's Perfect Dark X port does the same). The page is written back
    // to RAM before the reboot: on real hardware stale cache lines of it
    // crash the firmware (xemu hides that).
    void returnToDashboard()
    {
        constexpr ULONG kPage = 0x1000;
        if (!LaunchDataPage)
            LaunchDataPage = static_cast<PLAUNCH_DATA_PAGE>(MmAllocateContiguousMemory(kPage));
        if (!LaunchDataPage)
            HalReturnToFirmware(HalRebootRoutine);
        MmPersistContiguousMemory(LaunchDataPage, kPage, TRUE);
        std::memset(LaunchDataPage, 0, kPage);
        LaunchDataPage->Header.dwLaunchDataType = LDT_LAUNCH_DASHBOARD;
        LaunchDataPage->Header.dwTitleId = CURRENT_XBE_HEADER->CertificateHeader->TitleID;
        LaunchDataPage->Header.dwFlags = 0;
        __asm__ __volatile__("sfence" ::: "memory");
        __asm__ __volatile__("wbinvd" ::: "memory");
        HalReturnToFirmware(HalQuickRebootRoutine);
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
#if TS_LAZY_GUEST_RAM
    XboxLazyThreadScope lazyCommit; // guest memory's first-touch handler (xbox_lazy_commit.h)
#endif
    // Until the runtime draws its first frame, log lines are also printed on
    // screen, so a stall during start-up is visible.
    XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);
    xboxLogInit();
    xboxLogToScreen(true);
    const XboxSaveLayout saves = xboxSavesPrepare();
    if (saves.mounted)
        xboxLogOpenFile(saves.logFile.c_str());
    std::cout << "[TS:xbox] TimeSplitters starting" << std::endl;
    xboxSavesSetup(saves);
    {
        // The memory cards' folder from the start: the runtime's IOP resets
        // (initialisation, game load) create it.
        PS2Runtime::IoPaths paths = PS2Runtime::getIoPaths();
        paths.mcRoot = saves.card0;
        PS2Runtime::setIoPaths(paths);
    }
    logMemory("at start");
    checkClocks();
    checkCpuSpeed();
    checkCalendar();
    hwprofInit();
    xboxPerfInit();

    static PS2Runtime rt; // large; keep it off the stack
    logMemory("runtime constructed");
    // The screen is drawn by the NV2A (gs_nv2a_backend.cpp), installed
    // before the runtime sets up GS memory; without it, the software renderer.
    // (TS_PERF_BACKEND: inside a timing wrapper, xbox_perf.cpp.)
    if (std::unique_ptr<GSNv2aBackend> gpu = GSNv2aBackend::Create())
    {
        rt.gs().setRasterBackend(xboxPerfWrapBackend(std::move(gpu)));
        hwprofGpuReady();
        std::cout << "[TS:xbox] drawing on the NV2A" << std::endl;
    }
    else
        std::cout << "[TS:xbox] NV2A unavailable: software renderer" << std::endl;
    logMemory("renderer ready");
    rt.setMissingFunctionPolicy(PS2Runtime::MissingFunctionPolicy::Stop);
    if (!rt.initialize("TimeSplitters"))
        halt("runtime initialisation failed");
    xboxPerfWrapGif(rt.gifArbiter(), rt.gs()); // TS_PERF_BACKEND: GIF packets timed (else nothing)
    nv2aSetGuestRam(rt.memory().getRDRAM()); // the player count: split screen's texture budget
    logMemory("runtime initialised");

    std::cout << "[TS:opt] background=" << TS_BG_NATIVE
              << " geometry-fast=" << TS_BG_FAST << " geometry-batch=" << TS_BG_BATCH
              << " vif-fast=" << TS_VIF_FAST << " gif-native=" << TS_GIF_NATIVE
              << " gif-direct=" << TS_GIF_DIRECT << " native-2d=" << TS_NATIVE_2D
              << " dma-chain=" << TS_DMA_CHAIN_CACHE << " native-call-slots=" << TS_NATIVE_CALL_SLOTS
              << " draw-records=" << TS_DRAW_RECORDS << " vif-source=" << TS_VIF_SOURCE
              << " material-cache=" << TS_NV2A_MATERIAL_CACHE
              << " texture-identity=" << TS_NV2A_PACK_IDENTITY_CACHE
              << " profile-backend=" << TS_PERF_BACKEND
              << " geometry-verify=" << TS_BG_VERIFY << std::endl;
#if TS_NATIVE_FX
    std::cout << "[TS:opt] native-fx=1" << std::endl;
#endif

    const std::string elf = std::string(kGameData) + "\\SLUS_200.90";
    if (!rt.loadELF(elf))
        halt("could not load D:\\game-data\\SLUS_200.90");
#if TS_DRAW_RECORDS
    xboxDrawRecordReset();
#endif
#if TS_BG_NATIVE
    xboxBgConfigure("D:\\native-bg", 4u * 1024u * 1024u);
    xboxBgInstallGameHooks(rt);
#endif
#if TS_NATIVE_2D
    xboxNative2dInstall(rt); // after the game's own overrides (dlSetClip's twin among them)
#endif
    logMemory("game loaded");

    PS2Runtime::IoPaths paths = PS2Runtime::getIoPaths();
    paths.hostRoot = kGameData;
    paths.cdRoot = kGameData;
    paths.mcRoot = saves.card0; // memory card 2 beside it
    paths.cdImage = "D:\\ps2disc.iso";
    PS2Runtime::setIoPaths(paths);

    // Test runs: a controller script on the disc (D:\autoplay.pad, added by
    // `make AUTOPLAY=<script>`) plays itself from a blank memory card, as the
    // PC build's TS_PAD_SCRIPT does: a card of its own under E:\TDATA, so a
    // test run leaves the player's saves alone.
    if (GetFileAttributesA("D:\\autoplay.pad") != INVALID_FILE_ATTRIBUTES)
    {
        paths.mcRoot = saves.testCard0;
        PS2Runtime::setIoPaths(paths);
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
    // The game ended on its own (Exit Game: on a PS2 it goes back to the
    // console's browser): back to the dashboard.
    returnToDashboard();
    halt("game stopped");
    return 0;
}
