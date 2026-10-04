// Based on Blackline Interactive implementation
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include <algorithm>
#include <cstring>

enum VIFCmd : uint8_t
{
    VIF_NOP = 0x00,
    VIF_STCYCL = 0x01,
    VIF_OFFSET = 0x02,
    VIF_BASE = 0x03,
    VIF_ITOP = 0x04,
    VIF_STMOD = 0x05,
    VIF_MSKPATH3 = 0x06,
    VIF_MARK = 0x07,
    VIF_FLUSHE = 0x10,
    VIF_FLUSH = 0x11,
    VIF_FLUSHA = 0x13,
    VIF_MSCAL = 0x14,
    VIF_MSCALF = 0x15,
    VIF_MSCNT = 0x17,
    VIF_STMASK = 0x20,
    VIF_STROW = 0x30,
    VIF_STCOL = 0x31,
    VIF_MPG = 0x4A,
    VIF_DIRECT = 0x50,
    VIF_DIRECTHL = 0x51,
};

namespace
{
    constexpr uint8_t kGifFmtImage = 2u;

    uint32_t pendingGifImageQwc(const uint8_t *data, uint32_t sizeBytes)
    {
        if (!data || sizeBytes < 16u)
            return 0u;

        uint32_t offset = 0u;
        while (offset + 16u <= sizeBytes)
        {
            uint64_t tagLo = 0u;
            std::memcpy(&tagLo, data + offset, sizeof(tagLo));
            offset += 16u;

            const uint32_t nloop = static_cast<uint32_t>(tagLo & 0x7FFFu);
            const uint8_t flg = static_cast<uint8_t>((tagLo >> 58) & 0x3u);
            uint32_t nreg = static_cast<uint32_t>((tagLo >> 60) & 0xFu);
            if (nreg == 0u)
                nreg = 16u;

            uint64_t payloadBytes = 0u;
            if (flg == 0u) // PACKED
            {
                payloadBytes = static_cast<uint64_t>(nloop) * nreg * 16ull;
            }
            else if (flg == 1u) // REGLIST, padded to a quadword
            {
                payloadBytes = static_cast<uint64_t>(nloop) * nreg * 8ull;
                payloadBytes = (payloadBytes + 15ull) & ~15ull;
            }
            else if (flg == kGifFmtImage)
            {
                payloadBytes = static_cast<uint64_t>(nloop) * 16ull;
                const uint64_t availableBytes = sizeBytes - offset;
                if (payloadBytes > availableBytes)
                {
                    return static_cast<uint32_t>((payloadBytes - availableBytes) / 16ull);
                }
            }
            else
            {
                return 0u;
            }

            if (payloadBytes > static_cast<uint64_t>(sizeBytes - offset))
                return 0u;
            offset += static_cast<uint32_t>(payloadBytes);
        }

        return 0u;
    }
}

void PS2Memory::processVIF0Data(uint32_t srcPhys, uint32_t sizeBytes)
{
    if (sizeBytes == 0u || srcPhys >= PS2_RAM_SIZE)
        return;

    const uint64_t requestedEnd = static_cast<uint64_t>(srcPhys) + static_cast<uint64_t>(sizeBytes);
    if (requestedEnd > static_cast<uint64_t>(PS2_RAM_SIZE))
        sizeBytes = PS2_RAM_SIZE - srcPhys;

    processVIF0Data(m_rdram + srcPhys, sizeBytes);
}

void PS2Memory::processVIF0Data(const uint8_t *data, uint32_t sizeBytes)
{
    if (sizeBytes == 0u)
        return;

    uint32_t pos = 0;
    while (pos + 4 <= sizeBytes)
    {
        uint32_t cmd = 0u;
        std::memcpy(&cmd, data + pos, sizeof(cmd));
        pos += 4u;

        const uint8_t opcode = static_cast<uint8_t>((cmd >> 24) & 0x7Fu);
        const uint16_t imm = static_cast<uint16_t>(cmd & 0xFFFFu);
        const uint8_t num = static_cast<uint8_t>((cmd >> 16) & 0xFFu);
        const bool irq = (cmd & 0x80000000u) != 0u;

        vif0_regs.code = cmd;
        vif0_regs.num = num;
        if (irq)
            vif0_regs.stat |= (1u << 11);

        if (opcode == VIF_NOP)
        {
            continue;
        }
        else if (opcode == VIF_STCYCL)
        {
            vif0_regs.cycle = imm;
            continue;
        }
        else if (opcode == VIF_ITOP)
        {
            vif0_regs.itops = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_STMOD)
        {
            vif0_regs.mode = imm & 3u;
            continue;
        }
        else if (opcode == VIF_MARK)
        {
            vif0_regs.mark = imm;
            vif0_regs.stat |= (1u << 6);
            continue;
        }
        else if (opcode == VIF_FLUSHE || opcode == VIF_FLUSH || opcode == VIF_FLUSHA)
        {
            continue;
        }
        else if (opcode == VIF_STMASK)
        {
            if (pos + 4u > sizeBytes)
                break;
            std::memcpy(&vif0_regs.mask, data + pos, sizeof(vif0_regs.mask));
            pos += 4u;
            continue;
        }
        else if (opcode == VIF_STROW)
        {
            if (pos + 16u > sizeBytes)
                break;
            std::memcpy(vif0_regs.row, data + pos, 16u);
            pos += 16u;
            continue;
        }
        else if (opcode == VIF_STCOL)
        {
            if (pos + 16u > sizeBytes)
                break;
            std::memcpy(vif0_regs.col, data + pos, 16u);
            pos += 16u;
            continue;
        }
        else if (opcode == VIF_MPG)
        {
            const uint32_t destAddr = static_cast<uint32_t>(imm & 0x1FFu) * 8u;
            const uint32_t instructionCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            const uint32_t mpgBytes = instructionCount * 8u;
            uint32_t copyBytes = 0u;
            if (m_vu0Code && destAddr < PS2_VU0_CODE_SIZE && mpgBytes > 0u)
            {
                copyBytes = mpgBytes;
                if (destAddr + copyBytes > PS2_VU0_CODE_SIZE)
                    copyBytes = PS2_VU0_CODE_SIZE - destAddr;
                if (pos + copyBytes <= sizeBytes)
                {
                    std::memcpy(m_vu0Code + destAddr, data + pos, copyBytes);
                    markVU0CodeModified();
                }
            }

            pos += mpgBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else if ((opcode & 0x60u) == 0x60u)
        {
            const uint8_t vn = static_cast<uint8_t>((opcode >> 2) & 0x3u);
            const uint8_t vl = static_cast<uint8_t>(opcode & 0x3u);
            const int components = static_cast<int>(vn) + 1;
            int bitsPerComponent = 32;
            switch (vl)
            {
            case 0:
                bitsPerComponent = 32;
                break;
            case 1:
                bitsPerComponent = 16;
                break;
            case 2:
                bitsPerComponent = 8;
                break;
            case 3:
                bitsPerComponent = (vn == 3u) ? 4 : 16;
                break;
            default:
                break;
            }
            const int bitsPerVector = (vl == 3u && vn == 3u) ? 16 : (components * bitsPerComponent);
            uint32_t bytesPerVector = static_cast<uint32_t>((bitsPerVector + 7) / 8);
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            uint32_t cl = vif0_regs.cycle & 0xFFu;
            uint32_t wl = (vif0_regs.cycle >> 8) & 0xFFu;
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
            uint32_t totalBytes = sourceVectorCount * bytesPerVector;
            totalBytes = (totalBytes + 3u) & ~3u;

            if (m_vu0Data && pos + totalBytes <= sizeBytes && vl == 0u)
            {
                uint32_t vuAddr = static_cast<uint32_t>(imm & 0x3FFu);
                if ((imm & 0x8000u) != 0u)
                    vuAddr = (vuAddr + (vif0_regs.tops & 0x3FFu)) & 0x3FFu;
                const uint8_t *srcBase = data + pos;
                uint32_t srcIndex = 0u;
                for (uint32_t writeIndex = 0; writeIndex < writeVectorCount; ++writeIndex)
                {
                    const uint32_t cyclePos = writeIndex % wl;
                    const bool sourceAvailable = (cl >= wl) || (cyclePos < cl);
                    uint32_t destVec = (cl >= wl) ? ((vuAddr + (writeIndex / wl) * cl + cyclePos) & 0x3FFu)
                                                  : ((vuAddr + writeIndex) & 0x3FFu);
                    const uint32_t destOff = destVec * 16u;
                    if (destOff + 16u > PS2_VU0_DATA_SIZE)
                    {
                        if (sourceAvailable && srcIndex < sourceVectorCount)
                            ++srcIndex;
                        continue;
                    }
                    if (!sourceAvailable || srcIndex >= sourceVectorCount)
                        continue;
                    const uint8_t *srcVec = srcBase + srcIndex * bytesPerVector;
                    ++srcIndex;
                    uint32_t lanes[4] = {0u, 0u, 0u, 0u};
                    std::memcpy(lanes, m_vu0Data + destOff, sizeof(lanes));
                    const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                    for (uint32_t c = 0; c < limit; ++c)
                    {
                        uint32_t scalar = 0u;
                        std::memcpy(&scalar, srcVec + c * 4u, sizeof(scalar));
                        lanes[c] = scalar;
                    }
                    _mm_storeu_si128(reinterpret_cast<__m128i *>(m_vu0Data + destOff), _mm_loadu_si128(reinterpret_cast<const __m128i *>(lanes)));
                }
            }
            pos += totalBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else
        {
            break;
        }
    }
}

void PS2Memory::processVIF1Data(uint32_t srcPhys, uint32_t sizeBytes)
{
    if (sizeBytes == 0u || srcPhys >= PS2_RAM_SIZE)
        return;

    const uint64_t requestedEnd = static_cast<uint64_t>(srcPhys) + static_cast<uint64_t>(sizeBytes);
    if (requestedEnd > static_cast<uint64_t>(PS2_RAM_SIZE))
        sizeBytes = PS2_RAM_SIZE - srcPhys;

    processVIF1Data(m_rdram + srcPhys, sizeBytes);
}

// Streaming support for callers that feed the VIF a chain in pieces (the
// Xbox's old window over a DMA chain, kept for TS_VIF_SELFCHECK in
// ps2_memory.cpp; processVIF1Pieces replaced it): with g_vif1StopOnShort
// set, a command whose data runs past the end of the buffer is left
// unprocessed, pos rewound to its header, and g_vif1LastConsumed tells the
// caller how much was taken, so the command can be completed with the next
// piece. Commands bigger than kVif1RewindLimit are processed as before
// (truncated), since no window could hold them.
uint32_t g_vif1LastConsumed = 0;
bool g_vif1StopOnShort = false;
static constexpr uint32_t kVif1RewindLimit = 256u * 1024u;

void PS2Memory::processVIF1Data(const uint8_t *data, uint32_t sizeBytes)
{
    g_vif1LastConsumed = 0;
    if (sizeBytes == 0u)
        return;

    uint32_t pos = 0;

    while (pos + 4 <= sizeBytes)
    {
        if (m_vif1PendingPath2ImageQwc != 0u)
        {
            const uint32_t availableQw = (sizeBytes - pos) / 16u;
            if (availableQw == 0u)
            {
                break;
            }

            const uint32_t chunkQw = std::min<uint32_t>(m_vif1PendingPath2ImageQwc, availableQw);
            submitGifPacket(GifPathId::Path2, data + pos, chunkQw * 16u, true, m_vif1PendingPath2DirectHl);

            pos += chunkQw * 16u;
            m_vif1PendingPath2ImageQwc -= chunkQw;
            if (m_vif1PendingPath2ImageQwc == 0u)
            {
                m_vif1PendingPath2DirectHl = false;
            }
            continue;
        }

        uint32_t cmd;
        memcpy(&cmd, data + pos, 4);
        const uint32_t cmdStart = pos;
        pos += 4;
        // Data-carrying command whose data is not all here (see above).
        auto shortData = [&](uint32_t dataBytes) {
            if (pos + dataBytes <= sizeBytes || !g_vif1StopOnShort || dataBytes > kVif1RewindLimit)
                return false;
            pos = cmdStart;
            return true;
        };

        uint8_t opcode = (cmd >> 24) & 0x7F;
        uint16_t imm = cmd & 0xFFFF;
        uint8_t num = (cmd >> 16) & 0xFF;
        const bool irq = (cmd & 0x80000000u) != 0u;

        // Track most-recent command for VIFn_CODE emulation.
        vif1_regs.code = cmd;
        vif1_regs.num = num;
        if (irq)
            vif1_regs.stat |= (1u << 11); // INT

        if (opcode == VIF_NOP)
        {
            continue;
        }
        else if (opcode == VIF_STCYCL)
        {
            vif1_regs.cycle = imm;
            continue;
        }
        else if (opcode == VIF_OFFSET)
        {
            // VIF double-buffer setup. OFFSET clears DBF and resets TOPS to BASE.
            // Do not rewrite BASE from the previous TOPS value.
            vif1_regs.ofst = imm & 0x3FFu;
            vif1_regs.tops = vif1_regs.base & 0x3FFu;
            vif1_regs.stat &= ~(1u << 7); // clear DBF
            continue;
        }
        else if (opcode == VIF_BASE)
        {
            // BASE only updates the base register. TOPS changes on OFFSET/MSCAL.
            vif1_regs.base = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_ITOP)
        {
            // ITOP VIFcode writes pending ITOPS; VU XITOP observes it after MSCAL/MSCNT.
            vif1_regs.itops = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_STMOD)
        {
            vif1_regs.mode = imm & 3u;
            continue;
        }
        else if (opcode == VIF_MSKPATH3)
        {
            // VIF command docs: MSKPATH3 uses IMMEDIATE bit 15.
            const bool wasMasked = m_path3Masked;
            m_path3Masked = (imm & 0x8000u) != 0u;
            if (wasMasked && !m_path3Masked)
                flushMaskedPath3Packets();
            continue;
        }
        else if (opcode == VIF_MARK)
        {
            vif1_regs.mark = imm;
            vif1_regs.stat |= (1u << 6); // MRK
            continue;
        }
        else if (opcode == VIF_FLUSHE || opcode == VIF_FLUSH || opcode == VIF_FLUSHA)
        {
            continue;
        }
        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF)
        {
            uint32_t startPC = (uint32_t)imm * 8u;

            const uint32_t runTop = vif1_regs.tops & 0x3FFu;
            const uint32_t runItop = vif1_regs.itops & 0x3FFu;
            vif1_regs.top = runTop;
            vif1_regs.itop = runItop;

            const bool dbf = (vif1_regs.stat & (1u << 7)) != 0u;
            if (dbf)
                vif1_regs.tops = vif1_regs.base & 0x3FFu;
            else
                vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
            vif1_regs.stat ^= (1u << 7); // toggle DBF

            if (m_vu1MscalCallback)
                m_vu1MscalCallback(startPC, runTop, runItop);
            continue;
        }
        else if (opcode == VIF_MSCNT)
        {
            const uint32_t runTop = vif1_regs.tops & 0x3FFu;
            const uint32_t runItop = vif1_regs.itops & 0x3FFu;
            vif1_regs.top = runTop;
            vif1_regs.itop = runItop;

            const bool dbf = (vif1_regs.stat & (1u << 7)) != 0u;
            if (dbf)
                vif1_regs.tops = vif1_regs.base & 0x3FFu;
            else
                vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
            vif1_regs.stat ^= (1u << 7); // toggle DBF

            if (m_vu1MscntCallback)
                m_vu1MscntCallback(runTop, runItop);
            continue;
        }
        else if (opcode == VIF_STMASK)
        {
            if (shortData(4u) || pos + 4 > sizeBytes)
                break;
            uint32_t maskValue = 0;
            std::memcpy(&maskValue, data + pos, sizeof(maskValue));
            vif1_regs.mask = maskValue;
            pos += 4;
            continue;
        }
        else if (opcode == VIF_STROW)
        {
            if (shortData(16u) || pos + 16 > sizeBytes)
                break;
            std::memcpy(vif1_regs.row, data + pos, 16);
            pos += 16;
            continue;
        }
        else if (opcode == VIF_STCOL)
        {
            if (shortData(16u) || pos + 16 > sizeBytes)
                break;
            std::memcpy(vif1_regs.col, data + pos, 16);
            pos += 16;
            continue;
        }
        else if (opcode == VIF_MPG)
        {
            uint32_t destAddr = (uint32_t)imm * 8u;
            const uint32_t instructionCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            const uint32_t mpgBytes = instructionCount * 8u;
            if (shortData(mpgBytes))
                break;
            if (m_vu1Code && destAddr < PS2_VU1_CODE_SIZE && mpgBytes > 0)
            {
                uint32_t copyBytes = mpgBytes;
                if (destAddr + copyBytes > PS2_VU1_CODE_SIZE)
                    copyBytes = PS2_VU1_CODE_SIZE - destAddr;
                if (pos + copyBytes <= sizeBytes)
                {
                    std::memcpy(m_vu1Code + destAddr, data + pos, copyBytes);
                    markVU1CodeModified();
                }
            }
            pos += mpgBytes;
            if (pos > sizeBytes)
                break;
            continue;
        }
        else if (opcode == VIF_DIRECT || opcode == VIF_DIRECTHL)
        {
            uint32_t qwCount = imm;
            if (qwCount == 0)
                qwCount = 65536;
            const uint32_t availableQw = (sizeBytes - pos) / 16u;
            const bool truncated = qwCount > availableQw;
            if (truncated && shortData(qwCount * 16u))
                break;
            if (qwCount > availableQw)
                qwCount = availableQw;

            if (qwCount > 0)
            {
                const bool directHl = (opcode == VIF_DIRECTHL);
                submitGifPacket(GifPathId::Path2, data + pos, qwCount * 16, true, directHl);

                const uint32_t pendingImageQw = pendingGifImageQwc(data + pos, qwCount * 16u);
                if (pendingImageQw != 0u)
                {
                    m_vif1PendingPath2ImageQwc = pendingImageQw;
                    m_vif1PendingPath2DirectHl = directHl;
                }
            }

            pos += qwCount * 16;
            if (truncated)
            {
                pos = sizeBytes;
                break;
            }
            continue;
        }
        else if ((opcode & 0x60) == 0x60)
        {
            uint8_t vn = (opcode >> 2) & 0x3;
            uint8_t vl = opcode & 0x3;
            const bool maskEnable = (opcode & 0x10u) != 0u;
            int components = vn + 1;
            int bitsPerComponent = 32;
            switch (vl)
            {
            case 0:
                bitsPerComponent = 32;
                break;
            case 1:
                bitsPerComponent = 16;
                break;
            case 2:
                bitsPerComponent = 8;
                break;
            case 3:
                bitsPerComponent = (vn == 3) ? 4 : 16;
                break;
            default:
                break;
            }
            int bitsPerVector = (vl == 3 && vn == 3) ? 16 : (components * bitsPerComponent);
            uint32_t bytesPerVector = (bitsPerVector + 7) / 8;
            // UNPACK semantics: NUM is 8-bit and NUM==0 means 256 vectors (writes).
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);

            // STCYCL controls write cycles for UNPACK.
            uint32_t cl = vif1_regs.cycle & 0xFFu;
            uint32_t wl = (vif1_regs.cycle >> 8) & 0xFFu;
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

            uint32_t totalBytes = sourceVectorCount * bytesPerVector;
            totalBytes = (totalBytes + 3) & ~3u;
            if (shortData(totalBytes))
                break;

            uint32_t vuAddr = (uint32_t)imm & 0x3FFu;
            if ((imm & 0x8000u) != 0u)
                vuAddr = (vuAddr + (vif1_regs.tops & 0x3FFu)) & 0x3FFu;

            const bool zeroExtend = (imm & 0x4000u) != 0u;

            if (m_vu1Data && totalBytes > 0 && pos + totalBytes <= sizeBytes)
            {
                g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
                const uint8_t *srcBase = data + pos;
                uint32_t srcIndex = 0u;
                // Fast path for the common unmasked, non-accumulating unpacks
                // where every write consumes one source vector. Produces the
                // same bytes as the general loop below.
                const bool fastUnpack = !maskEnable && (vif1_regs.mode & 3u) == 0u && cl >= wl &&
                                        sourceVectorCount == writeVectorCount &&
                                        ((vl == 0u && components >= 2) ||
                                         ((vl == 1u || vl == 2u) && components == 4));
                if (fastUnpack)
                {
                    for (uint32_t writeIndex = 0; writeIndex < writeVectorCount; ++writeIndex)
                    {
                        const uint32_t cyclePos = writeIndex % wl;
                        const uint32_t destVec = (vuAddr + (writeIndex / wl) * cl + cyclePos) & 0x3FFu;
                        uint8_t *dest = m_vu1Data + destVec * 16u;
                        const uint8_t *srcVec = srcBase + writeIndex * bytesPerVector;
                        if (vl == 0u)
                        {
                            std::memcpy(dest, srcVec, static_cast<size_t>(components) * 4u);
                        }
                        else
                        {
                            uint32_t lanes[4];
                            for (uint32_t c = 0; c < 4u; ++c)
                            {
                                if (vl == 1u)
                                {
                                    uint16_t raw;
                                    std::memcpy(&raw, srcVec + c * 2u, sizeof(raw));
                                    lanes[c] = zeroExtend ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(raw)));
                                }
                                else
                                {
                                    const uint8_t raw = srcVec[c];
                                    lanes[c] = zeroExtend ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(raw)));
                                }
                            }
                            std::memcpy(dest, lanes, sizeof(lanes));
                        }
                    }
                }
                else
                for (uint32_t writeIndex = 0; writeIndex < writeVectorCount; ++writeIndex)
                {
                    const uint32_t cyclePos = writeIndex % wl;
                    const bool sourceAvailable = (cl >= wl) || (cyclePos < cl);

                    uint32_t destVec = 0;
                    if (cl >= wl)
                    {
                        destVec = (vuAddr + (writeIndex / wl) * cl + cyclePos) & 0x3FFu;
                    }
                    else
                    {
                        destVec = (vuAddr + writeIndex) & 0x3FFu;
                    }

                    uint32_t destOff = destVec * 16u;
                    if (destOff + 16u > PS2_VU1_DATA_SIZE)
                    {
                        if (sourceAvailable && srcIndex < sourceVectorCount)
                            ++srcIndex;
                        continue;
                    }

                    uint32_t lanes[4] = {0u, 0u, 0u, 0u};
                    std::memcpy(lanes, m_vu1Data + destOff, sizeof(lanes));
                    uint32_t decompressed[4] = {lanes[0], lanes[1], lanes[2], lanes[3]};
                    bool decoded = false;

                    const uint8_t *srcVec = nullptr;
                    if (sourceAvailable && srcIndex < sourceVectorCount)
                    {
                        srcVec = srcBase + srcIndex * bytesPerVector;
                        ++srcIndex;
                        decoded = true;
                    }

                    auto extend16 = [&](uint16_t raw) -> uint32_t
                    {
                        if (zeroExtend)
                            return static_cast<uint32_t>(raw);
                        return static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(raw)));
                    };

                    auto extend8 = [&](uint8_t raw) -> uint32_t
                    {
                        if (zeroExtend)
                            return static_cast<uint32_t>(raw);
                        return static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(raw)));
                    };

                    bool handledFormat = true;
                    if (!decoded)
                    {
                        handledFormat = false;
                    }
                    else if (vl == 0u)
                    {
                        if (components == 1)
                        {
                            uint32_t scalar = 0;
                            std::memcpy(&scalar, srcVec, sizeof(scalar));
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                uint32_t scalar = 0;
                                std::memcpy(&scalar, srcVec + c * 4u, sizeof(scalar));
                                decompressed[c] = scalar;
                            }
                        }
                    }
                    else if (vl == 1u)
                    {
                        if (components == 1)
                        {
                            uint16_t raw = 0;
                            std::memcpy(&raw, srcVec, sizeof(raw));
                            const uint32_t scalar = extend16(raw);
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                uint16_t raw = 0;
                                std::memcpy(&raw, srcVec + c * 2u, sizeof(raw));
                                decompressed[c] = extend16(raw);
                            }
                        }
                    }
                    else if (vl == 2u)
                    {
                        if (components == 1)
                        {
                            const uint32_t scalar = extend8(srcVec[0]);
                            decompressed[0] = scalar;
                            decompressed[1] = scalar;
                            decompressed[2] = scalar;
                            decompressed[3] = scalar;
                        }
                        else
                        {
                            const uint32_t limit = (components > 4) ? 4u : static_cast<uint32_t>(components);
                            for (uint32_t c = 0; c < limit; ++c)
                            {
                                decompressed[c] = extend8(srcVec[c]);
                            }
                        }
                    }
                    else if (vl == 3u && vn == 3u)
                    {
                        // V4-5: packed color-like format in a single 16-bit value.
                        uint16_t packed = 0;
                        std::memcpy(&packed, srcVec, sizeof(packed));
                        decompressed[0] = packed & 0x1Fu;
                        decompressed[1] = (packed >> 5) & 0x1Fu;
                        decompressed[2] = (packed >> 10) & 0x1Fu;
                        decompressed[3] = (packed >> 15) & 0x01u;
                    }
                    else
                    {
                        handledFormat = false;
                    }

                    // Unknown compressed format fallback: preserve legacy raw-copy behavior.
                    if (!handledFormat && decoded && !maskEnable && (vif1_regs.mode == 0u || vif1_regs.mode == 3u))
                    {
                        uint32_t copyBytes = (bytesPerVector < 16u) ? bytesPerVector : 16u;
                        std::memcpy(m_vu1Data + destOff, srcVec, copyBytes);
                        continue;
                    }

                    const bool canAdd = (vl != 3u || vn != 3u);
                    const uint32_t mode = vif1_regs.mode & 3u;
                    const uint32_t colIdx = (cyclePos > 3u) ? 3u : cyclePos;
                    const uint32_t maskCycle = (cyclePos > 3u) ? 3u : cyclePos;

                    for (uint32_t field = 0u; field < 4u; ++field)
                    {
                        uint32_t maskSpec = 0u;
                        if (maskEnable)
                        {
                            const uint32_t shift = ((maskCycle * 4u) + field) * 2u;
                            maskSpec = (vif1_regs.mask >> shift) & 0x3u;
                        }

                        // In fill-write cycles with suspended source reads, treat raw-data selections as row-fill.
                        if (!decoded && maskSpec == 0u)
                            maskSpec = 1u;

                        uint32_t writeVal = lanes[field];
                        if (maskSpec == 0u)
                        {
                            if (handledFormat)
                            {
                                writeVal = decompressed[field];
                                if (canAdd && (mode == 1u || mode == 2u))
                                {
                                    writeVal = writeVal + vif1_regs.row[field];
                                    if (mode == 2u)
                                        vif1_regs.row[field] = writeVal;
                                }
                            }
                        }
                        else if (maskSpec == 1u)
                        {
                            writeVal = vif1_regs.row[field];
                        }
                        else if (maskSpec == 2u)
                        {
                            writeVal = vif1_regs.col[colIdx];
                        }
                        else
                        {
                            continue; // write-protect
                        }

                        lanes[field] = writeVal;
                    }

                    std::memcpy(m_vu1Data + destOff, lanes, sizeof(lanes));
                }
            }
            pos += totalBytes;

            if (pos > sizeBytes)
                break;
            continue;
        }
        else
        {
            continue;
        }
    }
    g_vif1LastConsumed = pos;
}

#if defined(PLATFORM_XBOX)
Vif1StreamStats g_vif1StreamStats;

namespace
{
    // The VIF1 stream of a DMA chain, read where it lies: the pieces of guest
    // memory the chain walk recorded, in order. A command or vector that runs
    // from one piece into the next is gathered.
    class Vif1PieceReader
    {
    public:
        Vif1PieceReader(const PS2Memory::Vif1Piece *pieces, size_t count)
            : m_next(pieces), m_last(pieces + count)
        {
            for (size_t i = 0; i < count; ++i)
                left += pieces[i].second;
        }

        uint32_t left = 0; // unread bytes, all pieces

        // Bytes readable in place; moves on to the next piece when this one is used up.
        uint32_t avail()
        {
            while (m_cur == m_end && m_next != m_last)
            {
                m_cur = m_next->first;
                m_end = m_cur + m_next->second;
                ++m_next;
            }
            return static_cast<uint32_t>(m_end - m_cur);
        }
        const uint8_t *here() const { return m_cur; }
        void advance(uint32_t n) // n <= avail()
        {
            m_cur += n;
            left -= n;
        }
        void read(void *destination, uint32_t n) // n <= left
        {
            uint8_t *out = static_cast<uint8_t *>(destination);
            while (n != 0u)
            {
                const uint32_t chunk = std::min(n, avail());
                std::memcpy(out, m_cur, chunk);
                out += chunk;
                advance(chunk);
                n -= chunk;
            }
        }
        void skip(uint32_t n) // n <= left
        {
            while (n != 0u)
            {
                const uint32_t chunk = std::min(n, avail());
                advance(chunk);
                n -= chunk;
            }
        }
        // n bytes (n <= left) in one place: where they lie, or gathered into buffer.
        const uint8_t *take(uint32_t n, uint8_t *buffer)
        {
            if (avail() >= n)
            {
                const uint8_t *data = m_cur;
                advance(n);
                return data;
            }
            ++g_vif1StreamStats.splits;
            read(buffer, n);
            return buffer;
        }
        uint32_t word() // left >= 4
        {
            uint8_t buffer[4];
            uint32_t value;
            std::memcpy(&value, take(4u, buffer), sizeof(value));
            return value;
        }

    private:
        const PS2Memory::Vif1Piece *m_next, *m_last;
        const uint8_t *m_cur = nullptr, *m_end = nullptr;
    };

    // Where the next UNPACK write goes: processVIF1Data's per-write
    // (vuAddr + (i / WL) * CL + i % WL) for CL >= WL, vuAddr + i for CL < WL,
    // kept as a running position.
    struct UnpackCursor
    {
        uint32_t dest;     // VU1 data quadword, before the wrap at 1024
        uint32_t cyclePos; // write within the WL cycle
        uint32_t cl, wl;

        void step()
        {
            ++dest;
            if (++cyclePos == wl)
            {
                cyclePos = 0u;
                if (cl >= wl)
                    dest += cl - wl;
            }
        }
    };

    // n source vectors of kBytes, one write each (CL >= WL): runs of up to WL
    // writes between skips, no division per vector.
    template <uint32_t kBytes, typename Write>
    inline void unpackRun(uint8_t *vu, const uint8_t *src, uint32_t n, UnpackCursor &c, Write write)
    {
        // Locals: the byte stores below could alias the cursor.
        uint32_t dest = c.dest, cyclePos = c.cyclePos;
        const uint32_t cl = c.cl, wl = c.wl;
        if (cl == wl)
        {
            // Nothing skipped: consecutive quadwords (the cycle position is
            // not needed by this UNPACK's later runs either).
            for (uint32_t i = 0; i < n; ++i, ++dest, src += kBytes)
                write(vu + (dest & 0x3FFu) * 16u, src);
            c.dest = dest;
            return;
        }
        while (n != 0u)
        {
            const uint32_t run = std::min(n, wl - cyclePos);
            for (uint32_t i = 0; i < run; ++i, ++dest, src += kBytes)
                write(vu + (dest & 0x3FFu) * 16u, src);
            n -= run;
            cyclePos += run;
            if (cyclePos == wl)
            {
                cyclePos = 0u;
                dest += cl - wl;
            }
        }
        c.dest = dest;
        c.cyclePos = cyclePos;
    }

    inline uint32_t loadU32(const uint8_t *p)
    {
        uint32_t value;
        std::memcpy(&value, p, sizeof(value));
        return value;
    }
    inline uint16_t loadU16(const uint8_t *p)
    {
        uint16_t value;
        std::memcpy(&value, p, sizeof(value));
        return value;
    }
    template <bool kZero>
    inline uint32_t extend16(uint16_t raw)
    {
        return kZero ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(raw)));
    }
    template <bool kZero>
    inline uint32_t extend8(uint8_t raw)
    {
        return kZero ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(raw)));
    }
    // The first kLanes lanes of a quadword; the others keep their contents.
    template <uint32_t kLanes>
    inline void storeLanes(uint8_t *dest, uint32_t x, uint32_t y, uint32_t z, uint32_t w)
    {
        const uint32_t lanes[4] = {x, y, z, w};
        std::memcpy(dest, lanes, kLanes * 4u);
    }

    // Unmasked UNPACK in mode 0 with CL >= WL, one loop per format: the bytes
    // processVIF1Data writes (S formats fill all four lanes, V2/V3 leave the
    // rest as they were).
    template <bool kZero>
    void unpackFast(uint8_t *vu, const uint8_t *src, uint32_t n, UnpackCursor &c, uint32_t format)
    {
        switch (format)
        {
        case 0x0: // S-32
            unpackRun<4>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                const uint32_t v = loadU32(s);
                storeLanes<4>(d, v, v, v, v); });
            break;
        case 0x4: // V2-32
            unpackRun<8>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) { std::memcpy(d, s, 8u); });
            break;
        case 0x8: // V3-32
            unpackRun<12>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) { std::memcpy(d, s, 12u); });
            break;
        case 0xC: // V4-32
            unpackRun<16>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) { std::memcpy(d, s, 16u); });
            break;
        case 0x1: // S-16
            unpackRun<2>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                const uint32_t v = extend16<kZero>(loadU16(s));
                storeLanes<4>(d, v, v, v, v); });
            break;
        case 0x5: // V2-16
            unpackRun<4>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<2>(d, extend16<kZero>(loadU16(s)), extend16<kZero>(loadU16(s + 2)), 0u, 0u); });
            break;
        case 0x9: // V3-16
            unpackRun<6>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<3>(d, extend16<kZero>(loadU16(s)), extend16<kZero>(loadU16(s + 2)),
                              extend16<kZero>(loadU16(s + 4)), 0u); });
            break;
        case 0xD: // V4-16
            unpackRun<8>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<4>(d, extend16<kZero>(loadU16(s)), extend16<kZero>(loadU16(s + 2)),
                              extend16<kZero>(loadU16(s + 4)), extend16<kZero>(loadU16(s + 6))); });
            break;
        case 0x2: // S-8
            unpackRun<1>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                const uint32_t v = extend8<kZero>(s[0]);
                storeLanes<4>(d, v, v, v, v); });
            break;
        case 0x6: // V2-8
            unpackRun<2>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<2>(d, extend8<kZero>(s[0]), extend8<kZero>(s[1]), 0u, 0u); });
            break;
        case 0xA: // V3-8
            unpackRun<3>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<3>(d, extend8<kZero>(s[0]), extend8<kZero>(s[1]), extend8<kZero>(s[2]), 0u); });
            break;
        case 0xE: // V4-8
            unpackRun<4>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                storeLanes<4>(d, extend8<kZero>(s[0]), extend8<kZero>(s[1]), extend8<kZero>(s[2]), extend8<kZero>(s[3])); });
            break;
        case 0xF: // V4-5
            unpackRun<2>(vu, src, n, c, [](uint8_t *d, const uint8_t *s) {
                const uint32_t v = loadU16(s);
                storeLanes<4>(d, v & 0x1Fu, (v >> 5) & 0x1Fu, (v >> 10) & 0x1Fu, (v >> 15) & 0x01u); });
            break;
        default:
            break;
        }
    }

    struct UnpackFormat
    {
        uint32_t vn, vl, components, bytesPerVector;
        bool maskEnable, zeroExtend;
    };

    // One write of the general UNPACK path (masks, modes 1-3, fill writes,
    // formats without a decoder): processVIF1Data's general loop, step for
    // step. srcVec is null for a fill write (CL < WL) that reads no data.
    void unpackGeneral(VIFRegisters &regs, uint8_t *dest, const uint8_t *srcVec, uint32_t cyclePos, const UnpackFormat &f)
    {
        uint32_t lanes[4];
        std::memcpy(lanes, dest, sizeof(lanes));
        uint32_t decompressed[4] = {lanes[0], lanes[1], lanes[2], lanes[3]};
        const bool decoded = srcVec != nullptr;
        const uint32_t limit = (f.components > 4u) ? 4u : f.components;

        bool handledFormat = true;
        if (!decoded)
        {
            handledFormat = false;
        }
        else if (f.vl == 0u)
        {
            if (f.components == 1u)
            {
                const uint32_t scalar = loadU32(srcVec);
                decompressed[0] = decompressed[1] = decompressed[2] = decompressed[3] = scalar;
            }
            else
            {
                for (uint32_t c = 0; c < limit; ++c)
                    decompressed[c] = loadU32(srcVec + c * 4u);
            }
        }
        else if (f.vl == 1u)
        {
            if (f.components == 1u)
            {
                const uint32_t scalar = f.zeroExtend ? extend16<true>(loadU16(srcVec)) : extend16<false>(loadU16(srcVec));
                decompressed[0] = decompressed[1] = decompressed[2] = decompressed[3] = scalar;
            }
            else
            {
                for (uint32_t c = 0; c < limit; ++c)
                {
                    const uint16_t raw = loadU16(srcVec + c * 2u);
                    decompressed[c] = f.zeroExtend ? extend16<true>(raw) : extend16<false>(raw);
                }
            }
        }
        else if (f.vl == 2u)
        {
            if (f.components == 1u)
            {
                const uint32_t scalar = f.zeroExtend ? extend8<true>(srcVec[0]) : extend8<false>(srcVec[0]);
                decompressed[0] = decompressed[1] = decompressed[2] = decompressed[3] = scalar;
            }
            else
            {
                for (uint32_t c = 0; c < limit; ++c)
                    decompressed[c] = f.zeroExtend ? extend8<true>(srcVec[c]) : extend8<false>(srcVec[c]);
            }
        }
        else if (f.vl == 3u && f.vn == 3u)
        {
            // V4-5: packed color-like format in a single 16-bit value.
            const uint16_t packed = loadU16(srcVec);
            decompressed[0] = packed & 0x1Fu;
            decompressed[1] = (packed >> 5) & 0x1Fu;
            decompressed[2] = (packed >> 10) & 0x1Fu;
            decompressed[3] = (packed >> 15) & 0x01u;
        }
        else
        {
            handledFormat = false;
        }

        // Unknown compressed format fallback: preserve legacy raw-copy behavior.
        if (!handledFormat && decoded && !f.maskEnable && (regs.mode == 0u || regs.mode == 3u))
        {
            std::memcpy(dest, srcVec, (f.bytesPerVector < 16u) ? f.bytesPerVector : 16u);
            return;
        }

        const bool canAdd = (f.vl != 3u || f.vn != 3u);
        const uint32_t mode = regs.mode & 3u;
        const uint32_t colIdx = (cyclePos > 3u) ? 3u : cyclePos;
        const uint32_t maskCycle = colIdx;

        for (uint32_t field = 0u; field < 4u; ++field)
        {
            uint32_t maskSpec = 0u;
            if (f.maskEnable)
                maskSpec = (regs.mask >> (((maskCycle * 4u) + field) * 2u)) & 0x3u;

            // In fill-write cycles with suspended source reads, treat raw-data selections as row-fill.
            if (!decoded && maskSpec == 0u)
                maskSpec = 1u;

            uint32_t writeVal = lanes[field];
            if (maskSpec == 0u)
            {
                if (handledFormat)
                {
                    writeVal = decompressed[field];
                    if (canAdd && (mode == 1u || mode == 2u))
                    {
                        writeVal = writeVal + regs.row[field];
                        if (mode == 2u)
                            regs.row[field] = writeVal;
                    }
                }
            }
            else if (maskSpec == 1u)
            {
                writeVal = regs.row[field];
            }
            else if (maskSpec == 2u)
            {
                writeVal = regs.col[colIdx];
            }
            else
            {
                continue; // write-protect
            }

            lanes[field] = writeVal;
        }

        std::memcpy(dest, lanes, sizeof(lanes));
    }

    // Blocks that run from one piece into the next (DIRECT packets, pending
    // IMAGE data) are gathered here; a big one is released again at once.
    std::vector<uint8_t> s_vif1Block;
    constexpr size_t kVif1BlockKeep = 64u * 1024u;
}

// The same commands, side effects and order as processVIF1Data on the pieces
// joined into one buffer, without joining them: data is read where it lies
// and a command whose data crosses into the next piece is carried over. A
// command the chain ends inside is dropped as at the end of a buffer.
void PS2Memory::processVIF1Pieces(const Vif1Piece *pieces, size_t count)
{
    static_assert(PS2_VU1_DATA_SIZE == 1024u * 16u, "UNPACK writes wrap at 1024 quadwords");
    ++g_vif1StreamStats.chains;
    g_vif1StreamStats.pieces += static_cast<unsigned>(count);

    Vif1PieceReader in(pieces, count);
    uint8_t split[16]; // a vector or STROW/STCOL data split between pieces
    auto takeBlock = [&](uint32_t bytes) -> const uint8_t *
    {
        if (in.avail() < bytes && s_vif1Block.size() < bytes)
            s_vif1Block.resize(bytes);
        return in.take(bytes, s_vif1Block.data());
    };
    auto releaseBlock = [&]()
    {
        if (s_vif1Block.capacity() > kVif1BlockKeep)
            std::vector<uint8_t>().swap(s_vif1Block);
    };

    while (in.left >= 4u)
    {
        if (m_vif1PendingPath2ImageQwc != 0u)
        {
            const uint32_t availableQw = in.left / 16u;
            if (availableQw == 0u)
                break;

            const uint32_t chunkQw = std::min<uint32_t>(m_vif1PendingPath2ImageQwc, availableQw);
            submitGifPacket(GifPathId::Path2, takeBlock(chunkQw * 16u), chunkQw * 16u, true, m_vif1PendingPath2DirectHl);
            releaseBlock();

            m_vif1PendingPath2ImageQwc -= chunkQw;
            if (m_vif1PendingPath2ImageQwc == 0u)
            {
                m_vif1PendingPath2DirectHl = false;
            }
            continue;
        }

        const uint32_t cmd = in.word();
        const uint8_t opcode = (cmd >> 24) & 0x7F;
        const uint16_t imm = cmd & 0xFFFF;
        const uint8_t num = (cmd >> 16) & 0xFF;

        // Track most-recent command for VIFn_CODE emulation.
        vif1_regs.code = cmd;
        vif1_regs.num = num;
        if ((cmd & 0x80000000u) != 0u)
            vif1_regs.stat |= (1u << 11); // INT

        if ((opcode & 0x60u) == 0x60u)
        {
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
            // UNPACK semantics: NUM is 8-bit and NUM==0 means 256 vectors (writes).
            const uint32_t writeVectorCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);

            // STCYCL controls write cycles for UNPACK.
            uint32_t cl = vif1_regs.cycle & 0xFFu;
            uint32_t wl = (vif1_regs.cycle >> 8) & 0xFFu;
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

            const uint32_t sourceBytes = sourceVectorCount * bytesPerVector;
            const uint32_t totalBytes = (sourceBytes + 3u) & ~3u;
            if (totalBytes > in.left)
                break;

            uint32_t vuAddr = (uint32_t)imm & 0x3FFu;
            if ((imm & 0x8000u) != 0u)
                vuAddr = (vuAddr + (vif1_regs.tops & 0x3FFu)) & 0x3FFu;

            if (!m_vu1Data)
            {
                in.skip(totalBytes);
                continue;
            }

            g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
            UnpackCursor cursor{vuAddr, 0u, cl, wl};
            const bool maskEnable = (opcode & 0x10u) != 0u;
            const bool zeroExtend = (imm & 0x4000u) != 0u;
            if (!maskEnable && (vif1_regs.mode & 3u) == 0u && cl >= wl && (vl != 3u || vn == 3u))
            {
                // Every write reads one vector: whole runs straight from the
                // piece, a vector split between pieces on its own.
                const uint32_t format = opcode & 0xFu;
                for (uint32_t n = sourceVectorCount; n != 0u;)
                {
                    const uint32_t avail = in.avail();
                    uint32_t vectors = (avail >= n * bytesPerVector) ? n : avail / bytesPerVector;
                    const uint8_t *src = in.here();
                    if (vectors != 0u)
                    {
                        in.advance(vectors * bytesPerVector);
                    }
                    else
                    {
                        vectors = 1u;
                        src = in.take(bytesPerVector, split);
                    }
                    if (zeroExtend)
                        unpackFast<true>(m_vu1Data, src, vectors, cursor, format);
                    else
                        unpackFast<false>(m_vu1Data, src, vectors, cursor, format);
                    n -= vectors;
                }
                g_vif1StreamStats.fastVectors += sourceVectorCount;
            }
            else
            {
                const UnpackFormat format{vn, vl, components, bytesPerVector, maskEnable, zeroExtend};
                for (uint32_t write = 0; write < writeVectorCount; ++write)
                {
                    const bool sourceAvailable = (cl >= wl) || (cursor.cyclePos < cl);
                    const uint8_t *src = sourceAvailable ? in.take(bytesPerVector, split) : nullptr;
                    unpackGeneral(vif1_regs, m_vu1Data + (cursor.dest & 0x3FFu) * 16u, src, cursor.cyclePos, format);
                    cursor.step();
                }
                g_vif1StreamStats.slowVectors += writeVectorCount;
            }
            in.skip(totalBytes - sourceBytes); // padding to a word
            continue;
        }
        else if (opcode == VIF_NOP)
        {
            continue;
        }
        else if (opcode == VIF_STCYCL)
        {
            vif1_regs.cycle = imm;
            continue;
        }
        else if (opcode == VIF_OFFSET)
        {
            vif1_regs.ofst = imm & 0x3FFu;
            vif1_regs.tops = vif1_regs.base & 0x3FFu;
            vif1_regs.stat &= ~(1u << 7); // clear DBF
            continue;
        }
        else if (opcode == VIF_BASE)
        {
            vif1_regs.base = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_ITOP)
        {
            vif1_regs.itops = imm & 0x3FFu;
            continue;
        }
        else if (opcode == VIF_STMOD)
        {
            vif1_regs.mode = imm & 3u;
            continue;
        }
        else if (opcode == VIF_MSKPATH3)
        {
            const bool wasMasked = m_path3Masked;
            m_path3Masked = (imm & 0x8000u) != 0u;
            if (wasMasked && !m_path3Masked)
                flushMaskedPath3Packets();
            continue;
        }
        else if (opcode == VIF_MARK)
        {
            vif1_regs.mark = imm;
            vif1_regs.stat |= (1u << 6); // MRK
            continue;
        }
        else if (opcode == VIF_FLUSHE || opcode == VIF_FLUSH || opcode == VIF_FLUSHA)
        {
            continue;
        }
        else if (opcode == VIF_MSCAL || opcode == VIF_MSCALF || opcode == VIF_MSCNT)
        {
            const uint32_t runTop = vif1_regs.tops & 0x3FFu;
            const uint32_t runItop = vif1_regs.itops & 0x3FFu;
            vif1_regs.top = runTop;
            vif1_regs.itop = runItop;

            const bool dbf = (vif1_regs.stat & (1u << 7)) != 0u;
            if (dbf)
                vif1_regs.tops = vif1_regs.base & 0x3FFu;
            else
                vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
            vif1_regs.stat ^= (1u << 7); // toggle DBF

            if (opcode != VIF_MSCNT)
            {
                if (m_vu1MscalCallback)
                    m_vu1MscalCallback((uint32_t)imm * 8u, runTop, runItop);
            }
            else if (m_vu1MscntCallback)
            {
                m_vu1MscntCallback(runTop, runItop);
            }
            continue;
        }
        else if (opcode == VIF_STMASK)
        {
            if (in.left < 4u)
                break;
            vif1_regs.mask = in.word();
            continue;
        }
        else if (opcode == VIF_STROW || opcode == VIF_STCOL)
        {
            if (in.left < 16u)
                break;
            std::memcpy(opcode == VIF_STROW ? vif1_regs.row : vif1_regs.col, in.take(16u, split), 16u);
            continue;
        }
        else if (opcode == VIF_MPG)
        {
            const uint32_t destAddr = (uint32_t)imm * 8u;
            const uint32_t instructionCount = (num == 0u) ? 256u : static_cast<uint32_t>(num);
            const uint32_t mpgBytes = instructionCount * 8u;
            uint32_t copied = 0u;
            if (m_vu1Code && destAddr < PS2_VU1_CODE_SIZE)
            {
                uint32_t copyBytes = mpgBytes;
                if (destAddr + copyBytes > PS2_VU1_CODE_SIZE)
                    copyBytes = PS2_VU1_CODE_SIZE - destAddr;
                if (copyBytes <= in.left)
                {
                    in.read(m_vu1Code + destAddr, copyBytes);
                    copied = copyBytes;
                    markVU1CodeModified();
                }
            }
            if (mpgBytes - copied > in.left)
                break;
            in.skip(mpgBytes - copied);
            continue;
        }
        else if (opcode == VIF_DIRECT || opcode == VIF_DIRECTHL)
        {
            uint32_t qwCount = imm;
            if (qwCount == 0)
                qwCount = 65536;
            const uint32_t availableQw = in.left / 16u;
            const bool truncated = qwCount > availableQw;
            if (truncated)
                qwCount = availableQw;

            if (qwCount > 0)
            {
                const bool directHl = (opcode == VIF_DIRECTHL);
                const uint8_t *packet = takeBlock(qwCount * 16u);
                submitGifPacket(GifPathId::Path2, packet, qwCount * 16u, true, directHl);

                const uint32_t pendingImageQw = pendingGifImageQwc(packet, qwCount * 16u);
                if (pendingImageQw != 0u)
                {
                    m_vif1PendingPath2ImageQwc = pendingImageQw;
                    m_vif1PendingPath2DirectHl = directHl;
                }
                releaseBlock();
            }
            if (truncated)
                break;
            continue;
        }
    }
}
#endif
