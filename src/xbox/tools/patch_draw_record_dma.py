"""Reuse observed linear REF spans in an Xbox-only DMA runtime copy.

The shortcut runs at an untouched tag, after the original return-stack
validation and before its tag count/decode. Exact live REF descriptors own
the original append sequence; the original addSegment and end-state commit
remain in charge. No decoder callback may occur while appending a span.
Input can include the existing Xbox BG and leaf DMA source-copy adapters.
"""
from __future__ import annotations

import argparse
import hashlib
import os
from pathlib import Path
import tempfile


GENERATED = '// Xbox build copy made by src/xbox/tools/patch_draw_record_dma.py; do not edit.\n'
INCLUDE = '#include "runtime/ps2_memory.h"\n'
ADAPTER_INCLUDE = '#include "xbox_draw_record.h"\n'
BATCH_CAPACITY = '    constexpr size_t kVif1BatchPieces = 4096u;\n'
BATCH_APPEND = '''        void emplace_back(const uint8_t *data, uint32_t bytes)
        {
            if (m_count == m_capacity)
                makeRoom();
            m_pieces[m_count++] = Piece(data, bytes);
            m_bytes += bytes;
#if TS_RENDER_COUNTERS >= 2
            ++m_added;
#endif
        }
'''
BATCH_EXTEND = '''        void extendBack(uint32_t bytes)
        {
            m_pieces[m_count - 1u].second += bytes;
            m_bytes += bytes;
        }
'''
BUDGETS = '''                    constexpr size_t kMaxBufferedDmaBytes = 64u * 1024u * 1024u;
                    constexpr size_t kMaxDmaControlStates = 1u << 20;
'''
SEGMENT_HEAD = '''                    const bool recordSegments = channelBase == 0x10009000u;
                    const size_t firstSegment = s_vif1Segments.size();
                    size_t segmentBytes = 0;
'''
SEGMENT_APPEND = '''                        segmentBytes += bytes;
                        if (segmentBytes > kMaxBufferedDmaBytes)
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host buffering budget"));
                        if (s_vif1Segments.size() > firstSegment &&
                            s_vif1Segments.back().first + s_vif1Segments.back().second == data)
                            extendLastVif1Piece(bytes);
                        else
                            s_vif1Segments.emplace_back(data, bytes);
'''
TRANSPORT = '''                    const bool isVifChannel =
                        channelBase == 0x10009000u || channelBase == 0x10008000u;
                    const bool transferTagData = isVifChannel && (chcr & 0x40u) != 0u;
'''
LOOP_HEAD = '''                    for (;;)
                    {
                        if (asp > 2u)
                            PS2X_THROW(std::runtime_error("invalid DMA return-stack depth"));
'''
AFTER_LOOP = '                    if (tagsProcessed > 4096 && std::getenv("PS2X_TRACE_DMA_CHAIN"))\n'
END_STATE = '''                    m_ioRegisters[channelBase + 0x30] = tagAddr;
                    m_ioRegisters[channelBase + 0x40] = asr0;
                    m_ioRegisters[channelBase + 0x50] = asr1;
                    chcr = (chcr & ~(0x3u << 4)) | ((asp & 0x3u) << 4);
                    chcr = (chcr & 0x0000FFFFu) | (lastTagUpper << 16);
                    m_ioRegisters[channelBase + 0x00] = chcr;
'''
# A shortcut skips the entire per-tag body. Verify all of that body, not
# just nearby anchors, so a newly inserted effect cannot silently disappear.
# The accepted forms are the original runtime and its existing exact leaf
# DMA splice. BG observations are outside this loop in both compositions.
WALK_DIGESTS = frozenset((
    '12388a6efc7f47d306f0b08ef16b7d6f825f6cbacc8321492d270f04cbea2bb2',
    '8e88ee229159014a42dd37e4b654cf6936d8a7c4a44515378aef38938743e04c',
))
HOOK = '''#if defined(PLATFORM_XBOX) && TS_DRAW_RECORDS && !TS_WALK_SKIP_ZERO_TTE && TS_RENDER_COUNTERS < 2
                        static_assert(XboxDrawRecordChain::kRamBytes == PS2_RAM_SIZE,
                                      "draw-record RAM layout must match the runtime");
                        // This tag has no effects yet. Only a completed,
                        // exactly observed linear REF span can be reused.
                        // Keep raw appends and reserve their full tag/data
                        // bound: no decoder callback may run between live
                        // validation and appending the whole span. Original
                        // coalescing/flush positions remain unchanged.
                        if (recordSegments && chainTags < kMaxDmaControlStates &&
                            segmentBytes <= kMaxBufferedDmaBytes)
                        {
                            XboxDrawRecordDmaSpan xboxRecordSpan;
                            if (xboxDrawRecordPrepareRefs(m_rdram, PS2_RAM_SIZE, tagAddr,
                                                          transferTagData,
                                                          uint32_t(kMaxDmaControlStates - chainTags),
                                                          uint32_t(kMaxBufferedDmaBytes - segmentBytes),
                                                          xboxRecordSpan)
#if TS_VIF1_BATCH
                                && s_vif1Segments.size() <= kVif1BatchPieces
                                && 2u * xboxRecordSpan.chain.tagCount <=
                                       kVif1BatchPieces - s_vif1Segments.size()
#endif
                                )
                            {
                                for (uint32_t i = 0; i < xboxRecordSpan.chain.pieceCount; ++i)
                                    addSegment(m_rdram + xboxRecordSpan.chain.pieces[i].offset,
                                               xboxRecordSpan.chain.pieces[i].bytes);
                                // REF tags advance linearly and never
                                // change either return-stack register/ASP.
                                tagAddr = xboxRecordSpan.endAddress;
                                chainTags += xboxRecordSpan.chain.tagCount;
                                tagsProcessed += static_cast<int>(xboxRecordSpan.chain.tagCount);
                                lastTagUpper = xboxRecordSpan.lastTagUpper;
                                continue;
                            }
                        }
#endif
'''
INSERTIONS = (ADAPTER_INCLUDE, HOOK)


def patch_source(source: str) -> str:
    newline = '\r\n' if '\r\n' in source else '\n'
    normalized = source.replace('\r\n', '\n')
    if '\r' in normalized or (newline == '\r\n' and '\n' in source.replace('\r\n', '')):
        raise ValueError('mixed or unsupported source line endings')
    if '\x00' in source or source.startswith('\ufeff'):
        raise ValueError('unsupported source encoding')
    if any(marker in normalized for marker in
           (GENERATED, ADAPTER_INCLUDE, 'XboxDrawRecordDmaSpan', 'xboxDrawRecordPrepareRefs(')):
        raise ValueError('memory source already contains the Xbox REF span splice')
    anchors = (
        ('runtime include', INCLUDE), ('fixed batch capacity', BATCH_CAPACITY),
        ('batch append/flush boundary', BATCH_APPEND), ('batch extension', BATCH_EXTEND),
        ('DMA budgets', BUDGETS), ('segmented chain initialization', SEGMENT_HEAD),
        ('original segment append', SEGMENT_APPEND), ('CHCR transfer mode', TRANSPORT),
        ('untouched DMA loop entry', LOOP_HEAD), ('after DMA walk', AFTER_LOOP),
        ('DMA register commit', END_STATE),
    )
    for label, anchor in anchors:
        if normalized.count(anchor) != 1:
            raise ValueError(f'expected exactly one {label} anchor')
    order = (BUDGETS, SEGMENT_HEAD, SEGMENT_APPEND, TRANSPORT, LOOP_HEAD, AFTER_LOOP, END_STATE)
    positions = tuple(normalized.index(anchor) for anchor in order)
    if positions != tuple(sorted(positions)):
        raise ValueError('unexpected DMA setup/walk/register order')
    walk = normalized[normalized.index(LOOP_HEAD):normalized.index(AFTER_LOOP)]
    if hashlib.sha256(walk.encode('utf-8')).hexdigest() not in WALK_DIGESTS:
        raise ValueError('unsupported DMA per-tag semantics; review the full walk before adapting')
    normalized = normalized.replace(INCLUDE, INCLUDE + ADAPTER_INCLUDE)
    normalized = normalized.replace(LOOP_HEAD, LOOP_HEAD + HOOK)
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
                                         prefix='.xbox-ref-dma-', delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode('utf-8'))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f'patch_draw_record_dma: {error}\n')
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
