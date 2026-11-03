"""Add an Xbox-only exact-tag-validated leaf DMA splice to a runtime copy.

The original CALL executes first. Only a complete supported leaf ending in
RET may replace the following tag walk. Unsupported cases, detailed tag
counters, and zero-TTE suppression use the original source unconditionally.
Batch admission reserves the full raw tag/data piece bound so no decoder
callback can occur between live tag validation and appending the whole leaf.
Input may be the original memory source or its Xbox BG-observer copy.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_dma_chain.py; do not edit.\n'
INCLUDE = '#include "runtime/ps2_memory.h"\n'
ADAPTER_INCLUDE = '#include "xbox_dma_chain.h"\n'
BATCH_CAPACITY = '    constexpr size_t kVif1BatchPieces = 4096u;\n'
BUDGETS = '''                    constexpr size_t kMaxBufferedDmaBytes = 64u * 1024u * 1024u;
                    constexpr size_t kMaxDmaControlStates = 1u << 20;
'''
CALL = '''                        case 5:
                            dataAddr = tagAddr + 16;
                            {
                                const uint32_t retAddr = dataAddr + static_cast<uint32_t>(tagQwc) * 16u;
                                if (asp == 0u)
                                {
                                    asr0 = retAddr;
                                    asp = 1u;
                                }
                                else if (asp == 1u)
                                {
                                    asr1 = retAddr;
                                    asp = 2u;
                                }
                                else
                                    PS2X_THROW(std::runtime_error("DMA CALL exceeds two-entry return stack"));
                            }
                            tagAddr = addr;
                            break;
'''
RET = '''                        case 6:
                            dataAddr = tagAddr + 16;
                            if (asp == 2u)
                            {
                                tagAddr = asr1;
                                asp = 1u;
                            }
                            else if (asp == 1u)
                            {
                                tagAddr = asr0;
                                asp = 0u;
                            }
                            else
                            {
                                endChain = true;
                            }
                            break;
'''
TAIL = '''                        if (hasPayload)
                            appendData(dataAddr, tagQwc);
                        if (irq && tieEnabled)
                            endChain = true;
                        if (endChain)
                            break;
'''
END_STATE = '''                    m_ioRegisters[channelBase + 0x30] = tagAddr;
                    m_ioRegisters[channelBase + 0x40] = asr0;
                    m_ioRegisters[channelBase + 0x50] = asr1;
                    chcr = (chcr & ~(0x3u << 4)) | ((asp & 0x3u) << 4);
                    chcr = (chcr & 0x0000FFFFu) | (lastTagUpper << 16);
                    m_ioRegisters[channelBase + 0x00] = chcr;
'''
SPLICE = '''#if defined(PLATFORM_XBOX) && TS_DMA_CHAIN_CACHE && !TS_WALK_SKIP_ZERO_TTE && TS_RENDER_COUNTERS < 2
                        // CALL's own bytes and return-stack update already
                        // happened above. Admit the complete leaf before
                        // touching the pending pieces or applying its RET.
                        // In batch mode reserve the full raw tag/data piece
                        // bound. After a previous flush firstSegment may
                        // exceed size(), preventing normal coalescing. Raw
                        // appends retain that condition and subsequent flush
                        // boundaries. No decoder callback may run between
                        // live validation and appending the complete leaf.
                        if (recordSegments && id == 5u && !endChain &&
                            asp >= 1u && asp <= 2u &&
                            chainTags < kMaxDmaControlStates &&
                            segmentBytes <= kMaxBufferedDmaBytes)
                        {
                            XboxDmaChainSplice splice;
                            if (xboxDmaChainPrepare(m_rdram, PS2_RAM_SIZE, tagAddr,
                                                    transferTagData,
                                                    uint32_t(kMaxDmaControlStates - chainTags),
                                                    uint32_t(kMaxBufferedDmaBytes - segmentBytes), splice)
#if TS_VIF1_BATCH
                                && s_vif1Segments.size() <= kVif1BatchPieces
                                && 2u * splice.tagCount <= kVif1BatchPieces - s_vif1Segments.size()
#endif
                                )
                            {
                                for (uint32_t i = 0; i < splice.pieceCount; ++i)
                                    addSegment(m_rdram + splice.pieces[i].offset,
                                               splice.pieces[i].bytes);
                                // Every admitted leaf ends in one RET and
                                // never changes ASR. CALL's overwritten ASR
                                // remains visible after the stack pop too.
                                tagAddr = asp == 2u ? asr1 : asr0;
                                --asp;
                                chainTags += splice.tagCount;
                                tagsProcessed += static_cast<int>(splice.tagCount);
                                lastTagUpper = splice.lastTagUpper;
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
           (GENERATED, ADAPTER_INCLUDE, 'XboxDmaChainSplice', 'xboxDmaChainPrepare(')):
        raise ValueError('memory source already contains the Xbox DMA splice')
    for label, anchor in (('runtime include', INCLUDE), ('fixed batch capacity', BATCH_CAPACITY),
                          ('DMA budgets', BUDGETS),
                          ('DMA CALL stack update', CALL), ('DMA RET stack update', RET),
                          ('DMA payload/IRQ tail', TAIL), ('DMA register commit', END_STATE)):
        if normalized.count(anchor) != 1:
            raise ValueError(f'expected exactly one {label} anchor')
    if not (normalized.index(BUDGETS) < normalized.index(CALL) < normalized.index(RET) <
            normalized.index(TAIL) < normalized.index(END_STATE)):
        raise ValueError('unexpected DMA budget/CALL/RET/payload/register order')
    normalized = normalized.replace(INCLUDE, INCLUDE + ADAPTER_INCLUDE)
    normalized = normalized.replace(TAIL, TAIL.replace('                        if (endChain)\n',
                                                       SPLICE + '                        if (endChain)\n'))
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
        patched = patch_source(args.source.read_bytes().decode('utf-8'))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode='wb', dir=args.output.parent,
                                         prefix='.xbox-dma-chain-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_dma_chain: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
