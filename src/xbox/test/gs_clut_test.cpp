// Host test of the CPU renderer's full CLUT loads (source/PS2Recomp/
// ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp), which the Xbox renderer's
// palette identities rely on: the fixed order a full load reads its 1 KB in
// (ReadFullClut) and a deferred load (DeferClutLoad, the buffer filled only
// when read) must leave the CLUT buffer, CLD mirror and content hash that
// LoadClut's row reads leave, for every CBP whose source is contiguous, both
// 32-bit formats, over random local memory. A deferred buffer must be
// filled from local memory as it was at the load: before local memory is
// written, and before a load of part of the buffer goes over it.
//
//   clang++ -std=c++20 -O2 -DPLATFORM_XBOX=1 -I source/PS2Recomp/ps2xRuntime/include \
//       -I source/PS2Recomp/ps2xRuntime/src/lib -I source/PS2Recomp/ps2xIOP/include \
//       src/xbox/test/gs_clut_test.cpp -o gs_clut_test && ./gs_clut_test
// (PLATFORM_XBOX: LoadClut's row reads as the Xbox build has them; without
// it, its per-entry reads through the texture page cache)
#include "../../../source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_cpu_backend.cpp"
#include "../../../source/PS2Recomp/ps2xRuntime/src/lib/gs/ps2_gs_memory.cpp"

#include <cstdio>
#include <random>

namespace
{
    int failures = 0;
    void fail(const char *what, uint32_t cbp, uint32_t cpsm)
    {
        if (++failures <= 20)
            std::printf("FAIL %s: cbp %u, cpsm %u\n", what, cbp, cpsm);
    }

    GSTex0Reg fullLoad(uint32_t cbp, uint32_t cpsm, uint32_t cld, bool t8h)
    {
        GSTex0Reg t{};
        t.psm = t8h ? GS_PSM_T8H : GS_PSM_T8;
        t.cbp = cbp;
        t.cpsm = static_cast<uint8_t>(cpsm);
        t.csm = 0u;
        t.csa = 0u;
        t.cld = static_cast<uint8_t>(cld);
        return t;
    }
}

int main()
{
    std::mt19937 random(12345u);
    std::vector<uint8_t> vram(GSMem::MEMORY_SIZE);
    for (uint8_t &b : vram)
        b = static_cast<uint8_t>(random());
    GSCpuBackend reference, deferred;
    reference.Initialize(vram.data(), uint32_t(vram.size()));
    deferred.Initialize(vram.data(), uint32_t(vram.size()));

    if (!deferred.CheckFullClutOrder())
        fail("boot self-test", 0u, 0u);

    // Every contiguous CBP, both formats: row reads against the fixed order
    // and against a deferred load filled in by a state read.
    std::array<uint16_t, 512> want, got;
    std::array<uint32_t, 2> wantCbp, gotCbp;
    uint16_t fast[512];
    uint32_t loads = 0;
    for (uint32_t cbp = 0; cbp <= GSCpuBackend::kLastContiguousClutCbp; ++cbp)
        for (const uint32_t cpsm : {uint32_t(GS_PSM_CT32), uint32_t(GS_PSM_CT24)})
        {
            const uint32_t cld = 1u + (cbp + cpsm) % 3u; // 1, 2, 3: always load
            const GSTex0Reg tex0 = fullLoad(cbp, cpsm, cld, (cbp & 1u) != 0u);
            GSTexClutReg texclut{}; // (CSM1 ignores it)
            texclut.cbw = static_cast<uint8_t>(random() & 63u);
            texclut.cou = static_cast<uint8_t>(random() & 63u);
            texclut.cov = static_cast<uint16_t>(random() & 1023u);
            if (!GSCpuBackend::FullClutLoad(tex0))
                fail("FullClutLoad", cbp, cpsm);
            reference.LoadClut(tex0, texclut);
            reference.GetClutState(want, wantCbp);
            const uint64_t wantHash = reference.ClutHash();
            if (!deferred.ReadFullClut(cbp, cpsm, fast) || std::memcmp(fast, want.data(), sizeof(fast)) != 0)
                fail("fixed order", cbp, cpsm);
            if (GSCpuBackend::HashClut(fast) != wantHash)
                fail("content hash", cbp, cpsm);
            deferred.DeferClutLoad(tex0, GSCpuBackend::HashClut(fast));
            if (deferred.ClutHash() != wantHash)
                fail("deferred hash", cbp, cpsm);
            deferred.GetClutState(got, gotCbp);
            if (got != want || gotCbp != wantCbp)
                fail("deferred buffer", cbp, cpsm);
            ++loads;
        }
    if (deferred.ReadFullClut(GSCpuBackend::kLastContiguousClutCbp + 1u, GS_PSM_CT32, fast))
        fail("source past the end taken", GSCpuBackend::kLastContiguousClutCbp + 1u, GS_PSM_CT32);

    // A deferred load, then a write to its source: the buffer is the one
    // from before the write. Then a load of part of the buffer over a
    // deferred one: the part replaced, the rest the deferred load's.
    for (uint32_t i = 0; i < 2000u; ++i)
    {
        const uint32_t cbp = random() % (GSCpuBackend::kLastContiguousClutCbp + 1u);
        const uint32_t cpsm = (i & 1u) ? GS_PSM_CT24 : GS_PSM_CT32;
        const GSTex0Reg tex0 = fullLoad(cbp, cpsm, 1u, false);
        reference.TextureFlush(); // (the other backend changed memory its page cache may hold)
        reference.LoadClut(tex0, GSTexClutReg{});
        reference.GetClutState(want, wantCbp);
        deferred.ReadFullClut(cbp, cpsm, fast);
        deferred.DeferClutLoad(tex0, GSCpuBackend::HashClut(fast));
        const uint32_t x = random() % 16u, y = random() % 16u, value = random();
        switch (i % 3u)
        {
        case 0: deferred.WriteVram(GS_PSM_CT32, cbp, 1u, x, y, value); break;
        case 1: deferred.WriteVramRect(GS_PSM_CT32, cbp, 1u, x, y, 1u, 1u, &value); break;
        default:
        {
            GSContext context{};
            context.frame.fbp = cbp / 32u;
            context.frame.fbw = 1u;
            context.frame.psm = GS_PSM_CT32;
            context.scissor.x1 = 63u;
            context.scissor.y1 = 31u;
            deferred.ClearFramebuffer(context, value);
            break;
        }
        }
        deferred.GetClutState(got, gotCbp);
        if (got != want)
            fail("filled after a write to its source", cbp, cpsm);
        // Undo the write (both backends read this memory).
        for (uint8_t *b = vram.data() + size_t(cbp / 32u) * 8192u, *e = std::min(b + 3u * 8192u, vram.data() + vram.size()); b < e; ++b)
            *b = static_cast<uint8_t>(random());

        GSTex0Reg part{};
        part.psm = GS_PSM_T4;
        part.cbp = random() % 16000u;
        part.cpsm = (i & 2u) ? GS_PSM_CT16 : GS_PSM_CT32;
        part.csm = 0u;
        part.csa = static_cast<uint8_t>(random() & 31u);
        part.cld = 1u;
        const GSTex0Reg again = fullLoad(cbp, cpsm, 1u, false);
        reference.TextureFlush();
        deferred.TextureFlush();
        reference.LoadClut(again, GSTexClutReg{});
        reference.LoadClut(part, GSTexClutReg{});
        reference.GetClutState(want, wantCbp);
        deferred.ReadFullClut(cbp, cpsm, fast);
        deferred.DeferClutLoad(again, GSCpuBackend::HashClut(fast));
        deferred.LoadClut(part, GSTexClutReg{});
        deferred.GetClutState(got, gotCbp);
        if (got != want || deferred.ClutHash() != reference.ClutHash())
            fail("part loaded over a deferred load", cbp, cpsm);
    }

    std::printf("%u full loads, %u fills: %s (%d failures)\n", loads, deferred.ClutFills(), failures ? "FAILED" : "ok",
                failures);
    return failures ? 1 : 0;
}
