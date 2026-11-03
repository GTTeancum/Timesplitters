// Sweep package PORTAL (xbox_sweep.h): doorway visibility, bgPortalTick
// (0x2586c0), once per viewport, as one native routine.
//
// bgPortalTick(viewport gp-0x4DCC) finds the rooms this viewport can see
// through doorways and the screen rectangle each doorway leaves open. Its
// translation runs it as nine guest functions calling each other through
// the dispatcher (bgPortalCalcInit, bgPortalCalcBackFace, bgPortalBackFaceTest,
// bgPortalCalcRoomDepth, bgRoomCalcClip, bgPortalCalcPos, matrixVec3Mul4,
// bgPortalCalcOutCode with libgcc's soft-double compare, bgPortalPlaneClip):
// every portal vertex costs a dozen dispatched calls, and the vertex pool
// lives in the scratchpad (0x70000000), whose every word goes through
// runtime->Load32/Store32 (memory class lookup, DMAC drain). Here it is
// plain C++: no guest calls, the camera matrix and position read once, the
// vertex pool written straight into the scratchpad's host memory.
//
// Exactness. The same steps in the same order, on the same guest memory:
// every record, list and global the translation writes is written with the
// same value (portal records gp-0x5DD0 +0x18..+0x2C, room records at
// 0x357330[view], the deepest order at 0x357340[view], the room stack
// gp-0x476C, the four frustum constants gp-0x4768..-0x475C, the pool base
// and count gp-0x4758/-0x4754, the pool vertices in the scratchpad). Every
// float operation is the translation's (the FPU_* macros, SSE single
// precision, operands in the listing's order; div.s through its zero-divisor
// rule, DZ raised in fcr31 as it would be; cvt.w.s rounding with MXCSR as
// FPU_CVT_W_S does). The w < 0 test of bgPortalCalcOutCode goes through
// libgcc fp-bit (fptodp, dpcmp against 0.0): fp-bit unpacks a float with a
// zero exponent as zero and returns 1 (not less) for NaN, so the test is
// "sign set, exponent not 0, not NaN", done on the bits. The VU0 registers
// sceVu0MulMatrix leaves (vf4-vf9, ACC) are set as it leaves them.
// Not reproduced: the callees' dead stack frames below $sp (polygon lists,
// screen points, saved registers, the soft-float scratch), caller-saved
// registers (no compiled caller reads them after a call) and the FPU
// condition bit (every bc1 follows its own c.cond).
//
// Scheduler: the translation's loops have checkpoints; this version does
// not yield. Its loops are bounded by the level's rooms and portals (a few
// hundred steps, recursion bounded by the room count through the visited
// flags and the path check) and no other thread reads these tables.
//
// Guards: the translation's polygon lists hold 20 vertex pointers, the next
// word being their count; a polygon that would outgrow one (a portal of
// more than 19 vertices, or a clip that adds too many) would have the
// original overwrite its own count. If that, an exhausted scratchpad pool
// or a runaway recursion depth would happen, the native stops and the
// original bgPortalTick runs instead from its start. Every value it reads
// before writing is set again by its own bgPortalCalcInit or earlier steps
// (rooms and portals are numbered from 1: CalcInit sets records 1..n), so it
// computes exactly what it would have computed without the partial run.
#include "xbox_sweep.h"

#if defined(PLATFORM_XBOX)
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <cmath>
#include <cstdint>
#include <cstring>

namespace
{
#define PT_INL inline __attribute__((always_inline))
#define PT_ENV(t)                            \
    uint8_t *const rdram = (t).rdram;        \
    R5900Context *const ctx = (t).ctx;       \
    PS2Runtime *const runtime = (t).runtime; \
    (void)rdram;                             \
    (void)ctx;                               \
    (void)runtime

    using GuestFunction = PS2Runtime::RecompiledFunction;

    constexpr uint32_t kTickAddress = 0x2586C0u;
    constexpr uint32_t kRoomRecordTable = 0x357330u; // per viewport: its room records (0x14 bytes each)
    constexpr uint32_t kMaxDepthTable = 0x357340u;   // per viewport: the deepest room order
    constexpr uint32_t kViewRect = 0x3299F0u;        // x0, x1, centre x, -, scale x, y0, y1, centre y, -, scale y
    constexpr uint32_t kPoolGuest = 0x70000000u;     // bgPortalCalcPos's vertex pool: the scratchpad's start
    constexpr uint32_t kPoolFirstClip = 20u;         // the clip vertices start at pool index 20
    constexpr uint32_t kPoolCapacity = 0x4000u / 20u;
    constexpr uint32_t kListCapacity = 20u;          // vertex pointers per polygon list
    constexpr uint32_t kMaxRecursion = 512u;

    GuestFunction g_originalTick = nullptr;

    // A pool vertex as the game lays it out: x, y, z, w, outcode.
    struct Vertex
    {
        float c[4];
        uint32_t code;
    };
    static_assert(sizeof(Vertex) == 20u, "pool vertex layout");

    struct Polygon
    {
        int32_t count;
        uint16_t v[kListCapacity];
    };

    struct Tick
    {
        uint8_t *rdram;
        R5900Context *ctx;
        PS2Runtime *runtime;
        uint32_t gp, vp, rooms, portals, records, stack, roomRecords, maxDepth;
        float camX, camY, camZ;
        float m[16];    // the camera matrix, column by column
        float plane[4]; // gp-0x4768 (x low), -0x4764 (x high), -0x4760 (y low), -0x475C (y high)
        Vertex *pool;
        uint32_t fcr; // fcr31 bits raised (DZ)
        uint32_t recursion;
        bool failed;
    };

    PT_INL uint32_t bitsOf(float value)
    {
        uint32_t bits;
        std::memcpy(&bits, &value, sizeof(bits));
        return bits;
    }

    PT_INL float floatOf(uint32_t bits)
    {
        float value;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    }

    // The translation's div.s.
    PT_INL float divS(float a, float b, uint32_t &fcr)
    {
        if (b == 0.0f)
        {
            fcr |= 0x100000u;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

#define RS32(addr) static_cast<int32_t>(READ32(addr))
#define RF(addr) floatOf(READ32(addr))

    // bgPortalCalcOutCode (0x257e38).
    PT_INL void outCode(Vertex &v, const float *plane)
    {
        uint32_t code = 0u;
        const uint32_t wBits = bitsOf(v.c[3]), exponent = (wBits >> 23) & 0xFFu;
        if ((wBits & 0x80000000u) != 0u && exponent != 0u && !(exponent == 0xFFu && (wBits & 0x7FFFFFu) != 0u))
            code |= 0x10u;
        const float w = v.c[3], x = v.c[0];
        if (FPU_C_OLT_S(x, FPU_MUL_S(w, plane[0])))
            code |= 4u;
        if (FPU_C_OLT_S(FPU_MUL_S(w, plane[1]), x))
            code |= 8u;
        const float y = FPU_NEG_S(v.c[1]);
        if (FPU_C_OLT_S(y, FPU_MUL_S(w, plane[2])))
            code |= 1u;
        if (FPU_C_OLT_S(FPU_MUL_S(w, plane[3]), y))
            code |= 2u;
        v.code = code;
    }

    // bgPortalBackFaceTest (0x257860): true when the portal faces away from
    // the camera as seen from `room`.
    PT_INL bool backFacing(Tick &t, int32_t room, uint32_t portal)
    {
        PT_ENV(t);
        const float dy = FPU_SUB_S(t.camY, RF(portal + 0x1Cu));
        const float dx = FPU_SUB_S(t.camX, RF(portal + 0x18u));
        const float dz = FPU_SUB_S(t.camZ, RF(portal + 0x20u));
        const float px = FPU_MUL_S(dx, RF(portal + 0x8u));
        const float py = FPU_MUL_S(dy, RF(portal + 0xCu));
        const float pz = FPU_MUL_S(dz, RF(portal + 0x10u));
        const float dot = FPU_ADD_S(FPU_ADD_S(px, py), pz);
        if (RS32(portal) == room)
            return FPU_C_OLT_S(0.0f, dot);
        return FPU_C_OLT_S(dot, 0.0f);
    }

    PT_INL int32_t otherRoom(Tick &t, uint32_t portal, int32_t room)
    {
        PT_ENV(t);
        const int32_t a = RS32(portal);
        return a == room ? RS32(portal + 4u) : a;
    }

    // bgPortalCalcBackFace (0x2578f0): from the camera's room outwards,
    // each portal facing the camera and not disabled gets +0x28 = 0.
    void backFaceWalk(Tick &t, int32_t room)
    {
        PT_ENV(t);
        if (++t.recursion > kMaxRecursion)
        {
            t.failed = true;
            return;
        }
        const uint32_t list = READ32(t.rooms + static_cast<uint32_t>(room) * 0x2Cu + 4u);
        const uint32_t visited = t.stack + static_cast<uint32_t>(room) * 4u;
        if (READ32(visited) == 0u)
        {
            const int32_t n = RS32(list);
            WRITE32(visited, 1u);
            for (int32_t k = 0; k < n; ++k)
            {
                const uint32_t p = READ32(list + 4u + static_cast<uint32_t>(k) * 4u);
                const uint32_t portal = READ32(t.portals + p * 4u);
                const uint32_t record = t.records + p * 0x30u;
                const int32_t other = otherRoom(t, portal, room);
                if (backFacing(t, room, portal) || (READ16(portal + 0x16u) & 1u) != 0u)
                    continue;
                backFaceWalk(t, other);
                if (t.failed)
                    return;
                WRITE32(record + 0x28u, 0u);
            }
        }
        --t.recursion;
    }

    // bgPortalCalcRoomDepth (0x2579f8): each room's order is the longest
    // simple path to it from the camera's room.
    void roomDepth(Tick &t, int32_t room, int32_t depth)
    {
        PT_ENV(t);
        if (++t.recursion > kMaxRecursion)
        {
            t.failed = true;
            return;
        }
        const uint32_t list = READ32(t.rooms + static_cast<uint32_t>(room) * 0x2Cu + 4u);
        const int32_t n = RS32(list);
        for (int32_t i = 0; i < depth; ++i)
        {
            if (RS32(t.stack + static_cast<uint32_t>(i) * 4u) == room)
            {
                --t.recursion;
                return;
            }
        }
        WRITE32(t.stack + static_cast<uint32_t>(depth) * 4u, static_cast<uint32_t>(room));
        const uint32_t record = t.roomRecords + static_cast<uint32_t>(room) * 0x14u;
        const int32_t current = RS32(record);
        if (current != 0 && current < depth)
        {
            WRITE32(record, static_cast<uint32_t>(depth));
            if (RS32(t.maxDepth) < depth)
                WRITE32(t.maxDepth, static_cast<uint32_t>(depth));
            for (int32_t k = 0; k < n; ++k)
            {
                const uint32_t p = READ32(list + 4u + static_cast<uint32_t>(k) * 4u);
                const uint32_t portal = READ32(t.portals + p * 4u);
                if (READ32(t.records + p * 0x30u + 0x28u) != 0u || backFacing(t, room, portal))
                    continue;
                roomDepth(t, otherRoom(t, portal, room), depth + 1);
                if (t.failed)
                    return;
            }
        }
        --t.recursion;
    }

    // bgRoomCalcClip (0x257b80): the room's screen rectangle, the union of
    // the open portals into it from rooms ordered before it (the camera's
    // room: the viewport). With none, its onward portals are closed.
    void roomClip(Tick &t, int32_t room)
    {
        PT_ENV(t);
        const uint32_t record = t.roomRecords + static_cast<uint32_t>(room) * 0x14u;
        const uint32_t list = READ32(t.rooms + static_cast<uint32_t>(room) * 0x2Cu + 4u);
        const int32_t n = RS32(list);
        uint32_t x0, y0, x1, y1;
        const int32_t depth = RS32(record);
        if (depth == 0)
        {
            x0 = READ32(kViewRect);
            x1 = READ32(kViewRect + 4u);
            y0 = READ32(kViewRect + 0x14u);
            y1 = READ32(kViewRect + 0x18u);
        }
        else
        {
            int32_t minX = 10000, minY = 10000, maxX = -1, maxY = -1;
            for (int32_t k = 0; k < n; ++k)
            {
                const uint32_t p = READ32(list + 4u + static_cast<uint32_t>(k) * 4u);
                const uint32_t portalRecord = t.records + p * 0x30u;
                const uint32_t portal = READ32(t.portals + p * 4u);
                if (READ32(portalRecord + 0x2Cu) != 0u)
                    continue;
                const int32_t other = otherRoom(t, portal, room);
                if (!(RS32(t.roomRecords + static_cast<uint32_t>(other) * 0x14u) < RS32(record)))
                    continue;
                const int32_t px0 = RS32(portalRecord + 0x18u);
                if (px0 < minX)
                    minX = px0;
                const int32_t py0 = RS32(portalRecord + 0x1Cu);
                if (py0 < minY)
                    minY = py0;
                const int32_t px1 = RS32(portalRecord + 0x20u);
                if (maxX < px1)
                    maxX = px1;
                const int32_t py1 = RS32(portalRecord + 0x24u);
                if (maxY < py1)
                    maxY = py1;
            }
            if (maxX < 0)
            {
                for (int32_t k = 0; k < n; ++k)
                {
                    const uint32_t p = READ32(list + 4u + static_cast<uint32_t>(k) * 4u);
                    const uint32_t portalRecord = t.records + p * 0x30u;
                    const uint32_t portal = READ32(t.portals + p * 4u);
                    if (READ32(portalRecord + 0x2Cu) != 0u)
                        continue;
                    const int32_t other = otherRoom(t, portal, room);
                    if (RS32(t.roomRecords + static_cast<uint32_t>(other) * 0x14u) < RS32(record))
                        continue;
                    WRITE32(portalRecord + 0x2Cu, 1u);
                }
            }
            x0 = static_cast<uint32_t>(minX);
            y0 = static_cast<uint32_t>(minY);
            x1 = static_cast<uint32_t>(maxX);
            y1 = static_cast<uint32_t>(maxY);
        }
        WRITE32(record + 4u, x0);
        WRITE32(record + 8u, y0);
        WRITE32(record + 0xCu, x1);
        WRITE32(record + 0x10u, y1);
    }

    // bgPortalPlaneClip (0x257f20): one Sutherland-Hodgman step against
    // a*v[axis] + b*w = 0. An empty input leaves the output as it was.
    void planeClip(Tick &t, const Polygon &in, Polygon &out, uint32_t axis, uint32_t bit, float a, float b,
                   uint32_t &poolCount)
    {
        if (in.count <= 0)
            return;
        out.count = 0;
        for (int32_t i = 0; i < in.count; ++i)
        {
            const Vertex &from = t.pool[in.v[i]];
            const uint32_t toIndex = in.v[i + 1];
            const Vertex &to = t.pool[toIndex];
            if (((from.code ^ to.code) & bit) != 0u)
            {
                float f3 = FPU_MUL_S(a, from.c[axis]);
                float f0 = FPU_MUL_S(a, to.c[axis]);
                const float f1 = FPU_MUL_S(from.c[3], b);
                const float f2 = FPU_MUL_S(to.c[3], b);
                f3 = FPU_ADD_S(f3, f1);
                f0 = FPU_ADD_S(f0, f2);
                f0 = FPU_SUB_S(f3, f0);
                if (poolCount >= kPoolCapacity || out.count >= static_cast<int32_t>(kListCapacity))
                {
                    t.failed = true;
                    return;
                }
                const uint32_t created = poolCount++;
                out.v[out.count++] = static_cast<uint16_t>(created);
                const float s = divS(f3, f0, t.fcr);
                Vertex &v = t.pool[created];
                for (uint32_t c = 0; c < 4u; ++c)
                    v.c[c] = FPU_ADD_S(from.c[c], FPU_MUL_S(s, FPU_SUB_S(to.c[c], from.c[c])));
                outCode(v, t.plane);
            }
            if ((to.code & bit) == 0u)
            {
                if (out.count >= static_cast<int32_t>(kListCapacity))
                {
                    t.failed = true;
                    return;
                }
                out.v[out.count++] = static_cast<uint16_t>(toIndex);
            }
        }
        if (out.count >= static_cast<int32_t>(kListCapacity))
        {
            t.failed = true;
            return;
        }
        out.v[out.count] = out.v[0];
    }

    // bgPortalCalcPos (0x258108): the screen rectangles of the room's
    // portals into rooms ordered at or after it.
    void calcPos(Tick &t, int32_t room)
    {
        PT_ENV(t);
        const uint32_t gp = t.gp;
        const uint32_t record = t.roomRecords + static_cast<uint32_t>(room) * 0x14u;
        const uint32_t list = READ32(t.rooms + static_cast<uint32_t>(room) * 0x2Cu + 4u);
        const int32_t n = RS32(list);
        if (RS32(record + 0xCu) < 0)
            return;

        // The frustum of the room's rectangle, one pixel wider each side.
        const int32_t lowX = static_cast<int32_t>(READ32(record + 4u) - 1u);
        const float centreX = FPU_CVT_S_W(RS32(kViewRect + 8u));
        const float centreY = FPU_CVT_S_W(RS32(kViewRect + 0x1Cu));
        const float scaleX = FPU_CVT_S_W(RS32(kViewRect + 0x10u));
        const float scaleY = FPU_CVT_S_W(RS32(kViewRect + 0x24u));
        t.plane[0] = divS(FPU_SUB_S(FPU_CVT_S_W(lowX), centreX), scaleX, t.fcr);
        const int32_t lowY = static_cast<int32_t>(READ32(record + 8u) - 1u);
        WRITE32(gp - 0x4768u, bitsOf(t.plane[0]));
        t.plane[2] = divS(FPU_SUB_S(FPU_CVT_S_W(lowY), centreY), scaleY, t.fcr);
        const int32_t highX = static_cast<int32_t>(READ32(record + 0xCu) + 1u);
        WRITE32(gp - 0x4760u, bitsOf(t.plane[2]));
        t.plane[1] = divS(FPU_SUB_S(FPU_CVT_S_W(highX), centreX), scaleX, t.fcr);
        const int32_t highY = static_cast<int32_t>(READ32(record + 0x10u) + 1u);
        WRITE32(gp - 0x4764u, bitsOf(t.plane[1]));
        t.plane[3] = divS(FPU_SUB_S(FPU_CVT_S_W(highY), centreY), scaleY, t.fcr);
        WRITE32(gp - 0x475Cu, bitsOf(t.plane[3]));

        Polygon A, B;
        A.count = 0;
        B.count = 0;
        std::memset(A.v, 0, sizeof(A.v));
        std::memset(B.v, 0, sizeof(B.v));
        for (int32_t k = 0; k < n; ++k)
        {
            const uint32_t p = READ32(list + 4u + static_cast<uint32_t>(k) * 4u);
            const uint32_t portal = READ32(t.portals + p * 4u);
            const uint32_t portalRecord = t.records + p * 0x30u;
            const int32_t other = otherRoom(t, portal, room);
            WRITE32(gp - 0x4758u, kPoolGuest);
            WRITE32(gp - 0x4754u, kPoolFirstClip);
            if (RS32(t.roomRecords + static_cast<uint32_t>(other) * 0x14u) < RS32(record))
                continue;

            const int32_t vertices = static_cast<int16_t>(READ16(portal + 0x14u));
            WRITE32(portalRecord + 0x1Cu, 10000u);
            WRITE32(portalRecord + 0x24u, 0xFFFFFFFFu);
            WRITE32(portalRecord + 0x18u, 10000u);
            WRITE32(portalRecord + 0x20u, 0xFFFFFFFFu);
            if (vertices >= static_cast<int32_t>(kListCapacity))
            {
                t.failed = true;
                return;
            }

            // matrixVec3Mul4 and the out-codes of the portal's corners.
            uint32_t together = 0xFFFFFFFFu;
            for (int32_t i = 0; i < vertices; ++i)
            {
                const uint32_t source = portal + 0x18u + static_cast<uint32_t>(i) * 12u;
                const float vx = RF(source), vy = RF(source + 4u), vz = RF(source + 8u);
                Vertex &v = t.pool[i];
                for (uint32_t c = 0; c < 4u; ++c)
                {
                    const float sx = FPU_MUL_S(vx, t.m[c]);
                    const float sy = FPU_MUL_S(vy, t.m[4u + c]);
                    const float sz = FPU_MUL_S(vz, t.m[8u + c]);
                    v.c[c] = FPU_ADD_S(FPU_ADD_S(FPU_ADD_S(sx, sy), sz), t.m[12u + c]);
                }
                outCode(v, t.plane);
                A.v[i] = static_cast<uint16_t>(i);
                together &= v.code;
            }
            if (vertices > 0)
                A.v[vertices] = A.v[0];
            A.count = vertices;
            if (together != 0u)
            {
                WRITE32(portalRecord + 0x2Cu, 1u);
                continue;
            }

            uint32_t poolCount = kPoolFirstClip;
            planeClip(t, A, B, 3u, 0x10u, -1.0f, 0.0f, poolCount);
            planeClip(t, B, A, 0u, 0x4u, -1.0f, t.plane[0], poolCount);
            planeClip(t, A, B, 0u, 0x8u, -1.0f, t.plane[1], poolCount);
            planeClip(t, B, A, 1u, 0x1u, 1.0f, t.plane[2], poolCount);
            planeClip(t, A, B, 1u, 0x2u, 1.0f, t.plane[3], poolCount);
            if (t.failed)
                return;
            WRITE32(gp - 0x4754u, poolCount);
            if (B.count == 0)
            {
                WRITE32(portalRecord + 0x2Cu, 1u);
                continue;
            }

            // Projected, the clipped polygon's bounding rectangle.
            int32_t x0 = 10000, y0 = 10000, x1 = -1, y1 = -1;
            for (int32_t i = 0; i < B.count; ++i)
            {
                const Vertex &v = t.pool[B.v[i]];
                const float qx = divS(v.c[0], v.c[3], t.fcr);
                const float qy = divS(v.c[1], v.c[3], t.fcr);
                const int32_t sx = FPU_CVT_W_S(FPU_ADD_S(centreX, FPU_MUL_S(scaleX, qx)));
                const int32_t sy = FPU_CVT_W_S(FPU_SUB_S(centreY, FPU_MUL_S(scaleY, qy)));
                if (sx < x0)
                    x0 = sx;
                if (sy < y0)
                    y0 = sy;
                if (x1 < sx)
                    x1 = sx;
                if (y1 < sy)
                    y1 = sy;
            }
            WRITE32(portalRecord + 0x18u, static_cast<uint32_t>(x0));
            WRITE32(portalRecord + 0x1Cu, static_cast<uint32_t>(y0));
            WRITE32(portalRecord + 0x20u, static_cast<uint32_t>(x1));
            WRITE32(portalRecord + 0x24u, static_cast<uint32_t>(y1));
            if (x1 < 0)
                continue;
            if (x1 < lowX || y1 < lowY || highX < x0 || highY < y0)
            {
                WRITE32(portalRecord + 0x2Cu, 1u);
                continue;
            }
            if (x0 < lowX)
                WRITE32(portalRecord + 0x18u, static_cast<uint32_t>(lowX));
            if (y0 < lowY)
                WRITE32(portalRecord + 0x1Cu, static_cast<uint32_t>(lowY));
            if (highX < x1)
                WRITE32(portalRecord + 0x20u, static_cast<uint32_t>(highX));
            if (highY < y1)
                WRITE32(portalRecord + 0x24u, static_cast<uint32_t>(highY));
        }
    }

    // bgPortalTick (0x2586c0).
    void sweepPortalTick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        uint8_t *const scratch = ps2GetScratchpadHostPtr();
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t vp = READ32(gp - 0x4DCCu);
        const uint32_t left = READ32(vp + 0x6E0u), right = READ32(vp + 0x6E4u);
        // sceVu0MulMatrix steps its pointers with addi (a trap within 64
        // bytes of 2 GB); the original handles such a pointer.
        if (scratch == nullptr || static_cast<int32_t>(right) > 0x7FFFFFBF)
        {
            g_originalTick(rdram, ctx, runtime);
            return;
        }

        Tick t;
        t.rdram = rdram;
        t.ctx = ctx;
        t.runtime = runtime;
        t.gp = gp;
        t.vp = vp;
        t.pool = reinterpret_cast<Vertex *>(scratch);
        t.fcr = 0u;
        t.recursion = 0u;
        t.failed = false;

        int32_t camera = RS32(vp + 0x380u);
        if (camera == 0)
            camera = RS32(vp + 0x384u);

        // sceVu0MulMatrix(m, [vp+0x6E0], [vp+0x6E4]), column by column.
        const __m128 c0 = _mm_castsi128_ps(READ128(left));
        const __m128 c1 = _mm_castsi128_ps(READ128(left + 16u));
        const __m128 c2 = _mm_castsi128_ps(READ128(left + 32u));
        const __m128 c3 = _mm_castsi128_ps(READ128(left + 48u));
        __m128 column = ctx->vu0_vf[8], result = ctx->vu0_vf[9], acc = ctx->vu0_acc;
        for (uint32_t j = 0; j < 4u; ++j)
        {
            column = _mm_castsi128_ps(READ128(right + j * 16u));
            acc = PS2_VMUL(c0, _mm_shuffle_ps(column, column, _MM_SHUFFLE(0, 0, 0, 0)));
            acc = PS2_VADD(acc, PS2_VMUL(c1, _mm_shuffle_ps(column, column, _MM_SHUFFLE(1, 1, 1, 1))));
            acc = PS2_VADD(acc, PS2_VMUL(c2, _mm_shuffle_ps(column, column, _MM_SHUFFLE(2, 2, 2, 2))));
            result = PS2_VADD(acc, PS2_VMUL(c3, _mm_shuffle_ps(column, column, _MM_SHUFFLE(3, 3, 3, 3))));
            _mm_storeu_ps(&t.m[j * 4u], result);
        }

        const uint32_t view = READ32(vp);
        t.roomRecords = READ32(kRoomRecordTable + view * 4u);
        t.maxDepth = kMaxDepthTable + view * 4u;
        t.rooms = READ32(gp - 0x5DC0u);
        t.portals = READ32(gp - 0x5DBCu);
        t.records = READ32(gp - 0x5DD0u);
        t.stack = READ32(gp - 0x476Cu);
        t.camX = RF(vp + 0x374u);
        t.camY = RF(vp + 0x378u);
        t.camZ = RF(vp + 0x37Cu);

        // bgPortalCalcInit (0x257680).
        const int32_t portalCount = RS32(gp - 0x5D98u);
        for (int32_t i = 1; i <= portalCount; ++i)
        {
            const uint32_t record = t.records + static_cast<uint32_t>(i) * 0x30u;
            WRITE32(record + 0x24u, 0xFFFFFFFFu);
            WRITE32(record + 0x28u, 1u);
            WRITE32(record + 0x18u, 0x280u);
            WRITE32(record + 0x1Cu, 0xE0u);
            WRITE32(record + 0x2Cu, 0u);
            WRITE32(record + 0x20u, 0xFFFFFFFFu);
        }
        const int32_t roomCount = RS32(gp - 0x5D9Cu);
        for (int32_t i = 1; i <= roomCount; ++i)
        {
            const uint32_t record = t.roomRecords + static_cast<uint32_t>(i) * 0x14u;
            WRITE32(record, 0xFFFFFFFFu);
            WRITE32(record + 0xCu, 0xFFFFFFFFu);
            WRITE32(t.stack + static_cast<uint32_t>(i) * 4u, 0u);
        }
        WRITE32(t.maxDepth, 0xFFFFFFFFu);

        backFaceWalk(t, camera);
        if (!t.failed)
        {
            for (int32_t i = 1; i <= roomCount; ++i)
                WRITE32(t.stack + static_cast<uint32_t>(i) * 4u, 0u);
            roomDepth(t, camera, 0);
        }

        // The rooms in order: each one's rectangle, then its portals'.
        if (!t.failed && RS32(t.maxDepth) >= 0)
        {
            for (int32_t depth = 0; !t.failed; ++depth)
            {
                for (int32_t room = 1; room <= roomCount && !t.failed; ++room)
                {
                    if (RS32(t.roomRecords + static_cast<uint32_t>(room) * 0x14u) != depth)
                        continue;
                    roomClip(t, room);
                    calcPos(t, room);
                }
                if (RS32(t.maxDepth) < depth + 1)
                    break;
            }
        }

        if (t.failed)
        {
            g_originalTick(rdram, ctx, runtime);
            return;
        }

        ctx->vu0_vf[4] = c0;
        ctx->vu0_vf[5] = c1;
        ctx->vu0_vf[6] = c2;
        ctx->vu0_vf[7] = c3;
        ctx->vu0_vf[8] = column;
        ctx->vu0_vf[9] = result;
        ctx->vu0_acc = acc;
        ctx->fcr31 |= t.fcr;
        ctx->pc = GPR_U32(ctx, 31);
    }

#undef RS32
#undef RF
} // namespace

void registerSweepPortal(PS2Runtime &runtime)
{
    if (!runtime.hasFunction(kTickAddress))
        return;
    g_originalTick = runtime.lookupFunction(kTickAddress);
    runtime.replaceFunction(kTickAddress, &sweepPortalTick);
}

#else
void registerSweepPortal(PS2Runtime &) {}
#endif
