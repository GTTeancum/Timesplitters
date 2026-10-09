// Console feasibility tests for the TimeSplitters Xbox rewrite plan
// (src/xbox/REWRITE-PLAN.md, M0.7): the hardware questions that gate M5's
// flat-shading path and all of M8 (the NV2A fetching vertices straight from
// guest RAM).
//   T1  32 MiB of contiguous, cached memory at start-up (guest RAM for M8)
//   T2  does the NV2A see CPU writes still in the CPU cache (snooping)?
//   T3  is NV097_BREAK_VERTEX_BUFFER_CACHE needed after the CPU rewrites
//       vertices the GPU has already fetched?
//   T4  FLAT_SHADE_OP=LAST: the provoking vertex of strips, lists and fans
//   T5  does primitive assembly continue across DRAW_ARRAYS calls inside one
//       BEGIN/END, and what do ARRAY_ELEMENT16 and BEGIN/END cost?
//   T6  a page-table DMA object as the fallback for T1
//   T7  is the GPU at most one frame behind the CPU?
//   T8  what does WBINVD cost?
// A standalone nxdk program (pbkit); nothing here depends on the game build.
// Each result is one "[PROBE] ..." line on the kernel debug output (XBDM's
// notification channel shows it as debugstr) and one short line on screen;
// the set is repeated every 20 s and written to D:\nv2a_probe.txt (nxdk
// mounts D: at the XBE's folder). README.md says how to read each line.
#include <hal/debug.h>
#include <hal/video.h>
#include <hal/xbox.h>
#include <pbkit/pbkit.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ---------------------------------------------------------------- switches
// The image is padded to about the game's (12.9 MiB: 11.6 of code, 0.3 of
// read-only data, 1.1 of data and BSS; build/xbox/main.map), so that T1 meets
// physical memory roughly as the game's start-up would. 0: a bare probe.
#ifndef PROBE_IMAGE_PAD_MB
#define PROBE_IMAGE_PAD_MB 13
#endif
// The tests that could upset the GPU run last, in the order T6a, T6b, T2c,
// T2d, and each can be left out on its own, so that a run which hung in one
// can be repeated without it (README.md). PROBE_PAGED: page-table DMA objects,
// the plan's fallback for T1 (bit 0 T6a, bit 1 T6b; T6b also writes the GPU's
// instance memory past pbkit's 20 KB, after checking that the kernel reserved
// it). PROBE_TARGETS: vertex fetch through PCI- and AGP-target DMA objects
// (bit 0 T2c, bit 1 T2d). PROBE_RISKY=0 leaves all four out.
#ifndef PROBE_RISKY
#define PROBE_RISKY 1
#endif
#ifndef PROBE_PAGED
#define PROBE_PAGED (PROBE_RISKY ? 3 : 0)
#endif
#ifndef PROBE_TARGETS
#define PROBE_TARGETS (PROBE_RISKY ? 3 : 0)
#endif
#if PROBE_PAGED < 0 || PROBE_PAGED > 3 || PROBE_TARGETS < 0 || PROBE_TARGETS > 3
#error "PROBE_PAGED and PROBE_TARGETS are bit masks of two tests: 0-3"
#endif
// T7: CPU time of one simulated game frame (the busy-frame target of
// REWRITE-PLAN.md 3 is 27.8 ms; less the draw submission), the GPU work of
// one frame, and the number of frames.
#ifndef PROBE_T7_CPU_MS
#define PROBE_T7_CPU_MS 25
#endif
#ifndef PROBE_T7_GPU_MS
#define PROBE_T7_GPU_MS 15
#endif
#ifndef PROBE_T7_FRAMES
#define PROBE_T7_FRAMES 60
#endif
#if PROBE_T7_GPU_MS >= PROBE_T7_CPU_MS
#error "T7 asks whether the frame pipeline adds lag: PROBE_T7_GPU_MS must stay below PROBE_T7_CPU_MS"
#endif
#if PROBE_T7_FRAMES < 2
#error "T7 needs at least two frames"
#endif

#if PROBE_IMAGE_PAD_MB > 0
// Zero-initialised; every page is touched at start-up, so it is committed
// whatever the loader does with BSS.
static uint8_t g_imagePad[PROBE_IMAGE_PAD_MB << 20];
#endif

// ------------------------------------------------------------------ timing
static inline uint64_t rdtsc(void)
{
    uint32_t lo, hi;
    __asm__ __volatile__("rdtsc" : "=a"(lo), "=d"(hi));
    return ((uint64_t)hi << 32) | lo;
}
static inline void wbinvd(void) { __asm__ __volatile__("wbinvd" ::: "memory"); }
static inline void sfence(void) { __asm__ __volatile__("sfence" ::: "memory"); }

static uint32_t g_mhz = 733; // measured in main
static uint32_t to_us(uint64_t cycles) { return (uint32_t)(cycles / g_mhz); }
static uint32_t to_ns(uint64_t cycles) { return (uint32_t)(cycles * 1000u / g_mhz); }

static void calibrate(void)
{
    const ULONGLONG freq = KeQueryPerformanceFrequency();
    const ULONGLONG q0 = KeQueryPerformanceCounter();
    const uint64_t t0 = rdtsc();
    Sleep(200);
    const ULONGLONG q1 = KeQueryPerformanceCounter();
    const uint64_t t1 = rdtsc();
    const uint64_t us = (uint64_t)(q1 - q0) * 1000000u / freq;
    if (us)
        g_mhz = (uint32_t)((t1 - t0) / us);
    if (g_mhz < 100)
        g_mhz = 733;
}

// ------------------------------------------------------------------ output
// One [PROBE] line per result (DbgPrint) and a short one on screen. nxdk's
// debugPrint wraps after 65 characters and wipes the screen at 430 px, so
// screen lines stay within 60 characters and 23 rows below the header.
#define MAX_LINES 23
#define LINE_BYTES 384
#define SCREEN_COLS 60
static char g_lines[MAX_LINES][LINE_BYTES];
static char g_screen[MAX_LINES][SCREEN_COLS + 1];
static int g_lineCount, g_pass, g_fail, g_skip;

static void redraw(void)
{
    debugClearScreen();
    debugMoveCursor(25, 25);
    debugPrint("nv2a_probe (REWRITE-PLAN M0.7) pass %d fail %d skip %d", g_pass, g_fail, g_skip);
    for (int i = 0; i < g_lineCount; ++i)
    {
        debugMoveCursor(25, 25 + 17 * (i + 1));
        debugPrint("%s", g_screen[i]);
    }
}

// verdict: PASS, FAIL, ERR (the test itself did not work), INFO, SKIP
static void emit(const char *id, const char *verdict, const char *screen, const char *fmt, ...)
{
    if (g_lineCount >= MAX_LINES)
        return;
    char *line = g_lines[g_lineCount];
    int n = snprintf(line, LINE_BYTES, "[PROBE] %s %s ", id, verdict);
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(line + n, (size_t)(LINE_BYTES - n), fmt, ap);
    va_end(ap);
    snprintf(g_screen[g_lineCount], SCREEN_COLS + 1, "%-4s %-4s %s", id, verdict, screen);
    ++g_lineCount;
    if (!strcmp(verdict, "PASS"))
        ++g_pass;
    else if (!strcmp(verdict, "FAIL") || !strcmp(verdict, "ERR"))
        ++g_fail;
    else if (!strcmp(verdict, "SKIP"))
        ++g_skip;
    DbgPrint("%s\n", line);
    redraw();
    Sleep(40); // XBDM drops debug lines that come too fast
}

// ------------------------------------------------------------------ memory
#define BLOCK_BYTES (32u << 20)
#define CACHED_BYTES (512u << 10)

static uint32_t free_kb(void)
{
    MM_STATISTICS stats;
    memset(&stats, 0, sizeof(stats));
    stats.Length = sizeof(stats);
    MmQueryStatistics(&stats);
    return stats.AvailablePages * 4u;
}

// The largest contiguous block the kernel would hand out now (64 KB steps).
static uint32_t largest_contig_kb(uint32_t capKb)
{
    uint32_t lo = 0, hi = capKb / 64u;
    while (lo < hi)
    {
        const uint32_t mid = (lo + hi + 1u) / 2u;
        void *p = MmAllocateContiguousMemoryEx(mid * 65536u, 0, MAXRAM, 0, PAGE_READWRITE);
        if (p)
        {
            MmFreeContiguousMemory(p);
            lo = mid;
        }
        else
            hi = mid - 1u;
    }
    return lo * 64u;
}

static uint32_t phys_of(const void *p) { return (uint32_t)MmGetPhysicalAddress((PVOID)p); }

// Reads 64 KB, one load per 32-byte line.
static uint32_t read64k(const uint8_t *p)
{
    uint32_t sum = 0;
    for (uint32_t o = 0; o < 65536u; o += 32u)
        sum += *(volatile const uint32_t *)(p + o);
    return sum;
}

// T1's block, and the cached memory T2 and T8 use (the block's start, or an
// allocation of its own when T1 failed).
static uint8_t *g_block;
static uint32_t g_blockPa;
static uint8_t *g_cached;
static uint32_t g_cachedPa;

// --------------------------------------------------------------------- GPU
// Push-buffer words written in place (as gs_nv2a_backend.cpp does).
static inline uint32_t mh(uint32_t method, uint32_t count) { return (count << 18) | (SUBCH_3D << 13) | method; }
// All parameters to the same method (DRAW_ARRAYS, ARRAY_ELEMENT16/32).
static inline uint32_t mh_ni(uint32_t method, uint32_t count) { return 0x40000000u | mh(method, count); }
static inline uint32_t *push1(uint32_t *p, uint32_t method, uint32_t value)
{
    p[0] = mh(method, 1);
    p[1] = value;
    return p + 2;
}

// DMA object handles: pbkit uses 2-17, the game 21. Below 512 each one is
// its own hash-table entry.
#define DMA_ALL_RAM 3u // pbkit's vertex DMA object: all of RAM, physical addresses, NV memory target
#define H_FENCE 32u
#define H_BLOCK 33u
#define H_PCI 34u
#define H_AGP 35u
#define H_PAGED_A 36u
#define H_PAGED_B 37u
#define H_PAGED_A_RW 38u

typedef struct
{
    float x, y, z, w;
    uint32_t color; // D3DCOLOR, 0xAARRGGBB
} Vtx;
#define VTX_STRIDE 20u
_Static_assert(sizeof(Vtx) == VTX_STRIDE, "vertex layout");

static const uint32_t kVertexProgram[] = {
#include "probe_vs.inl"
};

static int g_gpuOk, g_gpuDead, g_pixelsOk, g_fenceBad;
static volatile uint32_t *g_fence;
static uint32_t g_fenceSerial;
// 1,024 vertices, write-combined. Vertex indices per test, so that none
// overwrites another's: 0-16 T4, 32-289 T5 lists, 300-304 T5 strips,
// 310-318 T5 index lists, 320-322 the T2/T3 slot, 336-341 the readback
// check, 1000-1003 the full-screen quad (T3b, T7: 13 KB from the slot, so
// its fetches never share a vertex-cache line with the slot's).
static Vtx *g_small;
static uint32_t g_smallPa;
#define SMALL_VERTS 1024u
#define QUAD_FIRST 1000u
_Static_assert(QUAD_FIRST + 4u <= SMALL_VERTS, "quad inside g_small");
#define MESH_STRIPS 2048u
#define MESH_STRIP_LEN 16u
#define MESH_VERTS (MESH_STRIPS * MESH_STRIP_LEN)
static Vtx *g_mesh; // tiny-triangle strips, write-combined (T3a traffic, T5 costs, T7 load)
static uint32_t g_meshPa;
static uint32_t g_meshUs; // T5: the mesh as DRAW_ARRAYS in one BEGIN/END, GPU time

static uint32_t *push_fence(uint32_t *p, uint32_t value)
{
    p = push1(p, NV097_SET_SEMAPHORE_OFFSET, 0);
    return push1(p, NV097_BACK_END_WRITE_SEMAPHORE_RELEASE, value);
}

static int fence_passed(uint32_t serial) { return (int32_t)(*g_fence - serial) >= 0; }

#define GPU_TIMEOUT_MS 2000u
static uint64_t ms_cycles(uint32_t ms) { return (uint64_t)ms * 1000u * g_mhz; }

static int gpu_wait(uint32_t ms)
{
    const uint64_t start = rdtsc(), limit = ms_cycles(ms);
    while (pb_busy())
        if (rdtsc() - start > limit)
        {
            g_gpuDead = 1;
            return 0;
        }
    return 1;
}

// Until the fence passes. A GPU idle for 1 ms without writing it marks the
// fence path broken; from then on only pb_busy is waited for.
static int wait_fence(uint32_t serial, uint32_t ms)
{
    if (g_fenceBad)
        return gpu_wait(ms);
    const uint64_t start = rdtsc(), limit = ms_cycles(ms);
    uint64_t idleSince = 0;
    while (!fence_passed(serial))
    {
        const uint64_t now = rdtsc();
        if (now - start > limit)
        {
            g_gpuDead = 1;
            return 0;
        }
        if (pb_busy())
            idleSince = 0;
        else if (!idleSince)
            idleSince = now;
        else if (now - idleSince > (uint64_t)g_mhz * 1000u)
        {
            g_fenceBad = 1;
            return 1;
        }
    }
    return 1;
}

// The GPU is idle whenever a test starts one: back to the push buffer's head.
static uint32_t *gpu_begin(void)
{
    pb_reset();
    return pb_begin();
}

// Kicks and waits until the GPU has written a fence behind the work (its
// back end is done) and is idle, so the frame buffer can be read. Once a wait
// has timed out nothing more is sent: every later submission fails at once.
static int gpu_submit(uint32_t *p)
{
    if (g_gpuDead)
        return 0;
    const uint32_t serial = ++g_fenceSerial;
    p = push_fence(p, serial);
    pb_end(p);
    return wait_fence(serial, GPU_TIMEOUT_MS) && gpu_wait(GPU_TIMEOUT_MS);
}

#define BG 0xFF202020u    // clear colour: no test vertex has it
#define FILLC 0xFF404040u // the full-screen quad
static uint32_t *clear(uint32_t *p, uint32_t argb)
{
    p = push1(p, NV097_SET_CLEAR_RECT_HORIZONTAL, ((pb_back_buffer_width() - 1u) << 16));
    p = push1(p, NV097_SET_CLEAR_RECT_VERTICAL, ((pb_back_buffer_height() - 1u) << 16));
    p = push1(p, NV097_SET_COLOR_CLEAR_VALUE, argb);
    return push1(p, NV097_CLEAR_SURFACE, NV097_CLEAR_SURFACE_COLOR);
}

// Position (4 floats) at +0 and colour (D3DCOLOR) at +16 of each 20-byte
// vertex at `offset` in DMA object `dma`.
static uint32_t *set_arrays(uint32_t *p, uint32_t dma, uint32_t offset)
{
    p = push1(p, NV097_SET_CONTEXT_DMA_VERTEX_A, dma);
    p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_OFFSET + 0u * 4u, offset);
    return push1(p, NV097_SET_VERTEX_DATA_ARRAY_OFFSET + 3u * 4u, offset + 16u);
}

static uint32_t *draw_arrays(uint32_t *p, uint32_t op, uint32_t first, uint32_t count)
{
    p = push1(p, NV097_SET_BEGIN_END, op);
    *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
    *p++ = ((count - 1u) << 24) | first;
    return push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
}

// `n` full-screen fills (the quad as a strip): back-end work with almost no
// vertex traffic, about 0.3 ms each.
static uint32_t *push_fills(uint32_t *p, uint32_t n)
{
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa + QUAD_FIRST * VTX_STRIDE);
    for (uint32_t i = 0; i < n; ++i)
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP, 0, 4);
    return p;
}

static void gpu_setup(void)
{
    uint32_t *p = gpu_begin();
    p = push1(p, NV097_SET_TRANSFORM_EXECUTION_MODE,
              NV097_SET_TRANSFORM_EXECUTION_MODE_MODE_PROGRAM | (NV097_SET_TRANSFORM_EXECUTION_MODE_RANGE_MODE_PRIV << 2));
    p = push1(p, NV097_SET_TRANSFORM_PROGRAM_CXT_WRITE_EN, 0);
    p = push1(p, NV097_SET_TRANSFORM_PROGRAM_LOAD, 0);
    for (uint32_t i = 0; i < sizeof(kVertexProgram) / 4u; i += 4u)
    {
        *p++ = mh(NV097_SET_TRANSFORM_PROGRAM, 4);
        for (uint32_t j = 0; j < 4u; ++j)
            *p++ = kVertexProgram[i + j];
    }
    p = push1(p, NV097_SET_TRANSFORM_PROGRAM_START, 0);
#include "probe_ps.inl"
    p = push1(p, NV097_SET_SHADER_STAGE_PROGRAM, 0);
    for (uint32_t i = 0; i < 4u; ++i)
        p = push1(p, NV097_SET_TEXTURE_CONTROL0 + 64u * i, 0);
    // No w-buffering (the kernel leaves it on), no depth or stencil, no
    // blending, culling, fog or dither: what is drawn is the vertex colour.
    p = push1(p, NV097_SET_CONTROL0, 0);
    p = push1(p, NV097_SET_DEPTH_TEST_ENABLE, 0);
    p = push1(p, NV097_SET_DEPTH_MASK, 0);
    p = push1(p, NV097_SET_STENCIL_TEST_ENABLE, 0);
    p = push1(p, NV097_SET_ALPHA_TEST_ENABLE, 0);
    p = push1(p, NV097_SET_BLEND_ENABLE, 0);
    p = push1(p, NV097_SET_CULL_FACE_ENABLE, 0);
    p = push1(p, NV097_SET_FOG_ENABLE, 0);
    p = push1(p, NV097_SET_DITHER_ENABLE, 0);
    p = push1(p, NV097_SET_LIGHTING_ENABLE, 0);
    p = push1(p, NV097_SET_SPECULAR_ENABLE, 0);
    p = push1(p, NV097_SET_COLOR_MASK, NV097_SET_COLOR_MASK_BLUE_WRITE_ENABLE | NV097_SET_COLOR_MASK_GREEN_WRITE_ENABLE |
                                           NV097_SET_COLOR_MASK_RED_WRITE_ENABLE | NV097_SET_COLOR_MASK_ALPHA_WRITE_ENABLE);
    p = push1(p, NV097_SET_SHADE_MODEL, NV097_SET_SHADE_MODEL_SMOOTH);
    p = push1(p, NV097_SET_FLAT_SHADE_OP, NV097_SET_FLAT_SHADE_OP_VERTEX_FIRST);
    p = push1(p, NV097_SET_CONTEXT_DMA_SEMAPHORE, H_FENCE);
    *p++ = mh(NV097_SET_VERTEX_DATA_ARRAY_FORMAT, 16);
    for (uint32_t i = 0; i < 16u; ++i)
        *p++ = NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F; // size 0: off
    p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT + 0u * 4u,
              NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_F | (4u << 4) | (VTX_STRIDE << 8));
    p = push1(p, NV097_SET_VERTEX_DATA_ARRAY_FORMAT + 3u * 4u,
              NV097_SET_VERTEX_DATA_ARRAY_FORMAT_TYPE_UB_D3D | (4u << 4) | (VTX_STRIDE << 8));
    gpu_submit(p);
}

// The back buffer as the GPU left it. pbkit's colour buffers sit in a tile
// region: the linear picture is the one seen through the 0xF0000000 window
// (pb_agp_access, as nxdk_pgraph_tests reads it); the plain 0x80000000 view
// is used only if the GPU check finds the window wrong. Both are uncached.
static int g_fbDirect;
static uint32_t pixel_in(int direct, int x, int y)
{
    DWORD *const bb = pb_back_buffer();
    const uint8_t *fb = (const uint8_t *)(direct ? (void *)bb : pb_agp_access(bb));
    return *(volatile const uint32_t *)(fb + (uint32_t)y * pb_back_buffer_pitch() + (uint32_t)x * 4u);
}
static uint32_t pixel(int x, int y) { return pixel_in(g_fbDirect, x, y); }

static int same_color(uint32_t a, uint32_t b)
{
    for (int s = 0; s < 32; s += 8)
    {
        const int d = (int)((a >> s) & 0xFFu) - (int)((b >> s) & 0xFFu);
        if (d < -2 || d > 2)
            return 0;
    }
    return 1;
}

static void vtx(Vtx *v, float x, float y, uint32_t color)
{
    v->x = x;
    v->y = y;
    v->z = 1000.0f; // inside pbkit's depth range (near-far culling is on)
    v->w = 1.0f;
    v->color = color;
}

// A triangle around (cx, cy); (cx, cy) itself is inside it.
static void tri(Vtx *v, float cx, float cy, uint32_t color)
{
    vtx(&v[0], cx - 50.0f, cy + 30.0f, color);
    vtx(&v[1], cx + 50.0f, cy + 30.0f, color);
    vtx(&v[2], cx, cy - 50.0f, color);
}

static uint32_t centroid_pixel(const Vtx *a, const Vtx *b, const Vtx *c)
{
    return pixel((int)((a->x + b->x + c->x) / 3.0f + 0.5f), (int)((a->y + b->y + c->y) / 3.0f + 0.5f));
}

#define RED 0xFFFF0000u
#define GREEN 0xFF00FF00u
#define BLUE 0xFF0000FFu
// Test regions A and B (T2, T3): a triangle in one means the old data was
// drawn, in the other the new data.
#define AX 160.0f
#define BX 480.0f
#define RY 240.0f

// ------------------------------------------------------- readback (GPU line)
// Two triangles from write-combined memory, read back through both views of
// the back buffer. Every pixel test below depends on this one.
static void gpu_check(void)
{
    Vtx *v = g_small + 336;
    tri(&v[0], 320.0f, RY, GREEN);
    tri(&v[3], 160.0f, 120.0f, BLUE);
    sfence();
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa);
    p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 336, 6);
    const int done = gpu_submit(p);
    // The window is read only if the kernel maps it (first and last byte).
    DWORD *const bb = pb_back_buffer();
    const uint8_t *agp = (const uint8_t *)pb_agp_access(bb);
    const int agpMapped = MmQueryAddressProtect((PVOID)agp) != 0 &&
                          MmQueryAddressProtect((PVOID)(agp + pb_back_buffer_height() * pb_back_buffer_pitch() - 1u)) != 0;
    int ok[2] = {0, 0};
    for (int direct = !agpMapped; direct < 2 && done; ++direct)
        ok[direct] = same_color(pixel_in(direct, 320, (int)RY), GREEN) &&
                     same_color(pixel_in(direct, 160, 120), BLUE) && same_color(pixel_in(direct, 40, 400), BG) &&
                     same_color(pixel_in(direct, 600, 40), BG);
    // Whether the CPU's plain view shows the same picture (it matters to
    // console frame CRCs): 16 whole rows compared.
    uint32_t rowsSame = 0;
    for (uint32_t r = 0; r < 16u && done && agpMapped; ++r)
    {
        const int y = 8 + (int)r * 29;
        int same = 1;
        for (int x = 0; x < (int)pb_back_buffer_width() && same; ++x)
            same = pixel_in(0, x, y) == pixel_in(1, x, y);
        rowsSame += (uint32_t)same;
    }
    g_fbDirect = !ok[0] && ok[1];
    g_pixelsOk = ok[0] || ok[1];
    char screen[64];
    snprintf(screen, sizeof(screen), "readback %s, fence %s", g_pixelsOk ? (g_fbDirect ? "direct" : "agp") : "BROKEN",
             g_fenceBad ? "BROKEN" : "ok");
    emit("GPU", !done ? "ERR" : g_pixelsOk && !g_fenceBad ? "PASS" : "ERR", screen,
         "readback agpView=%d directView=%d agpMapped=%d rowsSame=%u/16 using=%s fence=%s fb=0x%08x pitch=%u (ERR: "
         "the pixel tests or the fence-timed tests below are skipped)",
         ok[0], ok[1], agpMapped, rowsSame, g_fbDirect ? "direct" : "agp", g_fenceBad ? "broken" : "ok",
         (unsigned)(uintptr_t)bb, (unsigned)pb_back_buffer_pitch());
}

// -------------------------------------------------------------------- T1
static struct
{
    int ok, contiguous, pbInit, pbInitAfterFree;
    int gpu; // -1: not checked (no GPU or no readback), -2: the GPU stopped
    uint32_t allocUs, prot, cold, warm, wc, freeBefore, freeAfter, largestLeft, largest;
} g_t1 = {.gpu = -1};

// Before pbkit or anything else allocates (the game would do this before
// constructing PS2Runtime, xbox_main.cpp:245-262, and before pb_init).
static void t1_allocate(void)
{
    g_t1.freeBefore = free_kb();
    const uint64_t t0 = rdtsc();
    g_block = (uint8_t *)MmAllocateContiguousMemoryEx(BLOCK_BYTES, 0, MAXRAM, 0, PAGE_READWRITE);
    g_t1.allocUs = to_us(rdtsc() - t0);
    if (!g_block)
    {
        g_t1.largest = largest_contig_kb(BLOCK_BYTES >> 10);
        return;
    }
    g_t1.ok = 1;
    g_blockPa = phys_of(g_block);
    g_t1.contiguous = 1;
    for (uint32_t o = 4096u; o < BLOCK_BYTES; o += 4096u)
        if (phys_of(g_block + o) != g_blockPa + o)
            g_t1.contiguous = 0;
    g_t1.prot = MmQueryAddressProtect(g_block);
    // Cached memory reads at cache speed once a line is in; write-combined
    // (uncached) memory goes to RAM on every load.
    for (uint32_t o = 0; o < 65536u; o += 4u)
        *(volatile uint32_t *)(g_block + o) = o;
    wbinvd();
    uint64_t t = rdtsc();
    read64k(g_block);
    g_t1.cold = to_us(rdtsc() - t);
    t = rdtsc();
    read64k(g_block);
    g_t1.warm = to_us(rdtsc() - t);
    uint8_t *wc = (uint8_t *)MmAllocateContiguousMemoryEx(65536u, 0, MAXRAM, 0, PAGE_READWRITE | PAGE_WRITECOMBINE);
    if (wc)
    {
        read64k(wc);
        t = rdtsc();
        read64k(wc);
        g_t1.wc = to_us(rdtsc() - t);
        MmFreeContiguousMemory(wc);
    }
    g_t1.freeAfter = free_kb();
    g_t1.largestLeft = largest_contig_kb(BLOCK_BYTES >> 10);
}

// After pbkit: the GPU draws a triangle from the block's last page through a
// DMA object based at the block (M8's guest RAM: offset = guest address).
static void t1_gpu_check(void)
{
    if (!g_block || !g_pixelsOk)
        return;
    static struct s_CtxDma dma;
    pb_create_dma_ctx(H_BLOCK, DMA_CLASS_3D, g_blockPa, BLOCK_BYTES - 1u, &dma);
    pb_bind_channel(&dma);
    const uint32_t off = BLOCK_BYTES - 4096u + 64u;
    tri((Vtx *)(g_block + off), 320.0f, RY, GREEN);
    wbinvd(); // whatever T2 finds about snooping
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, H_BLOCK, off);
    p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa);
    if (!gpu_submit(p))
        g_t1.gpu = -2;
    else
        g_t1.gpu = same_color(pixel(320, (int)RY), GREEN) && same_color(pixel(40, 40), BG);
}

static void t1_report(void)
{
    if (!g_t1.ok)
    {
        emit("T1", "FAIL", "no 32 MiB contiguous block", "contig32M largest=%uKB free=%uKB pbinit=%d",
             g_t1.largest, g_t1.freeBefore, g_t1.pbInit);
        return;
    }
    const int cached = !(g_t1.prot & (PAGE_NOCACHE | PAGE_WRITECOMBINE)) && g_t1.wc && g_t1.warm * 4u < g_t1.wc;
    // The CPU side answers on its own; the GPU's draw from the block is a
    // condition of PASS only once it has been checked (INFO when it was not,
    // ERR when the GPU stopped during it).
    const int cpuSide = g_t1.contiguous && cached && g_t1.pbInit == 0;
    const char *verdict = !cpuSide || g_t1.gpu == 0 ? "FAIL" : g_t1.gpu == -2 ? "ERR" : g_t1.gpu < 0 ? "INFO" : "PASS";
    char screen[64];
    snprintf(screen, sizeof(screen), "32M @%08x cached=%d gpu=%d left=%uM", (unsigned)g_blockPa, cached, g_t1.gpu,
             g_t1.largestLeft >> 10);
    emit("T1", verdict, screen,
         "contig32M pa=0x%08x alloc=%uus contiguous=%d prot=0x%x cached=%d read64K cold=%uus warm=%uus wc=%uus "
         "gpu=%d%s pbinit=%d%s freeBefore=%uKB freeAfter=%uKB largestLeft=%uKB",
         (unsigned)g_blockPa, g_t1.allocUs, g_t1.contiguous, (unsigned)g_t1.prot, cached, g_t1.cold, g_t1.warm,
         g_t1.wc, g_t1.gpu,
         g_t1.gpu == -1   ? "(GPU access not checked: no readback)"
         : g_t1.gpu == -2 ? "(GPU stopped drawing from the block)"
                          : "",
         g_t1.pbInit, g_t1.pbInitAfterFree ? "(block freed)" : "", g_t1.freeBefore, g_t1.freeAfter,
         g_t1.largestLeft);
}

// -------------------------------------------------------------------- T2
// The NV2A draws a triangle the CPU has just rewritten in cached memory: old
// data in RAM (red, region A), new data only in the CPU cache (green, B).
enum
{
    SNOOP_PLAIN,  // no flush: the question
    SNOOP_WBINVD, // control: WBINVD after the write
    SNOOP_WC      // control: write-combined memory
};
#define SNOOP_TRIALS 16

static void snoop_run(int mode, uint32_t dma, int *fresh, int *stale, int *other)
{
    *fresh = *stale = *other = 0;
    for (uint32_t i = 0; i < SNOOP_TRIALS; ++i)
    {
        // Slots 4,160 bytes apart: different pages and cache sets.
        Vtx *slot = mode == SNOOP_WC ? g_small + 320 : (Vtx *)(g_cached + i * 4160u);
        const uint32_t slotPa = mode == SNOOP_WC ? g_smallPa + 320u * VTX_STRIDE : g_cachedPa + i * 4160u;
        tri(slot, AX, RY, RED);
        if (mode == SNOOP_WC)
            sfence();
        else
            wbinvd(); // RAM holds the old triangle, the cache holds nothing
        for (uint32_t j = 0; j < 3u * VTX_STRIDE / 4u; ++j)
            (void)((volatile uint32_t *)slot)[j]; // the lines into the cache
        tri(slot, BX, RY, GREEN);                  // now dirty in the cache only
        if (mode == SNOOP_WBINVD)
            wbinvd();
        else if (mode == SNOOP_WC)
            sfence();
        uint32_t *p = gpu_begin();
        p = push1(p, NV097_BREAK_VERTEX_BUFFER_CACHE, 0); // T3's question kept out of this one
        p = clear(p, BG);
        p = set_arrays(p, dma, slotPa);
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
        p = set_arrays(p, DMA_ALL_RAM, g_smallPa);
        if (!gpu_submit(p))
        {
            *other += SNOOP_TRIALS - (int)i;
            return;
        }
        const uint32_t a = pixel((int)AX, (int)RY), b = pixel((int)BX, (int)RY);
        if (same_color(b, GREEN) && same_color(a, BG))
            ++*fresh;
        else if (same_color(a, RED) && same_color(b, BG))
            ++*stale;
        else
            ++*other;
        wbinvd();
    }
}

static const char *snoop_verdict(int fresh, int stale)
{
    if (fresh == SNOOP_TRIALS)
        return "PASS";
    if (stale == SNOOP_TRIALS)
        return "FAIL";
    return fresh + stale == SNOOP_TRIALS ? "FAIL" : "ERR";
}

static void t2_snoop(const char *id, const char *name, uint32_t dma)
{
    int fresh, stale, other;
    snoop_run(SNOOP_PLAIN, dma, &fresh, &stale, &other);
    const char *verdict = snoop_verdict(fresh, stale);
    char screen[64];
    snprintf(screen, sizeof(screen), "snoop %s: sees cache %d/%d, RAM %d", name, fresh, SNOOP_TRIALS, stale);
    emit(id, verdict, screen, "snoop dma=%s new=%d stale=%d other=%d trials=%d (%s)", name, fresh, stale, other,
         SNOOP_TRIALS,
         fresh == SNOOP_TRIALS ? "GPU sees dirty CPU cache lines: no flush needed"
         : stale == SNOOP_TRIALS ? "GPU reads RAM past dirty CPU lines: WBINVD or uncached arrays needed"
         : other ? "no clean answer (draw failed or mixed data)"
                 : "mixed: not dependable");
}

static void t2_controls(void)
{
    int f1, s1, o1, f2, s2, o2;
    snoop_run(SNOOP_WBINVD, DMA_ALL_RAM, &f1, &s1, &o1);
    snoop_run(SNOOP_WC, DMA_ALL_RAM, &f2, &s2, &o2);
    const int pass = f1 == SNOOP_TRIALS && f2 == SNOOP_TRIALS;
    char screen[64];
    snprintf(screen, sizeof(screen), "controls: wbinvd %d/%d wc %d/%d", f1, SNOOP_TRIALS, f2, SNOOP_TRIALS);
    emit("T2b", pass ? "PASS" : "ERR", screen, "snoop controls wbinvd new=%d stale=%d other=%d wc new=%d stale=%d other=%d", f1,
         s1, o1, f2, s2, o2);
}

// A linear DMA object over all of RAM with another memory target (pbkit's
// objects use the NV memory target, its notifier objects PCI).
static void make_target_dma(uint32_t handle, uint32_t target)
{
    static struct s_CtxDma dma[2];
    struct s_CtxDma *d = &dma[handle == H_AGP];
    pb_create_dma_ctx(handle, DMA_CLASS_3D, 0, MAXRAM, d);
    const uint32_t word0 = NV_PRAMIN + (d->Inst << 4);
    VIDEOREG(word0) = (VIDEOREG(word0) & ~0x00030000u) | (target << 16);
    pb_bind_channel(d);
}

// -------------------------------------------------------------------- T3
// The GPU draws a triangle (red, A); the CPU then rewrites the same vertices
// (green, B) and the GPU draws the same arrays again. Old data drawn means a
// vertex cache kept it.
#define VC_TRIALS 8

// T3a: the GPU idle between the two draws.
static void vcache_run(int indexed, int brk, int resend, uint32_t between, int *fresh, int *stale, int *other)
{
    *fresh = *stale = *other = 0;
    Vtx *slot = g_small + 320;
    const uint32_t slotPa = g_smallPa + 320u * VTX_STRIDE;
    for (int t = 0; t < VC_TRIALS; ++t)
    {
        tri(slot, AX, RY, RED);
        sfence();
        for (int pass = 0; pass < 2; ++pass)
        {
            uint32_t *p = gpu_begin();
            p = clear(p, BG);
            if (pass == 1 && brk)
                p = push1(p, NV097_BREAK_VERTEX_BUFFER_CACHE, 0);
            if (pass == 0 || resend)
                p = set_arrays(p, DMA_ALL_RAM, slotPa);
            if (indexed)
            {
                // AE16 needs pairs: the triangle twice.
                p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
                *p++ = mh_ni(NV097_ARRAY_ELEMENT16, 3);
                *p++ = 0u | (1u << 16);
                *p++ = 2u | (0u << 16);
                *p++ = 1u | (2u << 16);
                p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
            }
            else
                p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
            if (pass == 0 && between)
            {
                // Other vertex traffic after the first draw (the mesh).
                p = set_arrays(p, DMA_ALL_RAM, g_meshPa);
                p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP);
                for (uint32_t k = 0; k < between / MESH_STRIP_LEN; ++k)
                {
                    *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
                    *p++ = ((MESH_STRIP_LEN - 1u) << 24) | (k * MESH_STRIP_LEN);
                }
                p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
            }
            if (!gpu_submit(p))
            {
                *other += VC_TRIALS - t;
                return;
            }
            const uint32_t a = pixel((int)AX, (int)RY), b = pixel((int)BX, (int)RY);
            if (pass == 0)
            {
                if (!same_color(a, RED))
                {
                    ++*other; // the first draw itself failed
                    break;
                }
                tri(slot, BX, RY, GREEN);
                sfence(); // pb_end also flushes the NV2A's write-combine buffer
                continue;
            }
            if (same_color(b, GREEN) && same_color(a, BG))
                ++*fresh;
            else if (same_color(a, RED) && same_color(b, BG))
                ++*stale;
            else
                ++*other;
        }
    }
}

// T3b: no idle in between, as when one frame's draws follow the last
// frame's. The first draw is followed by a fence and full-screen fills; once
// the fence has passed (the first draw is done) the CPU rewrites the
// vertices and only then pushes the second draw, so the GPU cannot have read
// them early, while the fills keep it busy. The arrays are re-sent, as an M8
// record would. Region colours: the fills cover A, so stale draws red over
// the fill colour at A, fresh draws green at B.
#define LIVE_FILLS 8u

static void vcache_live(int brk, int *fresh, int *stale, int *other, int *idle)
{
    *fresh = *stale = *other = *idle = 0;
    Vtx *slot = g_small + 320;
    const uint32_t slotPa = g_smallPa + 320u * VTX_STRIDE;
    for (int t = 0; t < VC_TRIALS; ++t)
    {
        tri(slot, AX, RY, RED);
        sfence();
        uint32_t *p = gpu_begin();
        p = clear(p, BG);
        p = set_arrays(p, DMA_ALL_RAM, slotPa);
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
        const uint32_t drawn = ++g_fenceSerial;
        p = push_fence(p, drawn);
        p = push_fills(p, LIVE_FILLS);
        const uint32_t filled = ++g_fenceSerial;
        p = push_fence(p, filled);
        pb_end(p);
        if (!wait_fence(drawn, GPU_TIMEOUT_MS) || g_fenceBad)
        {
            *other += VC_TRIALS - t;
            return;
        }
        tri(slot, BX, RY, GREEN);
        sfence(); // pb_end flushes the NV2A's write-combine buffer
        p = pb_begin();
        if (brk)
            p = push1(p, NV097_BREAK_VERTEX_BUFFER_CACHE, 0);
        p = set_arrays(p, DMA_ALL_RAM, slotPa);
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
        if (fence_passed(filled))
            ++*idle; // the fills ran out before the second draw was pushed
        if (!gpu_submit(p))
        {
            *other += VC_TRIALS - t;
            return;
        }
        const uint32_t a = pixel((int)AX, (int)RY), b = pixel((int)BX, (int)RY);
        if (same_color(b, GREEN) && same_color(a, FILLC))
            ++*fresh;
        else if (same_color(a, RED) && same_color(b, FILLC))
            ++*stale;
        else
            ++*other;
    }
}

static void t3_vertex_cache(void)
{
    int fDa, sDa, oDa, fAe, sAe, oAe, fBr, sBr, oBr, fRe, sRe, oRe;
    vcache_run(0, 0, 0, 0, &fDa, &sDa, &oDa);
    vcache_run(1, 0, 0, 0, &fAe, &sAe, &oAe);
    vcache_run(0, 0, 1, 8192, &fRe, &sRe, &oRe);
    vcache_run(0, 1, 0, 0, &fBr, &sBr, &oBr);
    // Every variant's draws must work; stale data in any of the three without
    // BREAK means BREAK is needed (at least where that variant applies).
    int ok = oDa == 0 && oAe == 0 && oRe == 0 && oBr == 0 && fBr == VC_TRIALS;
    int pass = ok && fDa == VC_TRIALS && fAe == VC_TRIALS && fRe == VC_TRIALS;
    char screen[64];
    snprintf(screen, sizeof(screen), "idle: stale DA %d AE16 %d resend %d brk %d", sDa, sAe, sRe, sBr);
    emit("T3a", !ok ? "ERR" : pass ? "PASS" : "FAIL", screen,
         "vcache idle trials=%d DA new=%d stale=%d other=%d | AE16 new=%d stale=%d other=%d | resend+8K new=%d "
         "stale=%d other=%d | BREAK new=%d stale=%d other=%d (%s)",
         VC_TRIALS, fDa, sDa, oDa, fAe, sAe, oAe, fRe, sRe, oRe, fBr, sBr, oBr,
         !ok ? "a draw or the BREAK control failed" : pass ? "no stale vertices across an idle GPU"
                                                           : "stale vertices: BREAK needed");
    if (g_gpuDead)
        return;
    if (g_fenceBad)
    {
        emit("T3b", "SKIP", "no fence", "vcache live needs the fence (GPU line)");
        return;
    }
    int fL, sL, oL, iL, fLb, sLb, oLb, iLb;
    vcache_live(0, &fL, &sL, &oL, &iL);
    vcache_live(1, &fLb, &sLb, &oLb, &iLb);
    ok = oL == 0 && oLb == 0 && fLb == VC_TRIALS && iL == 0 && iLb == 0;
    pass = ok && fL == VC_TRIALS;
    snprintf(screen, sizeof(screen), "live: stale %d/%d, BREAK stale %d", sL, VC_TRIALS, sLb);
    emit("T3b", !ok ? "ERR" : pass ? "PASS" : "FAIL", screen,
         "vcache live (GPU busy between the draws, arrays re-sent) trials=%d new=%d stale=%d other=%d idle=%d | "
         "BREAK new=%d stale=%d other=%d idle=%d (%s)",
         VC_TRIALS, fL, sL, oL, iL, fLb, sLb, oLb, iLb,
         !ok ? "control failed or the GPU went idle" : pass ? "no stale vertices: BREAK not needed"
                                                         : "stale vertices: BREAK needed");
}

// -------------------------------------------------------------------- T4
// One colour per vertex (alpha too); the colour inside each triangle names
// the vertex that coloured it.
static const uint32_t kVc[6] = {0xFFFF0000u, 0xEE00FF00u, 0xDD0000FFu, 0xCCFFFF00u, 0xBB00FFFFu, 0xAAFF00FFu};

static int which_vertex(uint32_t px)
{
    for (int i = 0; i < 6; ++i)
        if (same_color(px, kVc[i]))
            return i;
    return same_color(px, BG) ? 8 : 9; // 8: nothing drawn, 9: some other colour
}

static int flat_run(uint32_t op, int strip[4], int list[2], int fan[3])
{
    Vtx *v = g_small;
    // Strip: a zig-zag of six vertices, four triangles.
    for (int i = 0; i < 6; ++i)
        vtx(&v[i], 80.0f + 80.0f * (float)(i / 2), (i & 1) ? 180.0f : 80.0f, kVc[i]);
    // List: two triangles.
    vtx(&v[6], 80.0f, 240.0f, kVc[0]);
    vtx(&v[7], 200.0f, 240.0f, kVc[1]);
    vtx(&v[8], 140.0f, 340.0f, kVc[2]);
    vtx(&v[9], 240.0f, 240.0f, kVc[3]);
    vtx(&v[10], 360.0f, 240.0f, kVc[4]);
    vtx(&v[11], 300.0f, 340.0f, kVc[5]);
    // Fan: centre and four rim vertices, three triangles.
    vtx(&v[12], 480.0f, 380.0f, kVc[0]);
    vtx(&v[13], 400.0f, 300.0f, kVc[1]);
    vtx(&v[14], 440.0f, 240.0f, kVc[2]);
    vtx(&v[15], 520.0f, 240.0f, kVc[3]);
    vtx(&v[16], 560.0f, 300.0f, kVc[4]);
    sfence();
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa);
    p = push1(p, NV097_SET_SHADE_MODEL, NV097_SET_SHADE_MODEL_FLAT);
    p = push1(p, NV097_SET_FLAT_SHADE_OP, op);
    p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP, 0, 6);
    p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 6, 6);
    p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLE_FAN, 12, 5);
    p = push1(p, NV097_SET_SHADE_MODEL, NV097_SET_SHADE_MODEL_SMOOTH);
    p = push1(p, NV097_SET_FLAT_SHADE_OP, NV097_SET_FLAT_SHADE_OP_VERTEX_FIRST);
    if (!gpu_submit(p))
        return 0;
    for (int k = 0; k < 4; ++k)
        strip[k] = which_vertex(centroid_pixel(&v[k], &v[k + 1], &v[k + 2]));
    list[0] = which_vertex(centroid_pixel(&v[6], &v[7], &v[8]));
    list[1] = which_vertex(centroid_pixel(&v[9], &v[10], &v[11]));
    for (int k = 0; k < 3; ++k)
        fan[k] = which_vertex(centroid_pixel(&v[12], &v[13 + k], &v[14 + k]));
    return 1;
}

static void t4_flat_shading(void)
{
    int sl[4], ll[2], fl[3], sf[4], lf[2], ff[3];
    if (!flat_run(NV097_SET_FLAT_SHADE_OP_VERTEX_LAST, sl, ll, fl) ||
        !flat_run(NV097_SET_FLAT_SHADE_OP_VERTEX_FIRST, sf, lf, ff))
    {
        emit("T4", "ERR", "GPU stopped", "flat GPU timeout");
        return;
    }
    // The GS flat-shades with the last vertex of each triangle.
    const int strip = sl[0] == 2 && sl[1] == 3 && sl[2] == 4 && sl[3] == 5;
    const int list = ll[0] == 2 && ll[1] == 5;
    const int fan = fl[0] == 2 && fl[1] == 3 && fl[2] == 4;
    char screen[64];
    snprintf(screen, sizeof(screen), "LAST strip %d%d%d%d list %d%d fan %d%d%d", sl[0], sl[1], sl[2], sl[3], ll[0],
             ll[1], fl[0], fl[1], fl[2]);
    emit("T4a", strip && list ? "PASS" : "FAIL", screen,
         "flat LAST strip=%d,%d,%d,%d list=%d,%d fan=%d,%d,%d (GS order: strip=2,3,4,5 list=2,5 fan=2,3,4; "
         "8=nothing drawn 9=other colour) strip=%s list=%s fan=%s",
         sl[0], sl[1], sl[2], sl[3], ll[0], ll[1], fl[0], fl[1], fl[2], strip ? "ok" : "no", list ? "ok" : "no",
         fan ? "ok" : "no");
    const int differs = memcmp(sl, sf, sizeof(sl)) || memcmp(ll, lf, sizeof(ll)) || memcmp(fl, ff, sizeof(fl));
    snprintf(screen, sizeof(screen), "FIRST strip %d%d%d%d list %d%d fan %d%d%d", sf[0], sf[1], sf[2], sf[3], lf[0],
             lf[1], ff[0], ff[1], ff[2]);
    emit("T4b", differs ? "INFO" : "ERR", screen, "flat FIRST (pbkit default, control) strip=%d,%d,%d,%d list=%d,%d fan=%d,%d,%d%s",
         sf[0], sf[1], sf[2], sf[3], lf[0], lf[1], ff[0], ff[1], ff[2], differs ? "" : " same as LAST: the switch had no effect");
}

// -------------------------------------------------------------------- T5
// The vertices of the assembly tests, written before any of them draws.
//   lists (32-289): 258 vertices drawn as 256 + 2 (the renderer's chunks are
//     256, gs_nv2a_backend.cpp:1890-1894). The first 255 are one point (no
//     pixels); the 86th triangle (255, 256, 257) straddles the split.
//   strips (300-304): five vertices drawn as 3 + 2; the third triangle
//     (2, 3, 4) exists only if assembly continues.
//   index lists (310-318): three triangles.
#define T5_LIST 32u
#define T5_STRIP 300u
#define T5_INDEX 310u

static void t5_vertices(void)
{
    Vtx *v = g_small + T5_LIST;
    for (int i = 0; i < 255; ++i)
        vtx(&v[i], 4.0f, 4.0f, GREEN);
    vtx(&v[255], 100.0f, 300.0f, GREEN);
    vtx(&v[256], 250.0f, 300.0f, GREEN);
    vtx(&v[257], 175.0f, 420.0f, GREEN);
    v = g_small + T5_STRIP;
    vtx(&v[0], 100.0f, 100.0f, GREEN);
    vtx(&v[1], 100.0f, 200.0f, GREEN);
    vtx(&v[2], 200.0f, 100.0f, GREEN);
    vtx(&v[3], 200.0f, 200.0f, GREEN);
    vtx(&v[4], 300.0f, 100.0f, GREEN);
    v = g_small + T5_INDEX;
    tri(&v[0], 120.0f, RY, GREEN);
    tri(&v[3], 320.0f, RY, GREEN);
    tri(&v[6], 520.0f, RY, GREEN);
    sfence();
}

// 0: one draw of the straddling triangle (the control); 1: the renderer's
// form, one method header per DRAW_ARRAYS; 2: both in one header.
static int split_list(int form)
{
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa + T5_LIST * VTX_STRIDE);
    if (form == 0)
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 255, 3);
    else
    {
        p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
        if (form == 2)
        {
            *p++ = mh_ni(NV097_DRAW_ARRAYS, 2);
            *p++ = (255u << 24) | 0u;
            *p++ = (1u << 24) | 256u;
        }
        else
        {
            *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
            *p++ = (255u << 24) | 0u;
            *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
            *p++ = (1u << 24) | 256u;
        }
        p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
    }
    if (!gpu_submit(p))
        return -1;
    return same_color(pixel(175, 340), GREEN);
}

static int split_strip(int split)
{
    const Vtx *v = g_small + T5_STRIP;
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa + T5_STRIP * VTX_STRIDE);
    p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP);
    if (split)
    {
        *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
        *p++ = (2u << 24) | 0u;
        *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
        *p++ = (1u << 24) | 3u;
    }
    else
    {
        *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
        *p++ = (4u << 24) | 0u;
    }
    p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
    if (!gpu_submit(p))
        return -1;
    return same_color(centroid_pixel(&v[2], &v[3], &v[4]), GREEN);
}

// Index lists (M8 draws strips as ARRAY_ELEMENT16 lists of up to 2,047
// words a header): 0, the control, all six indices in one header; 1,
// ARRAY_ELEMENT16 split over method headers (one index pair each); 2, an
// ARRAY_ELEMENT16 pair finished by one ARRAY_ELEMENT32 (an odd count).
static int split_indices(int form)
{
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa + T5_INDEX * VTX_STRIDE);
    p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_TRIANGLES);
    if (form == 2)
    {
        *p++ = mh_ni(NV097_ARRAY_ELEMENT16, 1);
        *p++ = 6u | (7u << 16);
        *p++ = mh_ni(NV097_ARRAY_ELEMENT32, 1);
        *p++ = 8u;
    }
    else if (form == 1)
        for (uint32_t i = 0; i < 6u; i += 2u)
        {
            *p++ = mh_ni(NV097_ARRAY_ELEMENT16, 1);
            *p++ = i | ((i + 1u) << 16);
        }
    else
    {
        *p++ = mh_ni(NV097_ARRAY_ELEMENT16, 3);
        for (uint32_t i = 0; i < 6u; i += 2u)
            *p++ = i | ((i + 1u) << 16);
    }
    p = push1(p, NV097_SET_BEGIN_END, NV097_SET_BEGIN_END_OP_END);
    if (!gpu_submit(p))
        return -1;
    if (form == 2)
        return same_color(pixel(520, (int)RY), GREEN);
    return same_color(pixel(120, (int)RY), GREEN) && same_color(pixel(320, (int)RY), GREEN);
}

static const char *continues(int r) { return r < 0 ? "timeout" : r ? "continues" : "restarts"; }

static void t5_assembly(void)
{
    t5_vertices();
    const int listControl = split_list(0), lists = split_list(1), listsOne = split_list(2);
    const int stripControl = split_strip(0), strips = split_strip(1);
    const int indexControl = split_indices(0), ae16 = split_indices(1), mixed = split_indices(2);
    // A timeout (-1) answers nothing: ERR, like a failed control.
    char screen[64];
    snprintf(screen, sizeof(screen), "lists across DRAW_ARRAYS: %s", listControl == 1 ? continues(lists) : "ctl?");
    emit("T5a", listControl != 1 || lists < 0 || listsOne < 0 ? "ERR" : lists == 1 ? "PASS" : "FAIL", screen,
         "assembly lists 256+2: %s (one header per DRAW_ARRAYS, as gs_nv2a_backend.cpp:1890-1894), %s (one header) "
         "control=%d (PASS: the renderer's 256-vertex list chunks are right; FAIL: they drop or misplace a triangle "
         "at every 256)",
         continues(lists), continues(listsOne), listControl);
    snprintf(screen, sizeof(screen), "strips across DRAW_ARRAYS: %s",
             stripControl == 1 ? continues(strips) : "ctl?");
    emit("T5b", stripControl == 1 && strips >= 0 ? "INFO" : "ERR", screen,
         "assembly strips 3+2: %s control=%d (the renderer's strip chunks overlap by two vertices and are right "
         "either way)",
         continues(strips), stripControl);
    snprintf(screen, sizeof(screen), "AE16 across headers %s, AE16+AE32 %s", ae16 == 1 ? "ok" : ae16 ? "?" : "NO",
             mixed == 1 ? "ok" : mixed ? "?" : "NO");
    emit("T5c", indexControl != 1 || ae16 < 0 || mixed < 0 ? "ERR" : ae16 == 1 && mixed == 1 ? "PASS" : "FAIL", screen,
         "assembly index lists: AE16 split over method headers %s | AE16 pair + AE32 %s | control=%d (PASS: M8's "
         "index lists may span headers and end on an odd index)",
         continues(ae16), continues(mixed), indexControl);
}

// Costs. The mesh is 2,048 strips of 16 vertices (14 triangles of 2 px
// each), so the GPU time is vertex and primitive work, not fill. The strips
// run end to end, 32 to a row, odd rows right to left: each strip starts on
// the column where the one before it ended, and each row where the row above
// ended. Drawn as one strip (MESH_DA_JOINED if assembly continues across
// DRAW_ARRAYS, T5b; the joined index lists always) the joins are zero-area
// triangles, so every form covers the same pixels.
#define MESH_ROW 32u
static void build_mesh(void)
{
    const float width = (float)(MESH_STRIP_LEN / 2u - 1u) * 2.0f; // 14 px
    for (uint32_t k = 0; k < MESH_STRIPS; ++k)
    {
        const uint32_t row = k / MESH_ROW, col = k % MESH_ROW;
        const int back = (int)(row & 1u);
        const float x0 = 16.0f + (float)(back ? MESH_ROW - col : col) * width, y0 = 16.0f + (float)row * 7.0f;
        for (uint32_t i = 0; i < MESH_STRIP_LEN; ++i)
            vtx(&g_mesh[k * MESH_STRIP_LEN + i], x0 + (back ? -2.0f : 2.0f) * (float)(i / 2u),
                y0 + 2.0f * (float)(i & 1u), 0xFF808080u);
    }
    sfence();
}

// The strips joined into one with two repeated indices between strips.
#define JOINED_INDICES (MESH_STRIPS * (MESH_STRIP_LEN + 2u) - 2u)
static uint32_t joined_index(uint32_t n)
{
    const uint32_t k = n / (MESH_STRIP_LEN + 2u), r = n % (MESH_STRIP_LEN + 2u);
    if (r < MESH_STRIP_LEN)
        return k * MESH_STRIP_LEN + r;
    return r == MESH_STRIP_LEN ? k * MESH_STRIP_LEN + MESH_STRIP_LEN - 1u : (k + 1u) * MESH_STRIP_LEN;
}

enum
{
    MESH_DA_JOINED, // one BEGIN/END, one DRAW_ARRAYS per strip
    MESH_DA_PAIRS,  // one BEGIN/END per strip
    MESH_AE16,      // one BEGIN/END, the joined index list
    MESH_AE32,
    MESH_AE16_PAIRS, // one BEGIN/END and one index list per strip
    MESH_KINDS
};

static uint32_t *push_mesh(uint32_t *p, int kind)
{
    const uint32_t strip = NV097_SET_BEGIN_END_OP_TRIANGLE_STRIP, end = NV097_SET_BEGIN_END_OP_END;
    switch (kind)
    {
    case MESH_DA_JOINED:
        p = push1(p, NV097_SET_BEGIN_END, strip);
        for (uint32_t k = 0; k < MESH_STRIPS; ++k)
        {
            *p++ = mh_ni(NV097_DRAW_ARRAYS, 1);
            *p++ = ((MESH_STRIP_LEN - 1u) << 24) | (k * MESH_STRIP_LEN);
        }
        return push1(p, NV097_SET_BEGIN_END, end);
    case MESH_DA_PAIRS:
        for (uint32_t k = 0; k < MESH_STRIPS; ++k)
            p = draw_arrays(p, strip, k * MESH_STRIP_LEN, MESH_STRIP_LEN);
        return p;
    case MESH_AE16:
    case MESH_AE32:
    {
        p = push1(p, NV097_SET_BEGIN_END, strip);
        const int wide = kind == MESH_AE32;
        const uint32_t words = wide ? JOINED_INDICES : JOINED_INDICES / 2u;
        for (uint32_t j = 0; j < words;)
        {
            const uint32_t c = words - j < 2047u ? words - j : 2047u;
            *p++ = mh_ni(wide ? NV097_ARRAY_ELEMENT32 : NV097_ARRAY_ELEMENT16, c);
            for (uint32_t e = 0; e < c; ++e, ++j)
                *p++ = wide ? joined_index(j) : joined_index(2u * j) | (joined_index(2u * j + 1u) << 16);
        }
        return push1(p, NV097_SET_BEGIN_END, end);
    }
    default:
        for (uint32_t k = 0; k < MESH_STRIPS; ++k)
        {
            p = push1(p, NV097_SET_BEGIN_END, strip);
            *p++ = mh_ni(NV097_ARRAY_ELEMENT16, MESH_STRIP_LEN / 2u);
            for (uint32_t i = 0; i < MESH_STRIP_LEN; i += 2u)
                *p++ = (k * MESH_STRIP_LEN + i) | ((k * MESH_STRIP_LEN + i + 1u) << 16);
            p = push1(p, NV097_SET_BEGIN_END, end);
        }
        return p;
    }
}

// GPU time of one submission (kick to fence and idle), best of three, in
// cycles; the push buffer is built before the clock starts. kind -1: an
// empty submission, the kick's own cost.
static uint64_t time_mesh(int kind, uint32_t *dwords, uint64_t *buildCycles)
{
    uint64_t best = ~0ull;
    for (int r = 0; r < 3; ++r)
    {
        uint32_t *p = gpu_begin();
        uint32_t *const start = p;
        const uint64_t b0 = rdtsc();
        p = kind < 0 ? push1(p, NV097_NO_OPERATION, 0) : push_mesh(set_arrays(p, DMA_ALL_RAM, g_meshPa), kind);
        if (buildCycles)
            *buildCycles = rdtsc() - b0;
        *dwords = (uint32_t)(p - start);
        const uint64_t t0 = rdtsc();
        if (!gpu_submit(p))
            return 0;
        const uint64_t t = rdtsc() - t0;
        if (t < best)
            best = t;
    }
    return best;
}

static void t5_costs(void)
{
    uint32_t dw, dwMesh[MESH_KINDS];
    uint64_t build = 0;
    const uint64_t kick = time_mesh(-1, &dw, NULL);
    uint64_t t[MESH_KINDS];
    for (int k = 0; k < MESH_KINDS; ++k)
        if (!(t[k] = time_mesh(k, &dwMesh[k], k == MESH_DA_PAIRS ? &build : NULL)) || g_gpuDead)
        {
            emit("T5d", "ERR", "GPU stopped", "cost GPU timeout at kind %d", k);
            return;
        }
    for (int k = 0; k < MESH_KINDS; ++k)
        t[k] = t[k] > kick ? t[k] - kick : 0;
    g_meshUs = to_us(t[MESH_DA_JOINED]);
    if (!g_meshUs)
        g_meshUs = 1;
    // Per vertex or index; a BEGIN/END pair is the difference between the
    // per-strip and the joined forms, per strip.
    const uint32_t daJoined = to_ns(t[MESH_DA_JOINED]) / MESH_VERTS, daPairs = to_ns(t[MESH_DA_PAIRS]) / MESH_VERTS;
    const uint32_t ae16 = to_ns(t[MESH_AE16]) / JOINED_INDICES, ae32 = to_ns(t[MESH_AE32]) / JOINED_INDICES;
    const uint32_t ae16Pairs = to_ns(t[MESH_AE16_PAIRS]) / MESH_VERTS;
    const int32_t pairDa = ((int32_t)to_ns(t[MESH_DA_PAIRS]) - (int32_t)to_ns(t[MESH_DA_JOINED])) / (int32_t)MESH_STRIPS;
    const int32_t pairAe = ((int32_t)to_ns(t[MESH_AE16_PAIRS]) - (int32_t)to_ns(t[MESH_AE16])) / (int32_t)MESH_STRIPS;
    const uint32_t pushNs = dwMesh[MESH_DA_PAIRS] ? to_ns(build) / dwMesh[MESH_DA_PAIRS] : 0;
    char screen[64];
    snprintf(screen, sizeof(screen), "ns/vtx DA %u AE16 %u AE32 %u pair %d/%d", daJoined, ae16, ae32, (int)pairDa,
             (int)pairAe);
    emit("T5d", "INFO", screen,
         "cost ns/vertex DA-joined=%u DA-strips=%u AE16=%u AE32=%u AE16-strips=%u | BEGIN/END pair DA=%dns AE16=%dns | "
         "pushKB DA-joined=%u DA-strips=%u AE16=%u AE32=%u AE16-strips=%u | kick=%uus push=%uns/dword | mesh=%u "
         "strips x %u end to end (joins zero-area), %uus as DA-joined",
         daJoined, daPairs, ae16, ae32, ae16Pairs, (int)pairDa, (int)pairAe, dwMesh[MESH_DA_JOINED] / 256u,
         dwMesh[MESH_DA_PAIRS] / 256u, dwMesh[MESH_AE16] / 256u, dwMesh[MESH_AE32] / 256u,
         dwMesh[MESH_AE16_PAIRS] / 256u, to_us(kick), pushNs, MESH_STRIPS, MESH_STRIP_LEN, g_meshUs);
}

// -------------------------------------------------------------------- T6
// Page-table DMA objects: word 0 flags (class, page table present, not
// linear, access as pbkit's, target), word 1 the limit, then one entry per
// 4 KB page (physical address | present | writable). Vertices are written
// through the same page map, so the GPU draws them only if it follows it.
#define T6_PAGES 16u
static uint8_t *g_t6Page[T6_PAGES];
static uint32_t g_t6Phys[T6_PAGES];

typedef uint32_t (*PageMap)(uint32_t dmaPage);
static uint32_t map_reversed(uint32_t k) { return (T6_PAGES - 1u - k) % T6_PAGES; }
static uint32_t map_scattered(uint32_t k) { return (k * 5u + 3u) % T6_PAGES; }

static void paged_write(PageMap map, uint32_t off, const void *src, uint32_t n)
{
    const uint8_t *s = (const uint8_t *)src;
    for (uint32_t i = 0; i < n; ++i, ++off)
        g_t6Page[map(off >> 12)][off & 4095u] = s[i];
}

static void write_paged_dma(uint32_t praminOff, uint32_t access, uint32_t limit, PageMap map, uint32_t ptes)
{
    VIDEOREG(NV_PRAMIN + praminOff + 4u) = limit;
    for (uint32_t k = 0; k < ptes; ++k)
        VIDEOREG(NV_PRAMIN + praminOff + 8u + 4u * k) = g_t6Phys[map(k)] | 3u;
    VIDEOREG(NV_PRAMIN + praminOff) = DMA_CLASS_3D | 0x00001000u | access; // page table, not linear, NV memory
}

// Three triangles, each from three vertices at a DMA offset (one of them
// straddling a page boundary); red, green, blue at x = 160, 320, 480.
static int paged_draw(uint32_t handle, PageMap map, const uint32_t starts[3])
{
    for (uint32_t k = 0; k < T6_PAGES; ++k)
        memset(g_t6Page[k], 0, 4096);
    static const uint32_t colors[3] = {RED, GREEN, BLUE};
    for (int i = 0; i < 3; ++i)
    {
        Vtx v[3];
        tri(v, 160.0f + 160.0f * (float)i, RY, colors[i]);
        paged_write(map, starts[i], v, sizeof(v));
    }
    wbinvd(); // cached memory: whatever T2 found
    uint32_t *p = gpu_begin();
    p = clear(p, BG);
    for (int i = 0; i < 3; ++i)
    {
        p = set_arrays(p, handle, starts[i]);
        p = draw_arrays(p, NV097_SET_BEGIN_END_OP_TRIANGLES, 0, 3);
    }
    p = set_arrays(p, DMA_ALL_RAM, g_smallPa);
    if (!gpu_submit(p))
        return -1;
    int ok = same_color(pixel(320, 60), BG);
    for (int i = 0; i < 3; ++i)
        ok += same_color(pixel(160 + 160 * i, (int)RY), colors[i]);
    return ok; // 4: all right
}

// Consecutive 16-byte blocks of pbkit's instance memory (pb_create_dma_ctx
// takes the next one each call); 0 when the 20 KB it manages are short.
static uint32_t reserve_blocks(uint32_t handle, uint32_t blocks, uint32_t *freeBytes)
{
    const uint32_t base = (VIDEOREG(NV_PFIFO_RAMHT) & NV_PFIFO_RAMHT_BASE_ADDRESS) << 8;
    const uint32_t endBlock = (base + 0x5000u) >> 4; // pbkit's INSTANCE_MEM_MAXSIZE
    struct s_CtxDma d;
    pb_create_dma_ctx(handle, DMA_CLASS_3D, 0, 0, &d);
    const uint32_t first = d.Inst;
    if (freeBytes)
        *freeBytes = first < endBlock ? (endBlock - first) * 16u : 0;
    if (first + blocks > endBlock)
        return 0;
    for (uint32_t i = 1; i < blocks; ++i)
    {
        pb_create_dma_ctx(handle, DMA_CLASS_3D, 0, 0, &d);
        if (d.Inst != first + i)
            return 0;
    }
    return first;
}

static void bind_at(uint32_t handle, uint32_t praminOff)
{
    static struct s_CtxDma d[3];
    struct s_CtxDma *o = &d[handle - H_PAGED_A];
    o->ChannelID = handle;
    o->Inst = praminOff >> 4;
    o->Class = DMA_CLASS_3D;
    o->isGr = 0;
    pb_bind_channel(o);
}

// The GPU's instance memory past pbkit's 20 KB: the kernel reserves 64 KB
// for it (MmClaimGpuInstanceMemory; pbkit claims it all and uses the first
// 20 KB). PRAMIN offsets map to RAM in 64 KB blocks counted down from the
// top (0-0xFFFF is the top 64 KB). Used only when pbkit's own hash table
// reads the same through both windows and the kernel refuses to hand out
// those pages (checks that write nothing), and then a test word at each end
// reads back through RAM (each end's own word is restored).
static uint32_t pramin_phys(uint32_t ramTop, uint32_t off) { return ramTop - ((off >> 16) + 1u) * 0x10000u + (off & 0xFFFFu); }
static uint32_t ram_read(uint32_t pa)
{
    wbinvd();
    return *(volatile uint32_t *)(0x80000000u | pa);
}

static uint32_t extended_instance_memory(uint32_t need, char *why, size_t whyBytes)
{
    const uint32_t ramTop = VIDEOREG(0x0010020Cu); // NV_PFB_CSTATUS: RAM size
    const uint32_t base = (VIDEOREG(NV_PFIFO_RAMHT) & NV_PFIFO_RAMHT_BASE_ADDRESS) << 8;
    if ((ramTop != (64u << 20) && ramTop != (128u << 20)) || (base & 0xFFFFu))
    {
        snprintf(why, whyBytes, "ram=0x%x ramht=0x%x", (unsigned)ramTop, (unsigned)base);
        return 0;
    }
    const uint32_t start = base + 0x5000u, end = base + 0x10000u;
    if (end - start < need)
    {
        snprintf(why, whyBytes, "only %u bytes", (unsigned)(end - start));
        return 0;
    }
    const uint32_t entry = base + 13u * 8u + 4u; // pbkit's 3D object (handle 13): valid bit, instance
    const uint32_t viaPramin = VIDEOREG(NV_PRAMIN + entry), viaRam = ram_read(pramin_phys(ramTop, entry));
    if (!(viaPramin & 0x80000000u) || viaPramin != viaRam)
    {
        snprintf(why, whyBytes, "map: pramin=0x%x ram=0x%x", (unsigned)viaPramin, (unsigned)viaRam);
        return 0;
    }
    for (uint32_t pa = pramin_phys(ramTop, start) & ~4095u; pa <= pramin_phys(ramTop, end - 1u); pa += 4096u)
    {
        void *page = MmAllocateContiguousMemoryEx(4096u, pa, pa + 4095u, 0, PAGE_READWRITE);
        if (page)
        {
            MmFreeContiguousMemory(page);
            snprintf(why, whyBytes, "page 0x%x is free RAM", (unsigned)pa);
            return 0;
        }
    }
    // The words there are not known (pbkit cleared only its own 20 KB): each
    // is put back as it was.
    const uint32_t ends[2] = {start, end - 4u};
    for (int i = 0; i < 2; ++i)
    {
        const uint32_t was = VIDEOREG(NV_PRAMIN + ends[i]);
        VIDEOREG(NV_PRAMIN + ends[i]) = 0x5A17C0DEu ^ ends[i];
        const uint32_t back = ram_read(pramin_phys(ramTop, ends[i]));
        VIDEOREG(NV_PRAMIN + ends[i]) = was;
        if (back != (0x5A17C0DEu ^ ends[i]))
        {
            snprintf(why, whyBytes, "test word at 0x%x", (unsigned)ends[i]);
            return 0;
        }
    }
    return start;
}

// The line of a risky test that did not run: its switch left it out, there
// is no readback, or the GPU stopped before it.
static void skip_risky(const char *id, const char *what, int enabled, const char *switchName, int value)
{
    char why[48];
    if (!enabled)
        snprintf(why, sizeof(why), "left out: %s=%d", switchName, value);
    else
        snprintf(why, sizeof(why), "%s", !g_pixelsOk ? "no readback" : "GPU stopped before it");
    emit(id, "SKIP", why, "%s not run (%s)", what, why);
}

// mask: PROBE_PAGED (bit 0 T6a, bit 1 T6b).
static void t6_paged(int mask)
{
    PVOID va = NULL;
    SIZE_T size = T6_PAGES * 4096u;
    if (NtAllocateVirtualMemory(&va, 0, &size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE) < 0 || !va)
    {
        emit("T6a", "SKIP", "no memory", "paged no memory");
        emit("T6b", "SKIP", "no memory", "paged no memory");
        return;
    }
    uint32_t adjacent = 0;
    for (uint32_t k = 0; k < T6_PAGES; ++k)
    {
        g_t6Page[k] = (uint8_t *)va + k * 4096u;
        g_t6Page[k][0] = 0; // committed before its address is taken
        g_t6Phys[k] = phys_of(g_t6Page[k]);
        if (k && g_t6Phys[k] == g_t6Phys[k - 1] + 4096u)
            ++adjacent;
    }

    // T6a: 16 entries in reverse page order in pbkit's own instance memory;
    // pages 1, 6/7 (a vertex straddles the boundary) and 14. Access bits as
    // pbkit's objects (0x8000), then 0 (read-write in nouveau's terms).
    int a8000 = -2, a0 = -2;
    char screen[64];
    if (mask & 1)
    {
        uint32_t freeBytes = 0;
        const uint32_t blocks = (8u + 4u * T6_PAGES + 15u) / 16u;
        const uint32_t instA = reserve_blocks(H_PAGED_A, blocks, &freeBytes);
        const uint32_t instA2 = instA ? reserve_blocks(H_PAGED_A_RW, blocks, NULL) : 0;
        static const uint32_t startsA[3] = {4096u + 4u, 7u * 4096u - 32u, 14u * 4096u + 2000u};
        if (instA)
        {
            write_paged_dma(instA << 4, 0x00008000u, T6_PAGES * 4096u - 1u, map_reversed, T6_PAGES);
            bind_at(H_PAGED_A, instA << 4);
            a8000 = paged_draw(H_PAGED_A, map_reversed, startsA);
        }
        if (instA2 && !g_gpuDead)
        {
            write_paged_dma(instA2 << 4, 0, T6_PAGES * 4096u - 1u, map_reversed, T6_PAGES);
            bind_at(H_PAGED_A_RW, instA2 << 4);
            a0 = paged_draw(H_PAGED_A_RW, map_reversed, startsA);
        }
        snprintf(screen, sizeof(screen), "paged 64K: %s (access8000 %d/4, access0 %d/4)",
                 a8000 == 4 || a0 == 4 ? "works" : "no", a8000, a0);
        emit("T6a", !instA ? "SKIP" : a8000 == 4 || a0 == 4 ? "PASS" : a8000 < 0 && a0 < 0 ? "ERR" : "FAIL", screen,
             "paged dma 16 PTEs reversed, page-straddling vertex: access8000=%d/4 access0=%d/4 (-1 GPU timeout, -2 not "
             "run) pbkitInstFree=%uB pagesAdjacent=%u/15",
             a8000, a0, freeBytes, adjacent);
    }
    else
        skip_risky("T6a", "paged 64K", 0, "PROBE_PAGED", mask);
    if (!(mask & 2) || g_gpuDead)
    {
        skip_risky("T6b", "paged 32M", mask & 2, "PROBE_PAGED", mask);
        return;
    }

    // T6b: 8,192 entries (32 MiB, all of guest RAM) in the GPU's instance
    // memory past pbkit's; the entries cycle through the 16 pages, the
    // triangles sit in pages 8000, 8190/8191 and 4100.
    char why[64] = "";
    const uint32_t entries = BLOCK_BYTES / 4096u;
    const uint32_t offB = extended_instance_memory(8u + 4u * entries, why, sizeof(why));
    if (!offB)
    {
        emit("T6b", "SKIP", why, "paged 32M not placed: %s", why);
        return;
    }
    const uint32_t access = a8000 == 4 || a0 != 4 ? 0x00008000u : 0u;
    write_paged_dma(offB, access, BLOCK_BYTES - 1u, map_scattered, entries);
    bind_at(H_PAGED_B, offB);
    static const uint32_t startsB[3] = {8000u * 4096u + 200u, 8191u * 4096u - 32u, 4100u * 4096u + 100u};
    const int b = paged_draw(H_PAGED_B, map_scattered, startsB);
    snprintf(screen, sizeof(screen), "paged 32M (8192 PTEs): %s %d/4", b == 4 ? "works" : "no", b);
    emit("T6b", b == 4 ? "PASS" : b < 0 ? "ERR" : "FAIL", screen,
         "paged dma 8192 PTEs (32 MiB) at pramin 0x%x access=0x%x: %d/4 (PASS: one page-table object can map all "
         "of a non-contiguous guest RAM)",
         (unsigned)offB, (unsigned)access, b);
}

// -------------------------------------------------------------------- T7
// Game-like frames: the frame's draws, the flip (pb_finished, as the
// renderer's finishFrame), a fence, then CPU work while the GPU draws. The
// GPU is more than one frame behind when the fence has not passed by the
// time the next frame's draws start. A short control run with more GPU work
// than CPU time must come out late, or the check proves nothing.
#define T7_CONTROL_FRAMES 5u
#define T7_SLOTS (PROBE_T7_FRAMES > T7_CONTROL_FRAMES ? PROBE_T7_FRAMES : T7_CONTROL_FRAMES)
#define T7_MAX_FILLS 800u // 19 KB of push buffer beside at most 24 meshes (394 KB)

static uint32_t time_fills(uint32_t n)
{
    uint64_t best = ~0ull;
    for (int r = 0; r < 3; ++r)
    {
        uint32_t *p = push_fills(gpu_begin(), n);
        const uint64_t t0 = rdtsc();
        if (!gpu_submit(p))
            return 0;
        const uint64_t t = rdtsc() - t0;
        if (t < best)
            best = t;
    }
    return to_us(best);
}

typedef struct
{
    uint32_t fills, meshes, late, settleMaxUs, flipWaits, p50, max;
} LagRun;

// `frames` frames of about `loadUs` of GPU work against PROBE_T7_CPU_MS of
// CPU time; 0 if the GPU stopped (every wait is bounded).
static int lag_run(uint32_t frames, uint32_t loadUs, uint32_t fillUs, LagRun *r)
{
    static uint32_t gpuUs[T7_SLOTS];
    memset(r, 0, sizeof(*r));
    // Half mesh (vertex work; at most 24 copies, which fill most of pbkit's
    // 512 KB push buffer), the rest full-screen fills.
    r->meshes = loadUs / 2u / g_meshUs;
    r->meshes = r->meshes > 24u ? 24u : r->meshes;
    const uint32_t fills = loadUs > r->meshes * g_meshUs ? (loadUs - r->meshes * g_meshUs) / fillUs : 1u;
    r->fills = fills < 1u ? 1u : fills > T7_MAX_FILLS ? T7_MAX_FILLS : fills;
    const uint64_t tick = ms_cycles(PROBE_T7_CPU_MS), limit = ms_cycles(GPU_TIMEOUT_MS);
    uint64_t kickAt = 0;
    for (uint32_t f = 0; f < frames; ++f)
    {
        if (f)
        {
            // The renderer's settleFrame: the previous frame's fence first.
            const uint64_t s0 = rdtsc();
            while (!fence_passed(g_fenceSerial) && pb_busy())
                if (rdtsc() - s0 > limit)
                {
                    g_gpuDead = 1;
                    return 0;
                }
            const uint64_t s1 = rdtsc();
            if (to_us(s1 - s0) > r->settleMaxUs)
                r->settleMaxUs = to_us(s1 - s0);
            if (!gpuUs[f - 1])
                gpuUs[f - 1] = to_us(s1 - kickAt);
        }
        uint32_t *p = gpu_begin();
        p = clear(p, 0xFF000000u);
        p = push_fills(p, r->fills);
        p = set_arrays(p, DMA_ALL_RAM, g_meshPa);
        for (uint32_t m = 0; m < r->meshes; ++m)
            p = push_mesh(p, MESH_DA_JOINED);
        kickAt = rdtsc();
        pb_end(p);
        while (pb_finished()) // only while every back buffer waits for a vblank
        {
            ++r->flipWaits;
            if (rdtsc() - kickAt > limit)
            {
                g_gpuDead = 1;
                return 0;
            }
        }
        p = pb_begin();
        p = push_fence(p, ++g_fenceSerial);
        pb_end(p);
        gpuUs[f] = 0;
        // The game's next frame of logic.
        while (rdtsc() - kickAt < tick)
            if (!gpuUs[f] && fence_passed(g_fenceSerial))
                gpuUs[f] = to_us(rdtsc() - kickAt);
        if (!gpuUs[f])
            ++r->late;
    }
    if (!wait_fence(g_fenceSerial, GPU_TIMEOUT_MS) || !gpu_wait(GPU_TIMEOUT_MS))
        return 0;
    if (!gpuUs[frames - 1])
        gpuUs[frames - 1] = to_us(rdtsc() - kickAt);
    // Median and maximum GPU time per frame (kick to fence).
    for (uint32_t i = 1; i < frames; ++i)
        for (uint32_t j = i; j && gpuUs[j - 1] > gpuUs[j]; --j)
        {
            const uint32_t t = gpuUs[j];
            gpuUs[j] = gpuUs[j - 1];
            gpuUs[j - 1] = t;
        }
    r->p50 = gpuUs[frames / 2];
    r->max = gpuUs[frames - 1];
    return 1;
}

static void t7_lag(void)
{
    if (!g_meshUs || g_fenceBad)
    {
        emit("T7", "SKIP", g_fenceBad ? "no fence" : "no T5 timing", "lag needs the fence and T5's mesh timing");
        return;
    }
    const uint32_t fillUs = (time_fills(32) + 31u) / 32u;
    if (!fillUs || g_gpuDead)
    {
        emit("T7", "ERR", "GPU stopped", "lag GPU timeout timing the fills");
        return;
    }
    LagRun run, ctl;
    const int ran = lag_run(PROBE_T7_FRAMES, PROBE_T7_GPU_MS * 1000u, fillUs, &run);
    if (!ran || !lag_run(T7_CONTROL_FRAMES, PROBE_T7_CPU_MS * 1300u, fillUs, &ctl))
    {
        emit("T7", "ERR", "GPU stopped", "lag GPU timeout in the %s run", ran ? "control" : "main");
        return;
    }
    // Late frames are the answer; none, with a control that was not late
    // either, means the check itself did not work.
    const char *verdict = run.late ? "FAIL" : ctl.late ? "PASS" : "ERR";
    char screen[64];
    snprintf(screen, sizeof(screen), "lag: late %u/%u gpu %u.%ums, control late %u/%u", run.late, PROBE_T7_FRAMES,
             run.p50 / 1000u, run.p50 / 100u % 10u, ctl.late, T7_CONTROL_FRAMES);
    emit("T7", verdict, screen,
         "lag frames=%u cpu=%ums gpuTarget=%ums gpu p50=%uus max=%uus late=%u settleMax=%uus flipWaits=%u load=%u "
         "fills(%uus each)+%u meshes | control frames=%u gpuTarget=%uus p50=%uus late=%u (late: a fence not passed "
         "when the next frame began; the control must be late)",
         PROBE_T7_FRAMES, PROBE_T7_CPU_MS, PROBE_T7_GPU_MS, run.p50, run.max, run.late, run.settleMaxUs,
         run.flipWaits, run.fills, fillUs, run.meshes, T7_CONTROL_FRAMES, PROBE_T7_CPU_MS * 1300u, ctl.p50,
         ctl.late);
}

// -------------------------------------------------------------------- T8
static void dirty(uint8_t *p, uint32_t bytes)
{
    for (uint32_t o = 0; o < bytes; o += 32u)
        *(volatile uint32_t *)(p + o) = o;
}

static void t8_wbinvd(void)
{
    static const uint32_t sizes[5] = {0, 16u << 10, 64u << 10, 128u << 10, 256u << 10};
    uint32_t best[5], worst[5];
    for (int s = 0; s < 5; ++s)
    {
        best[s] = ~0u;
        worst[s] = 0;
        for (int r = 0; r < 8; ++r)
        {
            wbinvd();
            dirty(g_cached, sizes[s]);
            const uint64_t t0 = rdtsc();
            wbinvd();
            const uint32_t ns = to_ns(rdtsc() - t0);
            best[s] = ns < best[s] ? ns : best[s];
            worst[s] = ns > worst[s] ? ns : worst[s];
        }
    }
    // What the flush costs afterwards: 64 KB of working set read back.
    uint8_t *set = g_cached + (256u << 10);
    read64k(set);
    uint64_t t0 = rdtsc();
    read64k(set);
    const uint32_t warm = to_ns(rdtsc() - t0);
    wbinvd();
    t0 = rdtsc();
    read64k(set);
    const uint32_t cold = to_ns(rdtsc() - t0);
    char screen[64];
    snprintf(screen, sizeof(screen), "wbinvd us: %u.%u clean %u.%u 128K dirty", best[0] / 1000u, best[0] / 100u % 10u,
             best[3] / 1000u, best[3] / 100u % 10u);
    emit("T8", "INFO", screen,
         "wbinvd ns best/worst: clean=%u/%u dirty16K=%u/%u dirty64K=%u/%u dirty128K=%u/%u dirty256K=%u/%u | refill64K "
         "warm=%uns cold=%uns (+%uns)",
         best[0], worst[0], best[1], worst[1], best[2], worst[2], best[3], worst[3], best[4], worst[4], warm, cold,
         cold > warm ? cold - warm : 0);
}

// -------------------------------------------------------------------- main
static void *alloc_wc(uint32_t bytes)
{
    return MmAllocateContiguousMemoryEx(bytes, 0, MAXRAM, 0, PAGE_READWRITE | PAGE_WRITECOMBINE);
}

static int write_file(void)
{
    FILE *f = fopen("D:\\nv2a_probe.txt", "w");
    if (!f)
        return 0;
    for (int i = 0; i < g_lineCount; ++i)
        fprintf(f, "%s\n", g_lines[i]);
    fclose(f);
    return 1;
}

int main(void)
{
#if PROBE_IMAGE_PAD_MB > 0
    for (uint32_t o = 0; o < sizeof(g_imagePad); o += 4096u)
        ((volatile uint8_t *)g_imagePad)[o] = 1;
#endif
    XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);
    calibrate();
    emit("T0", "INFO", "nv2a_probe started",
         "start cpu=%uMHz free=%uKB imagePad=%uMB paged=%d targets=%d t7=%ums/%ums/%u build=%s %s", g_mhz,
         free_kb(), PROBE_IMAGE_PAD_MB, PROBE_PAGED, PROBE_TARGETS, PROBE_T7_CPU_MS, PROBE_T7_GPU_MS,
         PROBE_T7_FRAMES, __DATE__, __TIME__);

    t1_allocate();
    g_t1.pbInit = pb_init();
    if (g_t1.pbInit != 0 && g_block)
    {
        // The block left pbkit short: give it back so the other tests run.
        MmFreeContiguousMemory(g_block);
        g_block = NULL;
        g_t1.pbInitAfterFree = 1;
        g_gpuOk = pb_init() == 0;
    }
    else
        g_gpuOk = g_t1.pbInit == 0;
    if (g_gpuOk)
        pb_show_debug_screen(); // the results stay on screen; tests draw into pbkit's back buffer
    redraw();

    if (g_block)
    {
        g_cached = g_block;
        g_cachedPa = g_blockPa;
    }
    else if ((g_cached = (uint8_t *)MmAllocateContiguousMemoryEx(CACHED_BYTES, 0, MAXRAM, 0, PAGE_READWRITE)) != NULL)
        g_cachedPa = phys_of(g_cached);
    g_small = (Vtx *)alloc_wc(SMALL_VERTS * VTX_STRIDE);
    g_mesh = (Vtx *)alloc_wc(MESH_VERTS * VTX_STRIDE);
    g_fence = (volatile uint32_t *)alloc_wc(64);
    if (g_gpuOk && (!g_small || !g_mesh || !g_fence || !g_cached))
        g_gpuOk = 0;
    if (g_gpuOk)
    {
        g_smallPa = phys_of(g_small);
        g_meshPa = phys_of(g_mesh);
        *g_fence = 0;
        static struct s_CtxDma fenceDma;
        pb_create_dma_ctx(H_FENCE, DMA_CLASS_3D, (DWORD)(uintptr_t)g_fence, 63, &fenceDma);
        pb_bind_channel(&fenceDma);
        build_mesh();
        Vtx *q = g_small + QUAD_FIRST;
        vtx(&q[0], 0.0f, 0.0f, FILLC);
        vtx(&q[1], 0.0f, 480.0f, FILLC);
        vtx(&q[2], 640.0f, 0.0f, FILLC);
        vtx(&q[3], 640.0f, 480.0f, FILLC);
        sfence();
        gpu_setup();
        gpu_check();
        t1_gpu_check();
    }
    t1_report();

    if (g_cached)
        t8_wbinvd();
    else
        emit("T8", "SKIP", "no cached memory", "wbinvd no cached memory");

    if (!g_gpuOk)
        emit("GPU", "SKIP", "pbkit or buffers unavailable", "gpu pb_init=%d small=%p mesh=%p fence=%p", g_t1.pbInit,
             (void *)g_small, (void *)g_mesh, (void *)g_fence);
    else
    {
        // Safe ones first; the GPU is not expected to stop in any of them.
        // Without a working readback only the timings run.
        if (!g_pixelsOk)
            emit("PIX", "SKIP", "no readback: pixel tests not run", "pixel tests T2 T3 T4 T5a-c T6 not run (GPU line)");
        if (g_pixelsOk && !g_gpuDead)
            t4_flat_shading();
        if (g_pixelsOk && !g_gpuDead)
            t5_assembly();
        if (!g_gpuDead)
            t5_costs();
        if (g_pixelsOk && !g_gpuDead)
            t3_vertex_cache();
        if (g_pixelsOk && !g_gpuDead)
            t2_snoop("T2a", "NV(pbkit)", DMA_ALL_RAM);
        if (g_pixelsOk && !g_gpuDead)
            t2_controls();
        write_file(); // the results so far kept should the console hang from here on
        if (!g_gpuDead)
            t7_lag();
        write_file();
        // The tests that could upset the GPU: T6 (the plan's fallback for T1)
        // before the memory-target experiments. Each can be left out, and the
        // file is rewritten after each, so a run that hung in one can be
        // repeated without it (README.md).
        if (g_pixelsOk && !g_gpuDead && (PROBE_PAGED & 3) != 0)
        {
            t6_paged(PROBE_PAGED);
            write_file();
        }
        else
        {
            skip_risky("T6a", "paged 64K", PROBE_PAGED & 1, "PROBE_PAGED", PROBE_PAGED);
            skip_risky("T6b", "paged 32M", PROBE_PAGED & 2, "PROBE_PAGED", PROBE_PAGED);
        }
        if (g_pixelsOk && !g_gpuDead && (PROBE_TARGETS & 1) != 0)
        {
            make_target_dma(H_PCI, 2);
            t2_snoop("T2c", "PCI", H_PCI);
            write_file();
        }
        else
            skip_risky("T2c", "snoop PCI target", PROBE_TARGETS & 1, "PROBE_TARGETS", PROBE_TARGETS);
        if (g_pixelsOk && !g_gpuDead && (PROBE_TARGETS & 2) != 0)
        {
            make_target_dma(H_AGP, 3);
            t2_snoop("T2d", "AGP", H_AGP);
        }
        else
            skip_risky("T2d", "snoop AGP target", PROBE_TARGETS & 2, "PROBE_TARGETS", PROBE_TARGETS);
        if (g_gpuDead)
            emit("GPU", "ERR", "GPU stopped responding", "gpu a wait timed out; later GPU tests not run");
    }

    const int file = write_file();
    emit("END", "INFO", file ? "results in D:\\nv2a_probe.txt" : "done (no file)", "pass=%d fail=%d skip=%d file=%s",
         g_pass, g_fail, g_skip, file ? "D:\\nv2a_probe.txt" : "none");
    // XBDM may have missed lines (start-up, a flood): the set again every 20 s.
    for (unsigned round = 1;; ++round)
    {
        Sleep(20000);
        DbgPrint("[PROBE] repeat %u lines=%d\n", round, g_lineCount);
        for (int i = 0; i < g_lineCount; ++i)
        {
            DbgPrint("%s\n", g_lines[i]);
            Sleep(40);
        }
    }
    return 0;
}
