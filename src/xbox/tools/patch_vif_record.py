"""Connect exact partGfx VIF-prefix records in an Xbox decoder source copy.

Composes after the existing background-observer and fast-UNPACK stages.
The original DMA pieces and MSCAL dispatch semantics remain unchanged. Whole-prefix
admission uses a copied reader before any VIF/VU write; unsupported input
immediately keeps the original command loop. No synthetic guest commands.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_vif_record.py; do not edit.\n'
INCLUDE = '#include <xmmintrin.h> // the row copies and prefetches below (SSE1)\n'
ADAPTER_INCLUDE = '#include "xbox_vif_record.h"\n'
SOURCE_INCLUDE = '#include "xbox_vif_source.h"\n'
LEGACY = '''void PS2Memory::processVIF1Data(const uint8_t *data, uint32_t sizeBytes)
{
'''
SOURCE_LEGACY = '''#if TS_VIF_SOURCE
    xboxVifSourceInvalidate();
#endif
'''
DECODE = '''uint32_t PS2Memory::decodeVIF1Pieces(const Vif1Piece *pieces, size_t count, uint32_t bytes, bool chainEnd)
{
    static_assert(PS2_VU1_DATA_SIZE == 1024u * 16u, "UNPACK writes wrap at 1024 quadwords");
'''
COMMAND = '''        uint32_t cmd;
        if (!in.word(cmd))
'''
SOURCE_SCOPE = '''#if TS_DRAW_RECORDS && TS_VIF_SOURCE && TS_RENDER_COUNTERS < 2
    XboxVifSourceScope xboxSourceScope(m_rdram, m_vu1Data, !PS2Memory::onVif1Worker());
#endif
'''
SOURCE_COMMAND = '''#if TS_DRAW_RECORDS && TS_VIF_SOURCE && TS_RENDER_COUNTERS < 2
        const uint8_t *xboxSourceCommand = in.avail() >= 4u ? in.here() : nullptr;
#endif
'''
SOURCE_TRACK = '''#if TS_DRAW_RECORDS && TS_VIF_SOURCE && TS_RENDER_COUNTERS < 2
        xboxSourceScope.command(xboxSourceCommand, cmd, vif1_regs.tops & 0x3ffu);
#endif
'''
FAST_CALL = '''                        if (fast.native(startPC, m_vu1Data, PS2_VU1_DATA_SIZE, runTop, this, *fast.gs))
'''
FAST_REPLACEMENT = '''#if TS_DRAW_RECORDS && TS_VIF_SOURCE && TS_RENDER_COUNTERS < 2
                        bool xboxSourceHandled;
                        {
                            // Only this synchronous native call may claim
                            // the loan. It expires before either result path.
                            XboxVifSourceCallScope xboxSourceCall(xboxSourceScope, startPC, runTop);
                            xboxSourceHandled = fast.native(startPC, m_vu1Data, PS2_VU1_DATA_SIZE, runTop, this, *fast.gs);
                        }
                        if (xboxSourceHandled)
#else
''' + FAST_CALL + '''#endif
'''
REGISTERS = '''        else if (opcode == VIF_NOP)
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
'''
TRACK_COMMAND = '''        // Track most-recent command for VIFn_CODE emulation.
        vif1_regs.code = cmd;
        vif1_regs.num = num;
        if ((cmd & 0x80000000u) != 0u)
            vif1_regs.stat |= (1u << 11); // INT
'''
MARK_FLUSH = '''        else if (opcode == VIF_MARK)
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
'''
PAYLOAD_REGISTERS = '''        else if (opcode == VIF_STMASK)
        {
            if (!in.word(vif1_regs.mask))
            {
                leave(4u);
                break;
            }
            continue;
        }
        else if (opcode == VIF_STROW || opcode == VIF_STCOL)
        {
            if (in.left() < 16u)
            {
                leave(4u);
                break;
            }
            std::memcpy(opcode == VIF_STROW ? vif1_regs.row : vif1_regs.col, in.take(16u, split), 16u);
            continue;
        }
'''
OBSERVER = '''            // (The span needs a division; nothing to note without watched rows.)
            if (g_vu1WatchedRows.ranges != 0u)
                g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
'''
UNPACK_EXTEND = '''    template <bool kZero>
    inline uint32_t extend16(uint16_t raw)
    {
        return kZero ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(raw)));
    }
    template <bool kZero>
    inline uint32_t extend8(uint8_t raw)
    {
        return kZero ? raw : static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(raw)));
    }
'''
UNPACK_COMPACT = '''        case 0x1: // S-16
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
'''
# The original calculation remains in the fast adapter's fallback branch,
# so the same semantic guard applies with either TS_VIF_FAST selection.
UNPACK_LAYOUT = '''            const uint32_t vn = (opcode >> 2) & 0x3u;
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
'''
HOOK = '''#if TS_DRAW_RECORDS && TS_RENDER_COUNTERS < 2
        static_assert(XboxDrawRecordChain::kRamBytes == PS2_RAM_SIZE,
                      "draw-record RAM layout must match the runtime");
        // The descriptor is only a side hint. Original bytes remain in
        // this stream, and this point is always a VIF command boundary.
        // Never admit copied worker payloads or pending PATH2 IMAGE data.
        uint32_t xboxRecordNextCode = 0;
        bool xboxRecordCandidate = false;
        if (!PS2Memory::onVif1Worker() && m_vu1Data && in.avail() >= 4u)
        {
            std::memcpy(&xboxRecordNextCode, in.here(), 4u);
            xboxRecordCandidate = xboxVifRecordMayStart(xboxRecordNextCode,
                                                        vif1_regs.cycle, vif1_regs.mode);
        }
        if (xboxRecordCandidate)
        {
            struct XboxVifRecordContext
            {
                PS2Memory *memory;
                Vif1PieceReader *reader;
                const uint8_t *first;
                uint32_t bytes = 0, vectors = 0, commands = 0;
                XboxVifSourceScope *sourceScope = nullptr;
            } context{this, &in, in.here()};
#if TS_VIF_SOURCE
            context.sourceScope = &xboxSourceScope;
#endif
            const auto consume = [](const XboxDrawRecordChain &chain,
                                    const uint8_t *ram, void *opaque) {
                auto &context = *static_cast<XboxVifRecordContext *>(opaque);
                struct Probe
                {
                    Vif1PieceReader reader;
                    PS2Memory *memory;
                } probe{*context.reader, context.memory};
                const auto match = [](void *opaque, const uint8_t *source, uint32_t bytes) {
                    auto &probe = *static_cast<Probe *>(opaque);
                    if (probe.reader.left() < bytes || probe.reader.avail() < bytes ||
                        probe.reader.here() != source)
                        return false;
                    probe.reader.advance(bytes);
                    return true;
                };
                const auto observe = [](void *opaque, uint32_t dest, const uint8_t *source,
                                        uint32_t vectors, uint32_t format,
                                        uint32_t cl, uint32_t wl, uint32_t mode) {
                    auto &probe = *static_cast<Probe *>(opaque);
                    if (g_vu1WatchedRows.ranges != 0u)
                        g_vu1WatchedRows.note(dest, vu1UnpackSpan(vectors, cl, wl));
#if TS_BG_NATIVE
                    xboxBgNoteUnpack(probe.memory->getRDRAM(), probe.memory->getVU1Data(),
                                     dest, source, vectors, format, cl, wl, mode,
                                     false, false);
#else
                    (void)probe; (void)source; (void)format; (void)mode;
#endif
                };
                // This stock observer updates metadata only: it never
                // reads intermediate VU rows or invokes a guest/GS callback.
                // Preserve remains the public API default for other callers.
                return xboxVifRecordTryPrefix(chain, ram, context.first,
                                               context.memory->vif1_regs,
                                               context.memory->getVU1Data(),
                                               match, observe, &probe,
                                               context.bytes, context.vectors, context.commands,
                                               context.sourceScope,
                                               XboxVifRecordWritePolicy::FinalState);
            };
            if (xboxDrawRecordWithChain(m_rdram, context.first, consume, &context))
            {
                // This prefix contains no GS/native callback. The helper
                // has committed all admitted writes and cannot fail here.
                in.skip(context.bytes);
                fastVectors += context.vectors;
                TS_RENDER_COUNT2(commands += context.commands);
                continue; // MSCAL is still next, in the ORIGINAL branch.
            }
        }
#endif
'''


def patch_source(source: str) -> str:
    newline = '\r\n' if '\r\n' in source else '\n'
    normalized = source.replace('\r\n', '\n')
    if '\r' in normalized or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if any(marker in normalized for marker in
           (GENERATED, ADAPTER_INCLUDE, SOURCE_INCLUDE, 'XboxVifRecordContext',
            'xboxVifRecordTryPrefix(', 'XboxVifSourceScope')):
        raise ValueError('VIF source already contains the Xbox record consumer')
    for label, anchor in (('Xbox SSE include', INCLUDE), ('legacy decoder', LEGACY),
                          ('segmented decoder', DECODE),
                          ('segmented command read', COMMAND), ('register semantics', REGISTERS),
                          ('command register tracking', TRACK_COMMAND), ('VU write observer', OBSERVER),
                          ('MARK/FLUSH semantics', MARK_FLUSH), ('payload register semantics', PAYLOAD_REGISTERS),
                          ('compact UNPACK extension', UNPACK_EXTEND), ('compact UNPACK writers', UNPACK_COMPACT),
                          ('UNPACK layout and padding', UNPACK_LAYOUT),
                          ('direct fast native call', FAST_CALL)):
        if normalized.count(anchor) != 1:
            raise ValueError(f'expected exactly one {label} anchor')
    if not normalized.index(DECODE) < normalized.index(COMMAND) < normalized.index(REGISTERS):
        raise ValueError('unexpected segmented decoder/command/register order')
    normalized = normalized.replace(INCLUDE, INCLUDE + ADAPTER_INCLUDE + SOURCE_INCLUDE)
    normalized = normalized.replace(LEGACY, LEGACY + SOURCE_LEGACY)
    normalized = normalized.replace(DECODE, DECODE + SOURCE_SCOPE)
    normalized = normalized.replace(COMMAND, HOOK + SOURCE_COMMAND + COMMAND)
    normalized = normalized.replace(TRACK_COMMAND, TRACK_COMMAND + SOURCE_TRACK)
    normalized = normalized.replace(FAST_CALL, FAST_REPLACEMENT)
    return (GENERATED + normalized).replace('\n', newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError('output must not alias its input source')
        result = patch_source(args.source.read_bytes().decode('utf-8'))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.xbox-vif-record-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(result.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_vif_record: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
