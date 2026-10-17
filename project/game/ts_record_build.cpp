// The records engine's descriptor builder (ts_record_desc.h; src/xbox/
// PUSH-BC-PLAN.md section 3.1; owned by C-REC). A registered chain is built
// lazily, at the first CALL the walker offers the engine: the chain is
// static from then on (partPrecalcDmaData built it; a rebuild at the same
// address registers it again, which drops the descriptor), and an audit
// compares a fresh build's fingerprint now and then.
//
// The walk reproduces what the DMA walker (ps2_memory.cpp) records for a
// CALLed chain with CHCR.TTE off: every tag's payload where it lies in main
// RAM, contiguous payloads merged, from the chain's first tag to its RET.
// What the walker would record any other way (a tag elsewhere than main
// RAM, a payload outside it, an IRQ bit, a CALL, REFE or END) is refused:
// the walker then takes the chain itself, as before.
//
// The parse reads the VIF stream those pieces make with the decoder's own
// rules (ps2_vif1_interpreter.cpp, decodeVIF1Pieces and vif1Unpack): the
// commands R1 replays, each with where its data lies. A stream R1 cannot
// replay exactly leaves the descriptor spliceable only.
#if defined(PLATFORM_XBOX)
#include "ts_record_desc.h"

#include "runtime/ps2_memory.h"

#include <cstring>

namespace
{
    constexpr uint32_t kFnvBasis = 2166136261u;
    inline uint32_t fnv(uint32_t hash, uint32_t word) { return (hash ^ word) * 16777619u; }

    // VIF opcodes (ps2_vif1_interpreter.cpp).
    enum : uint8_t
    {
        kNop = 0x00,
        kStcycl = 0x01,
        kMskpath3 = 0x06,
        kMark = 0x07,
        kFlushe = 0x10,
        kFlush = 0x11,
        kFlusha = 0x13,
        kMscal = 0x14,
        kMscalf = 0x15,
        kMscnt = 0x17,
        kStmask = 0x20,
        kStrow = 0x30,
        kStcol = 0x31,
        kMpg = 0x4A,
        kDirect = 0x50,
        kDirecthl = 0x51,
    };

    // The pieces read in order, as the decoder's reader reads them.
    struct Cursor
    {
        const Vif1Piece *pieces;
        uint32_t count, index = 0, offset = 0, left;

        void settle()
        {
            while (index < count && offset == pieces[index].second)
            {
                ++index;
                offset = 0;
            }
        }
        bool word(uint32_t &value)
        {
            if (left < 4u)
                return false;
            settle();
            uint8_t bytes[4];
            for (uint32_t i = 0; i < 4u; ++i)
            {
                settle();
                bytes[i] = pieces[index].first[offset++];
            }
            left -= 4u;
            std::memcpy(&value, bytes, sizeof(value));
            return true;
        }
        // n bytes on; where they start, and whether they lie in one piece
        // (null: fewer than n left).
        const uint8_t *span(uint32_t n, bool &contiguous)
        {
            if (n > left)
                return nullptr;
            settle();
            if (n == 0u || index >= count)
                return nullptr; // (no command has no data here)
            const uint8_t *at = pieces[index].first + offset;
            contiguous = pieces[index].second - offset >= n;
            left -= n;
            while (n != 0u)
            {
                settle();
                const uint32_t chunk = n < pieces[index].second - offset ? n : pieces[index].second - offset;
                offset += chunk;
                n -= chunk;
            }
            return at;
        }
    };

    // An UNPACK's bytes in the stream (vif1Unpack's rule) under the cycle
    // register value `cycle`.
    uint32_t unpackBytes(uint32_t cmd, uint32_t cycle)
    {
        const uint8_t opcode = (cmd >> 24) & 0x7F;
        const uint8_t num = (cmd >> 16) & 0xFF;
        const uint32_t vn = (opcode >> 2) & 0x3u;
        const uint32_t vl = opcode & 0x3u;
        const uint32_t components = vn + 1u;
        uint32_t bitsPerComponent = 32u;
        if (vl == 1u)
            bitsPerComponent = 16u;
        else if (vl == 2u)
            bitsPerComponent = 8u;
        else if (vl == 3u)
            bitsPerComponent = (vn == 3u) ? 4u : 16u;
        const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : (components * bitsPerComponent);
        const uint32_t bytesPerVector = (bitsPerVector + 7u) / 8u;
        const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
        uint32_t cl = cycle & 0xFFu;
        uint32_t wl = (cycle >> 8) & 0xFFu;
        if (cl == 0u)
            cl = 1u;
        if (wl == 0u)
            wl = 1u;
        uint32_t sourceVectorCount = writeVectorCount;
        if (cl < wl)
        {
            const uint32_t fullBlocks = writeVectorCount / wl;
            uint32_t remainder = writeVectorCount % wl;
            if (remainder > cl)
                remainder = cl;
            sourceVectorCount = fullBlocks * cl + remainder;
        }
        return (sourceVectorCount * bytesPerVector + 3u) & ~3u;
    }
}

namespace ts_record
{
    uint32_t buildDescriptor(const uint8_t *rdram, uint32_t chain, uint8_t origin, uint8_t *out)
    {
        RecDesc &desc = *reinterpret_cast<RecDesc *>(out);
        Vif1Piece *pieces = reinterpret_cast<Vif1Piece *>(out + sizeof(RecDesc));
        uint32_t pieceCount = 0, pieceBytes = 0, tags = 0;
        uint32_t hash = kFnvBasis;

        // The walk: the chain's tags to its RET.
        uint32_t tagAddr = chain;
        for (;;)
        {
            if (tagAddr > PS2_RAM_SIZE - 16u || ++tags > kMaxTags)
                return 0u;
            uint32_t lower[2];
            std::memcpy(lower, rdram + tagAddr, sizeof(lower));
            hash = fnv(fnv(hash, lower[0]), lower[1]);
            const uint32_t qwc = lower[0] & 0xFFFFu;
            const uint32_t id = (lower[0] >> 28) & 0x7u;
            const uint32_t addr = lower[1] & 0x7FFFFFFFu;
            if ((lower[0] & 0x80000000u) != 0u)
                return 0u; // IRQ: the walker may stop there (TIE)
            uint32_t dataAddr = tagAddr + 16u, next = 0;
            bool ret = false;
            switch (id)
            {
            case 1: // CNT
                next = dataAddr + qwc * 16u;
                break;
            case 2: // NEXT
                next = addr;
                break;
            case 3: // REF
            case 4: // REFS
                dataAddr = addr;
                next = tagAddr + 16u;
                break;
            case 6: // RET: back to the CALL's return address
                ret = true;
                break;
            default: // REFE, CALL, END: not a plain static chain
                return 0u;
            }
            if (qwc != 0u)
            {
                const uint32_t bytes = qwc * 16u;
                if (dataAddr >= PS2_RAM_SIZE || bytes > PS2_RAM_SIZE - dataAddr)
                    return 0u; // the walker would translate it: not reproduced here
                const uint8_t *data = rdram + dataAddr;
                if (pieceCount != 0u && pieces[pieceCount - 1u].first + pieces[pieceCount - 1u].second == data)
                    pieces[pieceCount - 1u].second += bytes;
                else
                {
                    if (pieceCount == kMaxPieces)
                        return 0u;
                    pieces[pieceCount++] = Vif1Piece(data, bytes);
                }
                pieceBytes += bytes;
            }
            if (ret)
                break;
            tagAddr = next;
        }

        // The parse: the ops R1 runs.
        RecOp *ops = reinterpret_cast<RecOp *>(pieces + pieceCount);
        uint32_t opCount = 0;
        bool replayable = true, cycleKnown = false, assumesGe = false, intSeen = false;
        uint32_t cycle = 0, finalCode = 0;
        Cursor in{pieces, pieceCount, 0u, 0u, pieceBytes};
        auto addOp = [&](uint32_t cmd, const uint8_t *data)
        {
            if (opCount == kMaxOps)
            {
                replayable = false;
                return;
            }
            ops[opCount++] = RecOp{cmd, data};
        };
        while (replayable && in.left != 0u)
        {
            uint32_t cmd;
            if (!in.word(cmd))
            {
                replayable = false; // bytes after the last command: not a command boundary
                break;
            }
            hash = fnv(hash, cmd);
            finalCode = cmd;
            intSeen = intSeen || (cmd & 0x80000000u) != 0u;
            const uint8_t opcode = (cmd >> 24) & 0x7F;
            bool contiguous = true;
            if ((opcode & 0x60u) == 0x60u)
            {
                if (!cycleKnown)
                    assumesGe = true; // sized as CL >= WL: checked when it runs
                const uint8_t *data = in.span(unpackBytes(cmd, cycleKnown ? cycle : 0u), contiguous);
                if (!data || !contiguous)
                    replayable = false; // short, or its data split between payloads
                else
                    addOp(cmd, data);
            }
            else if (opcode == kNop || opcode == kFlushe || opcode == kFlush || opcode == kFlusha)
            {
                // CODE/NUM only (finalCode)
            }
            else if (opcode <= kMark)
            {
                if (opcode == kMskpath3)
                    replayable = false; // PATH3 masking: a flush of what it held
                else
                {
                    if (opcode == kStcycl)
                    {
                        cycleKnown = true;
                        cycle = cmd & 0xFFFFu;
                    }
                    addOp(cmd, nullptr);
                }
            }
            else if (opcode == kMscal || opcode == kMscalf)
                addOp(cmd, nullptr);
            else if (opcode == kMscnt)
                replayable = false;
            else if (opcode == kStmask || opcode == kStrow || opcode == kStcol)
            {
                const uint8_t *data = in.span(opcode == kStmask ? 4u : 16u, contiguous);
                if (!data || !contiguous)
                    replayable = false;
                else
                    addOp(cmd, data);
            }
            else if (opcode == kMpg || opcode == kDirect || opcode == kDirecthl)
                replayable = false; // VU code, GIF packets (and IMAGE data after them)
            // (Any other opcode: the decoder reads nothing more for it.)
        }
        if (in.left != 0u)
            replayable = false;
        if (!replayable)
            opCount = 0; // spliced only: no ops kept

        desc.chain = chain;
        desc.fingerprint = hash;
        desc.pieceBytes = pieceBytes;
        desc.finalCode = finalCode;
        desc.pieceCount = static_cast<uint16_t>(pieceCount);
        desc.opCount = static_cast<uint16_t>(opCount);
        desc.tagCount = static_cast<uint16_t>(tags);
        desc.flags = static_cast<uint8_t>(kSpliceable | (replayable ? kReplayable : 0u) |
                                          (intSeen ? kIntSeen : 0u) | (assumesGe ? kAssumesCycleGe : 0u));
        desc.origin = origin;
        desc.bytes = static_cast<uint32_t>(sizeof(RecDesc) + pieceCount * sizeof(Vif1Piece) + opCount * sizeof(RecOp));
        desc.spare = 0u;
        return desc.bytes;
    }
}
#endif
