// The sweep's PLAYER package (xbox_sweep.h): the movement collision family.
//
// moveTestDoSlide (1.35 ms of the 4-player frame) spends its time in what
// moveTest calls: the wall test of every room the move crosses, the prop test
// of every room under it (each one a scan of the whole prop list, twice) and
// the floor search under the end point (for each room: its floor polygons and
// another two scans of the prop lists). The translated versions of those run
// one guest instruction at a time; these do the same arithmetic in host
// registers:
//
//   bgFloorBBIntersectionXZ 0x2571c8  rooms whose floor box meets a box
//   moveFindFloorHeight     0x27c578  highest floor polygon under a point
//                                     (calcfloorheight 0x27c4a8 inlined)
//   propFindFloorHeightRoom 0x2714e0  the same over the props of a room
//   moveFindFloorRoom       0x27c798  room floor + prop floors
//   moveFindFloor           0x27c9f0  every room under a circle
//   MoveTestWall            0x27cce0  a moving circle against a wall list
//                                     (DistFromWallSq 0x27cb68,
//                                     hittestMoveCircleToLine 0x209150 and
//                                     hittestMoveCircleToPoint 0x208f70 inlined)
//   propMoveTestRoom        0x270e08  a moving circle against a room's props
//                                     (hittestMoveCircleToCircle 0x2094a0 inlined)
//   bgWallBBIntersection    0x2572b0  rooms whose wall box meets a box
//   moveFindRoom            0x27c870  the room a point stands in (floor search
//                                     native, portal walk a guest call)
//
// Exactness. Every float operation is the original's, one SSE single
// operation per guest instruction in the guest's order (no reassociation, no
// contraction: the Pentium III has no FMA), with the recompiler's div.s
// (a zero divisor gives the infinity of the sign of a*0 and raises DZ) and
// sqrt.s (sqrtss). The originals call sqrtf when sqrt.s gives a NaN; every
// sqrt here is of a sum of squares or of (r-d)(r+d) with |d| <= r, so that is
// a NaN input, for which the guest sqrtf returns the same quiet NaN and sets
// no errno. Comparisons are the guest's c.lt/c.le/c.eq (false on NaN), the
// integer compares the guest's 64-bit ones on sign-extended words. Guest
// memory is read where and in the order the original reads it, and written
// with the same values in the same order (out pointers included). The
// stack slots an original can read before it writes them (the best-normal
// slots of MoveTestWall and propMoveTestRoom, the callee out-slots) are read
// from the original's own frame address, so even the "no hit" garbage it
// copies out is the same.
//
// What is not reproduced: the dead state of a returning C function (the
// caller-saved registers other than v0/f0, the FPU condition bit, the
// callee's own stack frame below the caller's sp) and, in the leaves, the
// scheduler's cycle charges (8 per call, 32 per loop back-edge). The leaves
// make no guest calls and their loops are bounded by the level's wall,
// polygon, room and prop counts (a few hundred iterations of native code,
// microseconds), so nothing can yield inside them.
//
// propMoveTestRoom keeps four guest calls (newrnd, remoteGetPivotePos,
// propCalculateWalls, MoveTestPropWalls; the last one is the prop model
// collision and can recurse into moveTest). Before each one the native puts
// the original's whole callee-visible state in place: its stack frame (the
// saved registers, the locals the original keeps there, the out-slots),
// s0-s7, fp, sp, f20-f27 as the original holds them at that call. A callee
// that unwinds to the scheduler leaves this function at once; the function
// table keeps the original under every resume address, which resumes from
// that state exactly. After a normal return the native goes on, and at its end
// puts the caller's callee-saved registers back as the original's epilogue
// does.
//
// Static data: none. No heap.
#include "xbox_sweep.h"

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <cmath>
#include <cstdint>
#include <cstring>
#include <xmmintrin.h>

namespace
{
#define SP_INL inline __attribute__((always_inline))
#define G_ARGS uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime
#define G_PASS rdram, ctx, runtime

    SP_INL uint32_t bitsOf(float f)
    {
        uint32_t b;
        std::memcpy(&b, &f, 4);
        return b;
    }
    SP_INL float floatOf(uint32_t b)
    {
        float f;
        std::memcpy(&f, &b, 4);
        return f;
    }
    SP_INL uint64_t sext(uint32_t v) { return static_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(v))); }

#define LDW(a) READ32(a)
#define LDH(a) static_cast<uint32_t>(READ16(a))
#define LDF(a) floatOf(READ32(a))
#define STW(a, v) WRITE32((a), (v))
#define STF(a, f) WRITE32((a), bitsOf(f))
#define CPW(dst, src) WRITE32((dst), READ32(src)) // a float copied by lwc1/swc1: the bits as they are

    // sqrt.s: sqrtss (the macro's sqrtf, without a library call).
    SP_INL float sqrtS(float x) { return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(x))); }

    // The recompiled div.s.
    SP_INL float divS(R5900Context *ctx, float a, float b)
    {
        if (b == 0.0f)
        {
            ctx->fcr31 |= 0x100000u;
            return copysignf(INFINITY, a * 0.0f);
        }
        return a / b;
    }

    // cvt.s.w of an unsigned word, as the game converts newrnd's result:
    // (v >> 1 | v & 1) converted and doubled when the register is negative.
    SP_INL float unsignedToFloat(uint64_t v0)
    {
        if (static_cast<int64_t>(v0) < 0)
        {
            const uint64_t v1 = sext(static_cast<uint32_t>(v0) >> 1);
            const uint64_t v = (v0 & 1u) | v1;
            const float f = static_cast<float>(static_cast<int32_t>(static_cast<uint32_t>(v)));
            return f + f;
        }
        return static_cast<float>(static_cast<int32_t>(static_cast<uint32_t>(v0)));
    }

    // Read-only constants of the executable's data.
    constexpr uint32_t kFloorFloor = 0x3AF9C0u;     // moveFindFloorHeight's start height
    constexpr uint32_t kPropFloorFloor = 0x3AF93Cu; // propFindFloorHeightRoom's
    constexpr uint32_t kFindFloorFloor = 0x3AF9CCu; // moveFindFloor's
    constexpr uint32_t kBehindWall = 0x3AF9D0u;     // DistFromWallSq behind the wall
    constexpr uint32_t kNoHitPoint = 0x3AE440u;     // hittestMoveCircleToPoint's miss
    constexpr uint32_t kPropListA = 0x1FD2F60u, kPropListB = 0x1FD3410u;

    // ---- bgFloorBBIntersectionXZ: rooms (index+1) whose floor box meets the
    // box, at most `max` of them, written to the list. The original loads the
    // room count every pass, the box's maxX once and its other sides every
    // pass (from guest memory here too, so a list that overlaps the box sees
    // what the original sees).
    SP_INL int32_t floorRoomsXZ(G_ARGS, uint32_t gp, uint32_t bb, uint32_t list, uint64_t max)
    {
        int32_t rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
        int32_t count = 0;
        if (rooms <= 0)
            return 0;
        const uint32_t base = LDW(gp - 0x5DCCu);
        const float maxX = LDF(bb + 0xCu);
        bool full = false;
        int32_t i = 0;
        for (;;)
        {
            const uint32_t rec = base + static_cast<uint32_t>(i) * 0x30u + 0x30u;
            const int32_t next = i + 1;
            if (!(maxX < LDF(rec)) && !(LDF(rec + 0xCu) < LDF(bb)) && !(LDF(bb + 0x10u) < LDF(rec + 4u)) &&
                !(LDF(bb + 0x14u) < LDF(rec + 8u)) && !(LDF(rec + 0x14u) < LDF(bb + 8u)))
            {
                STW(list + static_cast<uint32_t>(count) * 4u, static_cast<uint32_t>(next));
                ++count;
                if (sext(static_cast<uint32_t>(count)) == max)
                    full = true;
            }
            rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
            i = next;
            if (!(i < rooms) || full)
                break;
        }
        return count;
    }

    // ---- bgWallBBIntersection (0x2572b0): the same scan over the rooms'
    // wall boxes (record offsets 0x18..0x2c), all six sides tested; maxX
    // hoisted as in the original.
    void nativeBgWallBBIntersection(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t bb = GPR_U32(ctx, 4), list = GPR_U32(ctx, 5);
        const uint64_t max = GPR_U64(ctx, 6);
        int32_t rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
        int32_t count = 0;
        if (rooms > 0)
        {
            const uint32_t base = LDW(gp - 0x5DCCu);
            const float maxX = LDF(bb + 0xCu);
            bool full = false;
            int32_t i = 0;
            for (;;)
            {
                const uint32_t rec = base + static_cast<uint32_t>(i) * 0x30u + 0x30u;
                const int32_t next = i + 1;
                if (!(maxX < LDF(rec + 0x18u)) && !(LDF(rec + 0x24u) < LDF(bb)) &&
                    !(LDF(bb + 0x10u) < LDF(rec + 0x1Cu)) && !(LDF(rec + 0x28u) < LDF(bb + 4u)) &&
                    !(LDF(bb + 0x14u) < LDF(rec + 0x20u)) && !(LDF(rec + 0x2Cu) < LDF(bb + 8u)))
                {
                    STW(list + static_cast<uint32_t>(count) * 4u, static_cast<uint32_t>(next));
                    ++count;
                    if (sext(static_cast<uint32_t>(count)) == max)
                        full = true;
                }
                rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
                i = next;
                if (!(i < rooms) || full)
                    break;
            }
        }
        SET_GPR_S32(ctx, 2, count);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // The same with the box in host values and the list on the host (the
    // native callers' own boxes, which nothing can alias).
    struct Box
    {
        float minX, minY, minZ, maxX, maxY, maxZ;
    };

    SP_INL int32_t floorRoomsXZHost(G_ARGS, uint32_t gp, const Box &bb, uint32_t *list, int32_t max)
    {
        int32_t rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
        int32_t count = 0;
        if (rooms <= 0)
            return 0;
        const uint32_t base = LDW(gp - 0x5DCCu);
        int32_t i = 0;
        for (;;)
        {
            const uint32_t rec = base + static_cast<uint32_t>(i) * 0x30u + 0x30u;
            const int32_t next = i + 1;
            if (!(bb.maxX < LDF(rec)) && !(LDF(rec + 0xCu) < bb.minX) && !(bb.maxY < LDF(rec + 4u)) &&
                !(bb.maxZ < LDF(rec + 8u)) && !(LDF(rec + 0x14u) < bb.minZ))
            {
                list[count++] = static_cast<uint32_t>(next);
                if (count == max)
                    break;
            }
            rooms = static_cast<int32_t>(LDW(gp - 0x5D9Cu));
            i = next;
            if (!(i < rooms))
                break;
        }
        return count;
    }

    // ---- calcfloorheight (0x27c4a8): the height at (x, z) of the plane
    // through three points.
    SP_INL float calcFloorHeight(G_ARGS, uint32_t p0, uint32_t p1, uint32_t p2, float x, float z)
    {
        const float f9 = LDF(p0), f8 = LDF(p0 + 4u), f10 = LDF(p0 + 8u);
        float e1[3], e2[3];
        for (uint32_t k = 0; k < 3u; ++k)
        {
            const float b = LDF(p1 + 4u * k);
            e1[k] = b - LDF(p0 + 4u * k);
            e2[k] = LDF(p2 + 4u * k) - b;
        }
        float f4 = e1[1] * e2[2];
        const float f5a = e2[1] * e1[2];
        float f2 = e1[2] * e2[0];
        float f0 = e2[2] * e1[0];
        f4 = f4 - f5a;
        float f3 = e2[0] * e1[1];
        f2 = f2 - f0;
        float f1 = e1[0] * e2[1];
        f0 = f4 * f9;
        const float f5 = f2 * f8;
        f1 = f1 - f3;
        f4 = f4 * x;
        f0 = f0 + f5;
        f3 = f1 * f10;
        f1 = f1 * z;
        f0 = f0 + f3;
        f0 = f0 - f4;
        f0 = f0 - f1;
        return divS(ctx, f0, f2);
    }

    // ---- moveFindFloorHeight (0x27c578): the highest polygon of the list
    // under the point and below it (its flags 0 or sharing a bit of the
    // mask), *poly the polygon (0 for none).
    SP_INL float floorHeight(G_ARGS, uint32_t list, uint64_t mask, float px, float py, float pz, uint32_t &poly)
    {
        float best = LDF(kFloorFloor);
        uint32_t bestPoly = 0;
        uint32_t index = 0;
        uint32_t p = LDW(list);
        while (p != 0u)
        {
            const uint32_t next = index + 1u;
            const uint32_t flags = LDH(p + 4u);
            if (flags == 0u || (flags & mask) != 0u)
            {
                const uint32_t kind = LDH(p + 6u);
                if (!(kind & 0x10u) || LDF(p + 0xCu) < py)
                {
                    const uint32_t verts = LDW(p);
                    uint32_t inside = 0;
                    uint32_t prev = p + verts * 12u - 4u;
                    uint32_t above = pz <= LDF(prev + 8u) ? 1u : 0u;
                    if (verts != 0u)
                    {
                        uint32_t k = 0;
                        do
                        {
                            const uint32_t cur = p + k * 12u + 8u;
                            const float cz = LDF(cur + 8u);
                            const uint32_t a1 = pz <= cz ? 1u : 0u;
                            if (above != a1)
                            {
                                float f3 = LDF(prev + 8u);
                                const float f4 = cz - pz;
                                float f1 = LDF(cur);
                                f3 = f3 - cz;
                                float f0 = LDF(prev);
                                f0 = f0 - f1;
                                f1 = f1 - px;
                                f0 = f0 * f4;
                                f1 = f1 * f3;
                                const uint32_t v0 = f1 <= f0 ? 1u : 0u;
                                if (v0 == a1)
                                    inside = 1u - inside;
                            }
                            ++k;
                            prev = cur;
                            above = a1;
                        } while (k < verts);
                    }
                    if (inside)
                    {
                        const float h = (kind & 0x10u) ? LDF(p + 0xCu)
                                                       : calcFloorHeight(G_PASS, p + 8u, p + 0x14u, p + 0x20u, px, pz);
                        if (best < h && h < py)
                        {
                            best = h;
                            bestPoly = p;
                        }
                    }
                }
            }
            index = next;
            p = LDW(list + index * 4u);
        }
        poly = bestPoly;
        return best;
    }

    // ---- propFindFloorHeightRoom (0x2714e0): the highest floor polygon of
    // the room's collidable props (and of every floor-carrying prop of type
    // 0x100), both prop lists in turn.
    SP_INL float propFloorRoom(G_ARGS, uint32_t gp, uint64_t room, float px, float py, float pz, uint32_t &bestPoly,
                               uint32_t &bestProp)
    {
        float best = LDF(kPropFloorFloor);
        uint32_t poly = 0, prop = 0;
        for (uint32_t pass = 0; pass < 2u; ++pass)
        {
            const int32_t count = static_cast<int32_t>(LDW(pass ? gp - 0x4704u : gp - 0x4708u));
            const uint32_t list = pass ? kPropListB : kPropListA;
            for (int32_t i = 0; i < count; ++i)
            {
                const uint32_t p = LDW(list + static_cast<uint32_t>(i) * 4u);
                if (p == 0u || !(LDW(p + 0x10u) & 0x20u))
                    continue;
                if (sext(LDW(p + 0xCu)) != room && LDW(p + 8u) != 0x100u)
                    continue;
                const uint32_t floors = LDW(p + 0x1E0u);
                if (floors == 0u)
                    continue;
                uint32_t hit;
                const float h = floorHeight(G_PASS, floors, 0u, px, py, pz, hit);
                if (best < h)
                {
                    poly = hit;
                    best = h;
                    prop = p;
                }
            }
        }
        bestPoly = poly;
        bestProp = prop;
        return best;
    }

    // ---- moveFindFloorRoom (0x27c798): the room's floor polygons (with the
    // room's polygon mask) and its props' floors.
    SP_INL float floorRoom(G_ARGS, uint32_t gp, uint64_t room, float px, float py, float pz, uint32_t &poly,
                           uint32_t &prop, bool &propWins)
    {
        const uint32_t r = static_cast<uint32_t>(room);
        const uint32_t floors = LDW(LDW(gp - 0x5DC0u) + r * 0x2Cu + 8u);
        const uint32_t roomObj = LDW(LDW(gp - 0x5D90u) + (r << 2));
        const uint64_t mask = LDH(LDW(roomObj + 0x20u) + 0x124u);
        uint32_t bgPoly;
        float best = floorHeight(G_PASS, floors, mask, px, py, pz, bgPoly);
        uint32_t pPoly, pProp;
        const float h = propFloorRoom(G_PASS, gp, room, px, py, pz, pPoly, pProp);
        poly = bgPoly;
        propWins = false;
        prop = 0;
        if (best < h)
        {
            best = h;
            poly = pPoly;
            prop = pProp;
            propWins = true;
        }
        return best;
    }

    // ---- The guest entries of the floor family.

    void nativeBgFloorBBIntersectionXZ(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const int32_t n = floorRoomsXZ(G_PASS, gp, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U64(ctx, 6));
        SET_GPR_S32(ctx, 2, n);
        ctx->pc = GPR_U32(ctx, 31);
    }

    void nativeMoveFindFloorHeight(G_ARGS)
    {
        const uint32_t pos = GPR_U32(ctx, 6), out = GPR_U32(ctx, 7);
        uint32_t poly;
        const float h = floorHeight(G_PASS, GPR_U32(ctx, 4), GPR_U64(ctx, 5), LDF(pos), LDF(pos + 4u), LDF(pos + 8u), poly);
        if (out != 0u)
            STW(out, poly);
        ctx->f[0] = h;
        ctx->pc = GPR_U32(ctx, 31);
    }

    void nativePropFindFloorHeightRoom(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t pos = GPR_U32(ctx, 5), outPoly = GPR_U32(ctx, 6), outProp = GPR_U32(ctx, 7);
        uint32_t poly, prop;
        const float h = propFloorRoom(G_PASS, gp, GPR_U64(ctx, 4), LDF(pos), LDF(pos + 4u), LDF(pos + 8u), poly, prop);
        if (outPoly != 0u)
            STW(outPoly, poly);
        if (outProp != 0u)
            STW(outProp, prop);
        ctx->f[0] = h;
        ctx->pc = GPR_U32(ctx, 31);
    }

    void nativeMoveFindFloorRoom(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t pos = GPR_U32(ctx, 5), outPoly = GPR_U32(ctx, 6), outProp = GPR_U32(ctx, 7);
        uint32_t poly, prop;
        bool propWins;
        const float h = floorRoom(G_PASS, gp, GPR_U64(ctx, 4), LDF(pos), LDF(pos + 4u), LDF(pos + 8u), poly, prop, propWins);
        // The original: *outProp (prop or 0), then *outPoly.
        if (outProp != 0u)
            STW(outProp, prop);
        if (outPoly != 0u)
            STW(outPoly, poly);
        ctx->f[0] = h;
        ctx->pc = GPR_U32(ctx, 31);
    }

    void nativeMoveFindFloor(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t pos = GPR_U32(ctx, 4), outPoly = GPR_U32(ctx, 5), outProp = GPR_U32(ctx, 6);
        const float height = ctx->f[12], radius = ctx->f[13];
        float best = LDF(kFindFloorFloor);
        const float x = LDF(pos), z = LDF(pos + 8u), y = LDF(pos + 4u);
        Box bb;
        bb.maxX = x + radius;
        bb.maxZ = z + radius;
        bb.maxY = y + height;
        bb.minY = y;
        bb.minX = x - radius;
        bb.minZ = z - radius;
        uint32_t rooms[20];
        const int32_t n = floorRoomsXZHost(G_PASS, gp, bb, rooms, 20);
        const float py = LDF(pos + 4u) + height;
        const float pz = LDF(pos + 8u), px = LDF(pos);
        uint32_t bestPoly = 0, bestProp = 0;
        for (int32_t i = 0; i < n; ++i)
        {
            uint32_t poly, prop;
            bool propWins;
            const float h = floorRoom(G_PASS, gp, sext(rooms[i]), px, py, pz, poly, prop, propWins);
            if (best < h)
            {
                bestPoly = poly;
                best = h;
                bestProp = prop;
            }
        }
        if (outPoly != 0u)
            STW(outPoly, bestPoly);
        if (outProp != 0u)
            STW(outProp, bestProp);
        ctx->f[0] = bestPoly != 0u ? best : floatOf(0xBF800000u);
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- hittestMoveCircleToPoint (0x208f70): how far along the unit
    // direction (dx, dz) a circle of radius r at (px, pz) first touches the
    // point (cx, cz); out (when given) the contact normal.
    struct Slot
    {
        float x, z;
    };

    SP_INL float circleToPoint(R5900Context *ctx, float k1, float k2, float noHit, Slot *out, float px, float pz, float r,
                               float dx, float dz, float cx, float cz)
    {
        float f2 = cx - px;
        const float f18 = cz - pz;
        float f1 = f2 * dz;
        float f0 = f18 * dx;
        const float d = f0 - f1;
        if (r < d)
            return noHit;
        if (r < -d)
            return noHit;
        f1 = r - d;
        const float f3 = r + d;
        f2 = f2 * dx;
        f0 = f18 * dz;
        const float f12 = f3 * f1;
        const float s = sqrtS(f12);
        float along = f2 + f0;
        along = along - s;
        if (k1 < along)
        {
            if (along < 0.0f)
                along = 0.0f;
        }
        if (along < 0.0f)
        {
            if (out)
            {
                out->x = -dx;
                out->z = -dz;
            }
            f1 = along * along;
            const float g2 = d * d;
            float g0 = r * r;
            f1 = f1 + g2;
            g0 = g0 - k2;
            if (f1 < g0)
                return 0.0f;
            return noHit;
        }
        if (!out)
            return along;
        float n0 = s * dz;
        float n2 = -dx;
        float n1 = s * dx;
        n0 = -n0;
        n2 = d * n2;
        n1 = -n1;
        const float n3 = d * dz;
        n0 = n0 + n2;
        n1 = n1 + n3;
        const float q4 = n0 * n0;
        out->z = n0;
        const float q2 = n1 * n1;
        out->x = n1;
        const float len = sqrtS(q2 + q4);
        const float inv = divS(ctx, 1.0f, len);
        out->x = out->x * inv;
        out->z = out->z * inv;
        return along;
    }

    // ---- hittestMoveCircleToCircle (0x2094a0): the part of the move
    // (mx, mz) before the circles (px, pz, r1) and (cx, cz, r2) touch, in
    // [0, 1].
    SP_INL float circleToCircle(R5900Context *ctx, float k1, float k2, float noHit, Slot *out, float px, float pz,
                                float r1, float mx, float mz, float cx, float cz, float r2)
    {
        const float f0 = mz * mz;
        const float f1 = mx * mx;
        const float len = sqrtS(f1 + f0);
        const float inv = divS(ctx, 1.0f, len);
        const float t = circleToPoint(ctx, k1, k2, noHit, out, px, pz, r1 + r2, mx * inv, mz * inv, cx, cz);
        if (1.0f <= t)
            return 1.0f;
        if (t <= 0.0f)
            return 0.0f;
        return t * inv;
    }

    // ---- hittestMoveCircleToLine (0x209150): the part of the move (mx, mz)
    // before the circle (px, pz, r) touches the wall (x0, z0)-(x1, z1) from its
    // front: 0..1, 1 for none, 2 for a move along or away from it.
    SP_INL float circleToLine(R5900Context *ctx, float k1, float k2, float noHit, Slot *out, float px, float pz, float r,
                              float mx, float mz, float x0, float z0, float x1, float z1)
    {
        const float m0 = mz * mz;
        const float m1 = mx * mx;
        const float len = sqrtS(m1 + m0);
        if (len == 0.0f)
            return 2.0f;
        const float wx = x1 - x0;
        const float wz = z1 - z0;
        const float inv = divS(ctx, 1.0f, len);
        const float w1 = wx * wx;
        const float w0 = wz * wz;
        const float wl2 = w1 + w0;
        float t;
        if (!(0.0f < wl2))
        {
            t = circleToPoint(ctx, k1, k2, noHit, out, px, pz, r, mx * inv, mz * inv, x1, z1);
        }
        else
        {
            const float c0 = wz * mx;
            const float c1 = wx * mz;
            if (0.0f <= c0 - c1)
                return 2.0f;
            const float ax = px - x0;
            const float az = pz - z0;
            const float s0 = wz * ax;
            const float s1 = wx * az;
            if (s0 - s1 < 0.0f)
                return 1.0f;
            const float p1 = ax * wx;
            const float p0 = az * wz;
            const float proj = p1 + p0;
            if (proj < 0.0f)
                t = circleToPoint(ctx, k1, k2, noHit, out, px, pz, r, mx * inv, mz * inv, x0, z0);
            else if (wl2 < proj)
                t = circleToPoint(ctx, k1, k2, noHit, out, px, pz, r, mx * inv, mz * inv, x1, z1);
            else
            {
                const float wl = sqrtS(wl2);
                const float nwx = -wx;
                const float invw = divS(ctx, 1.0f, wl);
                const float nx = wz * invw;
                const float nz = nwx * invw;
                if (out)
                {
                    out->z = nz;
                    out->x = nx;
                }
                float e1 = px + mx;
                float e0 = pz + mz;
                const float a3 = nx * ax;
                e1 = e1 - x0;
                e0 = e0 - z0;
                const float a2 = nz * az;
                e1 = nx * e1;
                e0 = nz * e0;
                const float d0 = a3 + a2;
                const float d1 = e1 + e0;
                if (d0 == d1)
                    return 2.0f;
                if (d0 < d1)
                {
                    if (r <= d0)
                        t = len;
                    else
                    {
                        const float nr = -r;
                        if (d1 <= nr)
                            t = len;
                        else if (!(d0 <= nr))
                            return 2.0f;
                        else
                        {
                            const float nd = -d0;
                            t = nd - r;
                        }
                    }
                }
                else
                {
                    if (r <= d1)
                        t = len;
                    else
                    {
                        const float nr = -r;
                        if (d0 <= nr)
                            t = len;
                        else if (!(r <= d0))
                            return 2.0f;
                        else
                            t = d0 - r;
                    }
                }
            }
        }
        if (len <= t)
            return 1.0f;
        if (t <= 0.0f)
            return 0.0f;
        return t * inv;
    }

    // ---- DistFromWallSq (0x27cb68): the squared distance from (px, pz) to
    // the wall (the behind-the-wall constant when on its back); when it is
    // below best and out is given, out is the wall's front normal.
    SP_INL float distFromWallSq(G_ARGS, float behind, float px, float pz, uint32_t w, Slot *out, float best)
    {
        const float x0 = LDF(w + 4u), x1 = LDF(w + 0x14u), z1 = LDF(w + 0x1Cu), z0 = LDF(w + 0xCu);
        const float wx = x1 - x0;
        const float wz = z1 - z0;
        const float dz = pz - z0;
        const float dx = px - x0;
        const float nwx = -wx;
        const float s0 = wz * dx;
        const float s1 = nwx * dz;
        if (s0 + s1 < 0.0f)
            return behind;
        const float f3 = dx * wx;
        const float f1 = dz * wz;
        const float f2 = wx * wx;
        const float f0 = wz * wz;
        const float proj = f3 + f1;
        const float len2 = f2 + f0;
        float cx, cz;
        if (!(0.0f < proj))
        {
            cx = dx;
            cz = dz;
        }
        else if (len2 <= proj)
        {
            cx = dx - wx;
            cz = dz - wz;
        }
        else
        {
            const float t = divS(ctx, proj, len2);
            const float tz = t * wz;
            const float tx = t * wx;
            cz = dz - tz;
            cx = dx - tx;
        }
        const float q1 = cx * cx;
        const float q0 = cz * cz;
        const float d2 = q1 + q0;
        if (!out || !(d2 < best))
            return d2;
        const float len = sqrtS(len2);
        out->x = divS(ctx, wz, len);
        out->z = divS(ctx, nwx, len);
        return d2;
    }

    SP_INL Slot loadSlot(G_ARGS, uint32_t a) { return Slot{LDF(a), LDF(a + 4u)}; }

    // ---- MoveTestWall (0x27cce0): the moving circle (pos, radius, height,
    // move) against a null-terminated wall list: the first contact along the
    // move (*outT, its normal *outN) and the nearest wall (its distance
    // *outDist, its normal *outN2).
    void nativeMoveTestWall(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t list = GPR_U32(ctx, 4);
        const uint64_t mask = GPR_U64(ctx, 5);
        const uint32_t bb = GPR_U32(ctx, 6), pos = GPR_U32(ctx, 7), mv = GPR_U32(ctx, 8);
        const uint32_t outT = GPR_U32(ctx, 9), outN = GPR_U32(ctx, 10), outD = GPR_U32(ctx, 11);
        const uint32_t sp = GPR_U32(ctx, 29);
        const uint32_t outN2 = LDW(sp);
        const float r = ctx->f[12], h = ctx->f[13];
        const float k1 = LDF(gp - 0x7FE8u), k2 = LDF(gp - 0x7FE4u), noHit = LDF(kNoHitPoint);
        const float behind = LDF(kBehindWall);

        // The original's frame slots, as they are before it writes them.
        const uint32_t fr = sp - 0x160u;
        Slot n10 = loadSlot(G_PASS, fr + 0x10u), n20 = loadSlot(G_PASS, fr + 0x20u);
        Slot s50 = loadSlot(G_PASS, fr + 0x50u), s60 = loadSlot(G_PASS, fr + 0x60u), s70 = loadSlot(G_PASS, fr + 0x70u);

        float best = r * r;
        float bestT = 1.0f;
        uint32_t at = list;
        uint32_t w = LDW(at);
        while (w != 0u)
        {
            const uint32_t flags = LDH(w);
            if (flags == 0u || (flags & mask) != 0u)
            {
                const float wx0 = LDF(w + 4u), wx1 = LDF(w + 0x14u);
                float minX, maxX;
                if (wx0 < wx1)
                {
                    minX = wx0;
                    maxX = LDF(w + 0x14u);
                }
                else
                {
                    minX = wx1;
                    maxX = LDF(w + 4u);
                }
                const float minY = LDF(w + 8u), maxY = LDF(w + 0x10u);
                const float wz0 = LDF(w + 0xCu), wz1 = LDF(w + 0x1Cu);
                float minZ, maxZ;
                if (wz0 < wz1)
                {
                    minZ = wz0;
                    maxZ = LDF(w + 0x1Cu);
                }
                else
                {
                    minZ = wz1;
                    maxZ = LDF(w + 0xCu);
                }
                if (LDF(mv) == 0.0f && LDF(mv + 4u) == 0.0f)
                {
                    // Standing still: the wall's box against the circle's.
                    const float px = LDF(pos);
                    if (minX < px + r && px - r < maxX)
                    {
                        const float py = LDF(pos + 4u);
                        if (minY < py + h && py < maxY)
                        {
                            const float pz = LDF(pos + 8u);
                            if (minZ < pz + r && pz - r < maxZ)
                            {
                                const float d = distFromWallSq(G_PASS, behind, LDF(pos), LDF(pos + 8u), w, &s50, best);
                                if (d < best)
                                {
                                    best = d;
                                    n20 = s50;
                                }
                            }
                        }
                    }
                }
                else if (minX < LDF(bb + 0xCu) && LDF(bb) < maxX && minY < LDF(bb + 0x10u) && LDF(bb + 4u) < maxY &&
                         minZ < LDF(bb + 0x14u) && LDF(bb + 8u) < maxZ)
                {
                    const float t = circleToLine(ctx, k1, k2, noHit, &s50, LDF(pos), LDF(pos + 8u), r, LDF(mv),
                                                 LDF(mv + 4u), LDF(w + 4u), LDF(w + 0xCu), LDF(w + 0x14u), LDF(w + 0x1Cu));
                    if (1.0f < t)
                    {
                        const float d = distFromWallSq(G_PASS, behind, LDF(pos), LDF(pos + 8u), w, &s60, best);
                        if (d < best)
                        {
                            best = d;
                            n20 = s60;
                        }
                    }
                    else if (t < bestT)
                    {
                        bestT = t;
                        const float d = distFromWallSq(G_PASS, behind, LDF(pos), LDF(pos + 8u), w, &s70, best);
                        n10 = s50;
                        if (d < best)
                        {
                            best = d;
                            n20 = s70;
                        }
                    }
                }
            }
            at += 4u;
            w = LDW(at);
        }
        if (outT != 0u)
            STF(outT, bestT);
        if (outN != 0u)
        {
            STF(outN, n10.x);
            STF(outN + 4u, n10.z);
        }
        if (outD != 0u)
            STF(outD, sqrtS(best));
        if (outN2 != 0u)
        {
            STF(outN2, n20.x);
            STF(outN2 + 4u, n20.z);
        }
        SET_GPR_U64(ctx, 2, sext(outD));
        ctx->f[0] = n20.x;
        ctx->pc = GPR_U32(ctx, 31);
    }

    // ---- propMoveTestRoom (0x270e08): the moving circle against the
    // collidable props of a room (characters as circles, remote props by
    // their pivot, objects by their walls): the first contact along the move
    // (*outT, normal *outN, returned: the character's id or -1), the nearest
    // (*outDist, normal *outN2).
    struct PropState
    {
        uint64_t s0, s1, s2, s3, s4, s5, s6, s7, fp;
        float f20, f21, f22, f23, f24, f25, f26, f27;
    };

    SP_INL void putState(R5900Context *ctx, const PropState &s, uint32_t frame)
    {
        SET_GPR_U64(ctx, 16, s.s0);
        SET_GPR_U64(ctx, 17, s.s1);
        SET_GPR_U64(ctx, 18, s.s2);
        SET_GPR_U64(ctx, 19, s.s3);
        SET_GPR_U64(ctx, 20, s.s4);
        SET_GPR_U64(ctx, 21, s.s5);
        SET_GPR_U64(ctx, 22, s.s6);
        SET_GPR_U64(ctx, 23, s.s7);
        SET_GPR_U64(ctx, 30, s.fp);
        SET_GPR_U32(ctx, 29, frame);
        ctx->f[20] = s.f20;
        ctx->f[21] = s.f21;
        ctx->f[22] = s.f22;
        ctx->f[23] = s.f23;
        ctx->f[24] = s.f24;
        ctx->f[25] = s.f25;
        ctx->f[26] = s.f26;
        ctx->f[27] = s.f27;
    }

    // A guest call as the translation makes it (the dispatcher's checkpoint
    // charge included). false: the callee did not return to next (it unwound
    // to the scheduler); the state is in the context for the original.
    SP_INL bool guestCall(G_ARGS, uint32_t target, uint32_t source, uint32_t next)
    {
        SET_GPR_U32(ctx, 31, next);
        return runtime->dispatchGuestBranch(rdram, ctx, target, source, next, PS2Runtime::GuestBranchKind::DirectCall,
                                            "JAL");
    }

    // ---- moveFindRoom (0x27c870): the room a point stands in: the room
    // whose floor is highest under (x, y + height, z) among the floor boxes
    // the circle meets (native), then walked through the portals the drop
    // from the point to that floor crosses (bgPortalCrossed, a guest call,
    // until the room stops changing). Before each guest call the original's
    // frame (its saves, the start point and the drop) and s0-s4, f20, sp are
    // as the original holds them there.
    void nativeMoveFindRoom(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t sp = GPR_U32(ctx, 29);
        const uint32_t fr = sp - 0x120u;
        const uint64_t ra = GPR_U64(ctx, 31);
        const uint64_t cs0 = GPR_U64(ctx, 16), cs1 = GPR_U64(ctx, 17), cs2 = GPR_U64(ctx, 18), cs3 = GPR_U64(ctx, 19),
                       cs4 = GPR_U64(ctx, 20);
        const float cf20 = ctx->f[20];
        const uint64_t a0 = GPR_U64(ctx, 4);
        const uint32_t pos = static_cast<uint32_t>(a0);
        const float height = ctx->f[12], radius = ctx->f[13];
        const float none = LDF(0x3AF9C8u);

        const float x = LDF(pos), z = LDF(pos + 8u), y = LDF(pos + 4u);
        Box bb;
        bb.maxX = x + radius;
        bb.maxZ = z + radius;
        bb.minX = x - radius;
        bb.maxY = y + height;
        bb.minZ = z - radius;
        bb.minY = y;
        uint32_t rooms[20];
        const int32_t n = floorRoomsXZHost(G_PASS, gp, bb, rooms, 20);
        float best = none;
        uint32_t room = 0;
        for (int32_t i = 0; i < n; ++i)
        {
            uint32_t poly, prop;
            bool propWins;
            const float h = floorRoom(G_PASS, gp, sext(rooms[i]), x, bb.maxY, z, poly, prop, propWins);
            if (best < h)
            {
                room = rooms[i];
                best = h;
            }
        }
        uint64_t result = sext(room);
        if (!(best == LDF(0x3AF9C8u)) && room != 0u)
        {
            // The original's frame as it stands at the call.
            WRITE64(fr + 0xF0u, cs4);
            WRITE64(fr + 0xE0u, cs3);
            WRITE64(fr + 0xD0u, cs2);
            WRITE64(fr + 0xB0u, cs0);
            STF(fr + 0x110u, cf20);
            WRITE64(fr + 0x100u, ra);
            WRITE64(fr + 0xC0u, cs1);
            const float px = LDF(pos), py = LDF(pos + 4u), pz = LDF(pos + 8u);
            STF(fr + 0xA0u, px);
            STF(fr + 0x94u, py - best);
            STF(fr + 0x90u, px - px);
            STF(fr + 0x98u, pz - pz);
            STF(fr + 0xA4u, best);
            STF(fr + 0xA8u, pz);
            uint64_t cur = sext(room), prev = 0;
            for (;;)
            {
                SET_GPR_U32(ctx, 16, fr + 0x90u);
                SET_GPR_U32(ctx, 17, fr + 0xA0u);
                SET_GPR_U64(ctx, 18, sext(room));
                SET_GPR_U64(ctx, 19, cur);
                SET_GPR_U64(ctx, 20, a0);
                SET_GPR_U32(ctx, 29, fr);
                ctx->f[20] = best;
                SET_GPR_U32(ctx, 4, fr + 0xA0u);
                SET_GPR_U32(ctx, 5, fr + 0x90u);
                SET_GPR_U64(ctx, 6, cur);
                SET_GPR_U64(ctx, 7, prev);
                SET_GPR_U64(ctx, 8, 0u);
                if (!guestCall(G_PASS, 0x258CF0u, 0x27C9A4u, 0x27C9ACu))
                    return;
                const uint64_t v0 = GPR_U64(ctx, 2);
                prev = cur;
                cur = v0;
                if (v0 == prev)
                    break;
            }
            result = cur;
            SET_GPR_U64(ctx, 16, cs0);
            SET_GPR_U64(ctx, 17, cs1);
            SET_GPR_U64(ctx, 18, cs2);
            SET_GPR_U64(ctx, 19, cs3);
            SET_GPR_U64(ctx, 20, cs4);
            SET_GPR_U32(ctx, 29, sp);
            ctx->f[20] = cf20;
            SET_GPR_U64(ctx, 31, ra);
        }
        if (static_cast<int64_t>(result) > 0)
            STF(gp - 0x4E2Cu, best);
        SET_GPR_U64(ctx, 2, result);
        ctx->pc = static_cast<uint32_t>(ra);
    }

    void nativePropMoveTestRoom(G_ARGS)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t sp = GPR_U32(ctx, 29);
        const uint32_t fr = sp - 0x140u;
        const uint64_t ra = GPR_U64(ctx, 31);
        // The caller's callee-saved registers, which the original saves
        // (its prologue's stores, in its order) and puts back at its end.
        PropState caller;
        caller.s0 = GPR_U64(ctx, 16);
        caller.s1 = GPR_U64(ctx, 17);
        caller.s2 = GPR_U64(ctx, 18);
        caller.s3 = GPR_U64(ctx, 19);
        caller.s4 = GPR_U64(ctx, 20);
        caller.s5 = GPR_U64(ctx, 21);
        caller.s6 = GPR_U64(ctx, 22);
        caller.s7 = GPR_U64(ctx, 23);
        caller.fp = GPR_U64(ctx, 30);
        caller.f20 = ctx->f[20];
        caller.f21 = ctx->f[21];
        caller.f22 = ctx->f[22];
        caller.f23 = ctx->f[23];
        caller.f24 = ctx->f[24];
        caller.f25 = ctx->f[25];
        caller.f26 = ctx->f[26];
        caller.f27 = ctx->f[27];

        const uint64_t a0 = GPR_U64(ctx, 4), a1 = GPR_U64(ctx, 5), a2 = GPR_U64(ctx, 6), a3 = GPR_U64(ctx, 7);
        const uint64_t t0 = GPR_U64(ctx, 8);
        const uint32_t t1 = GPR_U32(ctx, 9), t2 = GPR_U32(ctx, 10), t3 = GPR_U32(ctx, 11);
        const float radius = ctx->f[12], height = ctx->f[13];

        const uint32_t playerBase = LDW(gp - 0x4DC8u);
        const uint32_t player = static_cast<uint32_t>(a0) * 0x1210u + playerBase;
        WRITE64(fr + 0xD0u, caller.s7);
        WRITE64(fr + 0xC0u, caller.s6);
        WRITE64(fr + 0xB0u, caller.s5);
        WRITE64(fr + 0xA0u, caller.s4);
        WRITE64(fr + 0x90u, caller.s3);
        WRITE64(fr + 0x70u, caller.s1);
        STF(fr + 0x130u, caller.f26);
        STF(fr + 0x128u, caller.f25);
        STF(fr + 0x120u, caller.f24);
        STF(fr + 0x118u, caller.f23);
        WRITE64(fr + 0xF0u, ra);
        WRITE64(fr + 0xE0u, caller.fp);
        WRITE64(fr + 0x80u, caller.s2);
        WRITE64(fr + 0x60u, caller.s0);
        STF(fr + 0x138u, caller.f27);
        STF(fr + 0x110u, caller.f22);
        STF(fr + 0x108u, caller.f21);
        STF(fr + 0x100u, caller.f20);
        const uint32_t flag = LDW(fr + 0x148u);
        const uint32_t own = LDW(player + 0xBCCu);
        STW(fr + 0x44u, t1);
        STW(fr + 0x58u, own);
        STW(fr + 0x48u, t2);
        STW(fr + 0x4Cu, t3);
        STW(fr + 0x54u, 0u);

        PropState s = caller;
        s.s7 = a0;
        s.s5 = a1;
        s.s4 = a2;
        s.s1 = a3;
        s.s3 = t0;
        s.s6 = sext(0xFFFFFFFFu);
        s.f24 = radius;
        s.f26 = height;
        s.f23 = radius;
        s.f25 = 1.0f;
        uint32_t list;
        if (flag != 0u)
        {
            s.fp = sext(LDW(gp - 0x4704u));
            list = kPropListB;
        }
        else
        {
            s.fp = sext(LDW(gp - 0x4708u));
            list = kPropListA;
        }
        STW(fr + 0x50u, list);
        {
            const uint32_t obj = LDW(static_cast<uint32_t>(a0) * 0x1210u + playerBase + 0x11B4u);
            if (obj != 0u)
            {
                const uint32_t f = LDW(obj + 0x10u);
                STW(fr + 0x54u, f);
                STW(obj + 0x10u, f & 0xFFFFFFDFu);
            }
        }

        const uint32_t bb = static_cast<uint32_t>(a2), pos = static_cast<uint32_t>(a3), mv = static_cast<uint32_t>(t0);
        const int32_t count = static_cast<int32_t>(static_cast<uint32_t>(s.fp));
        const float k1 = LDF(gp - 0x7FE8u), k2 = LDF(gp - 0x7FE4u), noHit = LDF(kNoHitPoint);
        bool called = false;

        if (count > 0)
        {
            s.f27 = 1.0f;
            int32_t i = 0;
            do
            {
                const uint32_t p = LDW(list + static_cast<uint32_t>(i) * 4u);
                s.s0 = sext(p);
                s.s2 = sext(static_cast<uint32_t>(i + 1));
                i = i + 1;
                if (p == 0u)
                    continue;
                const uint32_t type = LDW(p + 8u);
                bool inRoom;
                uint32_t flags;
                if (type == 0x100u || type == 4u)
                {
                    const int32_t n = static_cast<int32_t>(LDW(p + 0xB8u));
                    inRoom = false;
                    if (n > 0)
                    {
                        flags = LDW(p + 0x10u);
                        for (int32_t k = 0; k < n; ++k)
                        {
                            if (sext(LDW(p + 0x90u + static_cast<uint32_t>(k) * 4u)) == a1)
                            {
                                inRoom = true;
                                break;
                            }
                        }
                    }
                    else
                        flags = LDW(p + 0x10u);
                }
                else
                {
                    inRoom = sext(LDW(p + 0xCu)) == a1;
                    flags = LDW(p + 0x10u);
                }
                if (!(flags & 0x20u) || !inRoom)
                    continue;

                if (type == 8u)
                {
                    // A character: a circle (half the radius unless either is flagged).
                    const float py = LDF(p + 0x34u);
                    if (!(py < LDF(bb + 0x10u)))
                        continue;
                    if (!(LDF(bb + 4u) < py + s.f26))
                        continue;
                    if (own == p)
                        continue;
                    s.f22 = (LDW(own + 0x164u) != 0u || LDW(p + 0x164u) != 0u) ? 1.0f : 0.5f;
                    const float cx = LDF(p + 0x30u);
                    const float scale2 = s.f22 * s.f22;
                    const float cz = LDF(p + 0x38u);
                    float reach = s.f23 + s.f24;
                    const float px = LDF(pos), pz = LDF(pos + 8u);
                    s.f21 = px - cx;
                    s.f20 = pz - cz;
                    reach = reach * reach;
                    const float qx = s.f21 * s.f21;
                    const float qz = s.f20 * s.f20;
                    const float d2 = divS(ctx, qx + qz, scale2);
                    if (d2 < reach)
                    {
                        const float d = sqrtS(d2);
                        s.f23 = d - s.f24;
                        if (0.0f < d && !(s.f21 == 0.0f && s.f20 == 0.0f))
                        {
                            const float nz = divS(ctx, s.f20, d);
                            const float nx = divS(ctx, s.f21, d);
                            STF(fr + 0x14u, nz);
                            STF(fr + 0x10u, nx);
                        }
                        else
                        {
                            // On top of each other: a random direction.
                            called = true;
                            putState(ctx, s, fr);
                            if (!guestCall(G_PASS, 0x2B68D0u, 0x2710F8u, 0x271100u))
                                return;
                            float u = unsignedToFloat(GPR_U64(ctx, 2));
                            float g = u * floatOf(0x2F800000u);
                            g = g + g;
                            g = g - s.f27;
                            STF(fr + 0x10u, g);
                            putState(ctx, s, fr);
                            if (!guestCall(G_PASS, 0x2B68D0u, 0x27113Cu, 0x271144u))
                                return;
                            u = unsignedToFloat(GPR_U64(ctx, 2));
                            float g0 = u * floatOf(0x2F800000u);
                            float g3 = LDF(fr + 0x10u);
                            float q = g3 * g3;
                            g0 = g0 + g0;
                            g0 = g0 - s.f27;
                            const float q1 = g0 * g0;
                            q = q + q1;
                            q = divS(ctx, s.f27, q);
                            g0 = g0 * q;
                            g3 = g3 * q;
                            STF(fr + 0x14u, g0);
                            STF(fr + 0x10u, g3);
                        }
                    }
                    const float mx = LDF(mv);
                    if (mx == 0.0f && LDF(mv + 4u) == 0.0f)
                        continue;
                    const float rs = s.f24 * s.f22;
                    Slot hit = loadSlot(G_PASS, fr + 0x20u);
                    const float t = circleToCircle(ctx, k1, k2, noHit, &hit, LDF(pos), LDF(pos + 8u), rs, LDF(mv),
                                                   LDF(mv + 4u), LDF(p + 0x30u), LDF(p + 0x38u), rs);
                    STF(fr + 0x20u, hit.x);
                    STF(fr + 0x24u, hit.z);
                    if (t < s.f25)
                    {
                        s.f25 = t;
                        CPW(fr + 0u, fr + 0x20u);
                        CPW(fr + 4u, fr + 0x24u);
                        s.s6 = sext(LDW(LDW(p + 0x160u)));
                    }
                    continue;
                }

                if (LDW(p + 4u) == 0x1A9u)
                {
                    // A remote prop: a circle around its pivot.
                    const float py = LDF(p + 0x34u);
                    if (!(py < LDF(bb + 0x10u)))
                        continue;
                    if (!(LDF(bb + 4u) < py + LDF(gp - 0x7AD4u)))
                        continue;
                    called = true;
                    putState(ctx, s, fr);
                    SET_GPR_U64(ctx, 4, s.s0);
                    SET_GPR_U32(ctx, 5, fr + 0x30u);
                    if (!guestCall(G_PASS, 0x269508u, 0x271268u, 0x271270u))
                        return;
                    s.f22 = LDF(gp - 0x7AD0u);
                    const float px = LDF(pos), pz = LDF(pos + 8u);
                    float reach = s.f23 + s.f22;
                    const float cx = LDF(fr + 0x30u), cz = LDF(fr + 0x38u);
                    s.f21 = cx - px;
                    s.f20 = cz - pz;
                    reach = reach * reach;
                    const float qx = s.f21 * s.f21;
                    const float qz = s.f20 * s.f20;
                    const float d2 = qx + qz;
                    if (d2 < reach)
                    {
                        const float d = sqrtS(d2);
                        s.f23 = d - s.f22;
                        if (0.0f < d)
                        {
                            const float nz = divS(ctx, s.f20, d);
                            const float nx = divS(ctx, s.f21, d);
                            STF(fr + 0x14u, nz);
                            STF(fr + 0x10u, nx);
                        }
                        else
                        {
                            STF(fr + 0x10u, 0.0f);
                            STF(fr + 0x14u, 0.0f);
                        }
                    }
                    const float mx = LDF(mv);
                    if (mx == 0.0f && LDF(mv + 4u) == 0.0f)
                        continue;
                    Slot hit = loadSlot(G_PASS, fr + 0x20u);
                    const float px2 = LDF(pos), pz2 = LDF(pos + 8u), mz = LDF(mv + 4u);
                    const float t = circleToCircle(ctx, k1, k2, noHit, &hit, px2, pz2, s.f24, LDF(mv), mz,
                                                   LDF(fr + 0x30u), LDF(fr + 0x38u), LDF(gp - 0x7ACCu));
                    STF(fr + 0x20u, hit.x);
                    STF(fr + 0x24u, hit.z);
                    if (t < s.f25)
                    {
                        s.f25 = t;
                        s.s6 = sext(0xFFFFFFFFu);
                        CPW(fr + 0u, fr + 0x20u);
                        CPW(fr + 4u, fr + 0x24u);
                    }
                    continue;
                }

                // An object: its walls (worked out first for type 4).
                if (type == 4u)
                {
                    called = true;
                    putState(ctx, s, fr);
                    SET_GPR_U64(ctx, 4, s.s0);
                    SET_GPR_U32(ctx, 5, 1u);
                    if (!guestCall(G_PASS, 0x267338u, 0x271388u, 0x271390u))
                        return;
                }
                if (LDW(p + 0x1E4u) == 0u)
                    continue;
                called = true;
                putState(ctx, s, fr);
                SET_GPR_U64(ctx, 4, s.s7);
                SET_GPR_U64(ctx, 5, s.s0);
                SET_GPR_U64(ctx, 6, s.s4);
                SET_GPR_U64(ctx, 7, s.s1);
                ctx->f[12] = s.f24;
                ctx->f[13] = s.f26;
                SET_GPR_U64(ctx, 8, s.s3);
                SET_GPR_U32(ctx, 9, fr + 0x20u);
                SET_GPR_U32(ctx, 10, fr + 0x40u);
                if (!guestCall(G_PASS, 0x270950u, 0x2713B8u, 0x2713C0u))
                    return;
                const float t = ctx->f[0];
                if (LDF(fr + 0x40u) < s.f23)
                {
                    s.f23 = LDF(fr + 0x40u);
                    CPW(fr + 0x10u, fr + 0x20u);
                    CPW(fr + 0x14u, fr + 0x24u);
                }
                if (t < s.f25)
                {
                    s.f25 = t;
                    s.s6 = sext(0xFFFFFFFFu);
                    CPW(fr + 0u, fr + 0x20u);
                    CPW(fr + 4u, fr + 0x24u);
                }
            } while (i < count);
        }

        {
            const uint32_t obj = LDW(static_cast<uint32_t>(a0) * 0x1210u + LDW(gp - 0x4DC8u) + 0x11B4u);
            if (obj != 0u)
                STW(obj + 0x10u, LDW(fr + 0x54u));
        }
        if (t1 != 0u)
            STF(t1, s.f25);
        if (t2 != 0u)
        {
            CPW(t2, fr + 0u);
            CPW(t2 + 4u, fr + 4u);
        }
        if (t3 != 0u)
            STF(t3, s.f23);
        const uint32_t outN2 = LDW(fr + 0x140u);
        if (outN2 != 0u)
        {
            CPW(outN2, fr + 0x10u);
            CPW(outN2 + 4u, fr + 0x14u);
        }
        if (called)
        {
            putState(ctx, caller, sp);
            SET_GPR_U64(ctx, 31, ra);
        }
        SET_GPR_U64(ctx, 2, s.s6);
        ctx->f[0] = LDF(fr + 0x10u);
        ctx->pc = static_cast<uint32_t>(ra);
    }

}

void registerSweepPlayer(PS2Runtime &runtime)
{
    runtime.replaceFunction(0x2571C8u, &nativeBgFloorBBIntersectionXZ);
    runtime.replaceFunction(0x2572B0u, &nativeBgWallBBIntersection);
    runtime.replaceFunction(0x27C578u, &nativeMoveFindFloorHeight);
    runtime.replaceFunction(0x2714E0u, &nativePropFindFloorHeightRoom);
    runtime.replaceFunction(0x27C798u, &nativeMoveFindFloorRoom);
    runtime.replaceFunction(0x27C9F0u, &nativeMoveFindFloor);
    runtime.replaceFunction(0x27CCE0u, &nativeMoveTestWall);
    runtime.replaceFunction(0x270E08u, &nativePropMoveTestRoom);
    runtime.replaceFunction(0x27C870u, &nativeMoveFindRoom);
}
