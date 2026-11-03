"""Connect the native FX route (src/xbox/xbox_native_fx.*) to Xbox copies.

patch_native_fx.py vif|gs SOURCE OUTPUT

- vif: the segmented decoder (ps2_vif1_interpreter.cpp, as the earlier
  stages leave it) takes each UNPACK V4-32 to TOPS+0 that is followed, after
  only NOP/FLUSH, by MSCAL 0x3FE0: the kick's GIF bytes recorded as spans
  where they lie, the MSCAL's VIF1 steps and the native kick's VU1 state,
  no VU1 copy and no program call. The kicks wait until a command that can
  reach the GS or a VU1 program, or the end of the call, and then go to the
  GS in one call;
- vif, TS_FAST_DECODE (default 1): the decoder's repeated work taken out,
  same commands, effects and order: a kick's packet and VIFcodes read once
  by pointer where they lie, the MSCAL lookup kept across nested decodes,
  an MPG of the code VU1 already holds neither copied nor moving the code
  generation, the watched-row note's quick miss, UNPACK sizes from a table;
- gs: the GS front end (gs_frontend.cpp, as the earlier stages leave it)
  takes that call on PATH1: every span through one direct GIF decoder
  (xbox_gif_direct.h) with deferred stores, or, while a debug history runs,
  the spans one by one the original way.

Only generated copies are written; the shared sources are never edited.
Every anchor must match exactly once (in the decoder: inside
decodeVIF1Pieces), or the patch fails without writing output.
"""
from __future__ import annotations

import os
import re
import sys
import tempfile
from pathlib import Path

GENERATED = '// Xbox build copy made by src/xbox/tools/patch_native_fx.py; do not edit.\n'
INCLUDE = '#include "xbox_native_fx.h"\n'


def replace_once(text: str, anchor: str, replacement: str, label: str) -> str:
    count = text.count(anchor)
    if count != 1:
        raise ValueError(f'{label}: expected one anchor, found {count}')
    return text.replace(anchor, replacement)


# Before a command that is not quiet (xbox_native_fx.h): the kicks taken so
# far go to the GS first, in their stream order.
COMMAND_FLUSH = '''#if TS_NATIVE_FX
        if (g_xboxNativeFx.count != 0u && !xboxNativeFxQuiet(opcode))
            xboxNativeFxFlush();
#endif
'''

PATH2_FLUSH = '''#if TS_NATIVE_FX
        if (m_vif1PendingPath2ImageQwc != 0u && g_xboxNativeFx.count != 0u)
            xboxNativeFxFlush();
#endif
'''

END_FLUSH = '''#if TS_NATIVE_FX
    if (g_xboxNativeFx.count != 0u) // the pieces are the caller's: nothing waits past this call
        xboxNativeFxFlush();
#endif
'''

UNPACK_KICK = '''#if TS_NATIVE_FX
            // Native FX (src/xbox/xbox_native_fx.h): an UNPACK V4-32 to TOPS+0
            // whose packet MSCAL 0x3FE0 kicks next. The kick is taken where its
            // bytes lie; the rows it would write are left (only the kick reads
            // them), the MSCAL's steps and the native kick's VU1 state are done.
            if (opcode == 0x6Cu && (cmd & 0x80000000u) == 0u && (imm & 0x83FFu) == 0x8000u && cl == wl &&
                (vif1_regs.mode & 3u) == 0u && sourceBytes == totalBytes)
            {
#if TS_FAST_DECODE
                const uint32_t fxCodes = xboxNativeFxKickCodesFast(in, totalBytes);
#else
                const uint32_t fxCodes = xboxNativeFxKickCodes(in, totalBytes);
#endif
                bool fxTaken = false;
                if (fxCodes == 0u)
                    ++g_xboxNativeFxStats.notKick;
                else if (!xboxNativeFxRowsFree(vuAddr, writeVectorCount))
                    ++g_xboxNativeFxStats.rows;
                else
                {
#if TS_MSCAL_FAST
                    Vu1MscalFast &fxFast = m_vu1MscalFast;
                    if (fxFast.owner && (!fxFast.fbrst || fxFast.generation != getVU1CodeGeneration()))
                        fxFast.lookup(fxFast.owner, fxFast);
                    bool fxReady = fxFast.owner && fxFast.native && fxFast.fbrst && fxFast.vpuStat && fxFast.vu1 &&
                                   fxFast.gs && m_gifArbiter && m_gifArbiter->empty() && !PS2Memory::onVif1Worker();
#if TS_NATIVE_MODELS
                    fxReady = fxReady && !xboxModelCapturing(); // its hooks must see every command
#endif
#if TS_FAST_DECODE
                    const uint32_t fxPacket = fxReady ? xboxNativeFxPacketQwordsFast(in, writeVectorCount) : 0u;
#else
                    const uint32_t fxPacket = fxReady ? xboxNativeFxPacketQwords(in, writeVectorCount) : 0u;
#endif
                    if (!fxReady)
                        ++g_xboxNativeFxStats.state;
                    else if (fxPacket == 0u)
                        ++g_xboxNativeFxStats.packet;
                    else
                    {
                        if (g_xboxNativeFx.gs != fxFast.gs)
                        {
                            xboxNativeFxFlush();
                            g_xboxNativeFx.gs = fxFast.gs;
                        }
#if TS_FAST_DECODE
                        xboxNativeFxTakeFast(in, fxPacket * 16u, totalBytes);
#else
                        xboxNativeFxTake(in, fxPacket * 16u, totalBytes);
#endif
                        fastVectors += sourceVectorCount;
                        // The VIFcodes up to the MSCAL, as the loop takes them.
                        for (uint32_t fxIndex = 0; fxIndex < fxCodes; ++fxIndex)
                        {
                            uint32_t fxCode = 0u;
                            in.word(fxCode);
                            vif1_regs.code = fxCode;
                            vif1_regs.num = (fxCode >> 16) & 0xFFu;
                            TS_RENDER_COUNT2(++commands);
                        }
                        // The MSCAL branch below: its register steps, then what
                        // the native kick's successful run leaves.
                        const uint32_t fxTop = vif1_regs.tops & 0x3FFu;
                        const uint32_t fxItop = vif1_regs.itops & 0x3FFu;
                        vif1_regs.top = fxTop;
                        vif1_regs.itop = fxItop;
                        if ((vif1_regs.stat & (1u << 7)) != 0u)
                            vif1_regs.tops = vif1_regs.base & 0x3FFu;
                        else
                            vif1_regs.tops = (vif1_regs.base + vif1_regs.ofst) & 0x3FFu;
                        vif1_regs.stat ^= (1u << 7); // toggle DBF
                        renderCountMscal(0x3FE0u);
                        TS_RENDER_COUNT(++g_renderCounters.mscalFast);
                        const uint32_t fxFbrst = *fxFast.fbrst;
                        fxFast.vu1->dBitEnabled = (fxFbrst & (1u << 10)) != 0u;
                        fxFast.vu1->tBitEnabled = (fxFbrst & (1u << 11)) != 0u;
                        fxFast.vu1->top = fxTop;
                        fxFast.vu1->itop = fxItop;
                        fxFast.vu1->stoppedByD = false;
                        fxFast.vu1->stoppedByT = false;
                        *fxFast.vpuStat &= ~0x0600u; // VPU_STAT: no D/T stop
                        fxTaken = true;
                    }
#else
                    ++g_xboxNativeFxStats.state;
#endif
                }
                if (fxTaken)
                    continue;
            }
#endif
'''


# TS_FAST_DECODE (patch_vif): the decoder's repeated work taken out, the
# same commands, effects and order.
READER_PEEK = '''#if TS_FAST_DECODE
        // Where the byte `n` bytes on lies, when that is in this piece or the
        // two after it, and how many bytes are readable in place from it
        // (room); null otherwise. Reads and moves nothing (the native FX
        // route looks at the VIFcodes after an UNPACK's data with it).
        const uint8_t *peek(uint32_t n, uint32_t &room) const
        {
            const uint32_t here = static_cast<uint32_t>(m_end - m_cur);
            if (n < here)
            {
                room = here - n;
                return m_cur + n;
            }
            n -= here;
            const PS2Memory::Vif1Piece *stop = m_next + std::min<size_t>(2, m_last - m_next);
            for (const PS2Memory::Vif1Piece *p = m_next; p != stop; ++p)
            {
                if (n < p->second)
                {
                    room = p->second - n;
                    return p->first + n;
                }
                n -= p->second;
            }
            room = 0;
            return nullptr;
        }
#endif
'''

DECODE_DEPTH = '''#if TS_FAST_DECODE
namespace
{
    // decodeVIF1Pieces calls running: more than one while a model's or a
    // prologue's payloads are decoded from inside the decoder (their marker).
    uint32_t s_vif1DecodeDepth = 0;
    struct Vif1DecodeDepth
    {
        Vif1DecodeDepth() { ++s_vif1DecodeDepth; }
        ~Vif1DecodeDepth() { --s_vif1DecodeDepth; }
    };
}
#endif

'''

FAST_LOOKUP_OLD = '''#if TS_MSCAL_FAST
    // The EE context is looked up again for each chain (Vu1MscalFast).
    m_vu1MscalFast.fbrst = nullptr;
#endif
'''
FAST_LOOKUP_NEW = '''#if TS_FAST_DECODE
    const Vif1DecodeDepth decodeDepth;
#endif
#if TS_MSCAL_FAST
    // The EE context is looked up again for each chain (Vu1MscalFast).
#if TS_FAST_DECODE
    // A decode inside another runs within the same EE call (nothing changes
    // the EE thread meanwhile): the outer decode's context stands, and
    // keeping it spares both the inner decode and the outer one after it a
    // lookup. The native program is looked up again when VU1 code changes
    // (generation), as everywhere.
    if (s_vif1DecodeDepth == 1u)
#endif
    m_vu1MscalFast.fbrst = nullptr;
#endif
'''

UNPACK_SIZE_OLD = '''            uint32_t bitsPerComponent = 32u;
            if (vl == 1u)
                bitsPerComponent = 16u;
            else if (vl == 2u)
                bitsPerComponent = 8u;
            else if (vl == 3u)
                bitsPerComponent = (vn == 3u) ? 4u : 16u;
            const uint32_t bitsPerVector = (vl == 3u && vn == 3u) ? 16u : (components * bitsPerComponent);
            const uint32_t bytesPerVector = (bitsPerVector + 7u) / 8u;
'''
UNPACK_SIZE_NEW = '''#if TS_FAST_DECODE
            // The bytes a vector by format (VN << 2 | VL): what the lines
            // below work out, from a table.
            static constexpr uint8_t kVectorBytes[16] = {4, 2, 1, 2, 8, 4, 2, 4, 12, 6, 3, 6, 16, 8, 4, 2};
            const uint32_t bytesPerVector = kVectorBytes[opcode & 0xFu];
#else
''' + UNPACK_SIZE_OLD + '''#endif
'''

WATCH_OLD = '''            if (g_vu1WatchedRows.ranges != 0u)
                g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
'''
WATCH_NEW = '''            if (g_vu1WatchedRows.ranges != 0u)
#if TS_FAST_DECODE
                g_vu1WatchedRows.noteUnpack(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
#else
                g_vu1WatchedRows.note(vuAddr, vu1UnpackSpan(writeVectorCount, cl, wl));
#endif
'''

MPG_READ_OLD = '''                    in.read(m_vu1Code + destAddr, copyBytes);
'''
MPG_READ_NEW = '''#if TS_NATIVE_FX && TS_FAST_DECODE
                    // The program is sent again with the bytes VU1 already
                    // holds: copied, and the code generation moved, only from
                    // where they differ, so the native program is not looked
                    // up (its 16 KB hashed) again for the same code. Every
                    // consumer of the generation keys on the bytes.
                    bool mpgChanged = false;
                    for (uint32_t mpgDone = 0; mpgDone < copyBytes;)
                    {
                        const uint32_t mpgChunk = std::min(copyBytes - mpgDone, in.avail());
                        uint8_t *mpgTo = m_vu1Code + destAddr + mpgDone;
                        mpgChanged = mpgChanged || !xboxSameBytes(mpgTo, in.here(), mpgChunk);
                        if (mpgChanged)
                            std::memcpy(mpgTo, in.here(), mpgChunk);
                        in.advance(mpgChunk);
                        mpgDone += mpgChunk;
                    }
#else
                    in.read(m_vu1Code + destAddr, copyBytes);
#endif
'''
MPG_MARK_OLD = '''                    copied = copyBytes;
                    markVU1CodeModified();
'''
MPG_MARK_NEW = '''                    copied = copyBytes;
#if TS_NATIVE_FX && TS_FAST_DECODE
                    if (mpgChanged)
#endif
                    markVU1CodeModified();
'''


def decoder_body(s: str) -> tuple[str, str, str]:
    start = s.index('uint32_t PS2Memory::decodeVIF1Pieces(')
    end = s.index('\n}\n', start) + 3
    return s[:start], s[start:end], s[end:]


def patch_vif(s: str) -> str:
    a = '        void advance(uint32_t n) { m_cur += n; } // n <= avail()\n'
    s = replace_once(s, a, a + READER_PEEK, 'reader peek')
    head, body, tail = decoder_body(s)
    head += DECODE_DEPTH
    body = replace_once(body, FAST_LOOKUP_OLD, FAST_LOOKUP_NEW, 'decoder MSCAL lookup')
    body = replace_once(body, UNPACK_SIZE_OLD, UNPACK_SIZE_NEW, 'decoder UNPACK size')
    body = replace_once(body, WATCH_OLD, WATCH_NEW, 'decoder watched rows')
    body = replace_once(body, MPG_READ_OLD, MPG_READ_NEW, 'decoder MPG copy')
    body = replace_once(body, MPG_MARK_OLD, MPG_MARK_NEW, 'decoder MPG generation')
    a = '        TS_RENDER_COUNT2(++commands);\n'
    body = replace_once(body, a, a + COMMAND_FLUSH, 'decoder command')
    a = '        if (m_vif1PendingPath2ImageQwc != 0u)\n        {\n'
    body = replace_once(body, a, PATH2_FLUSH + a, 'decoder PATH2 image')
    a = '''            if (!m_vu1Data)
            {
                in.skip(totalBytes);
                continue;
            }
'''
    body = replace_once(body, a, a + UNPACK_KICK, 'decoder UNPACK')
    a = '    g_vif1StreamStats.fastVectors += fastVectors;\n'
    body = replace_once(body, a, END_FLUSH + a, 'decoder end')
    return head + body + tail


GS_HOOK = '''#if TS_NATIVE_FX
    if (index == 1u && xboxNativeFxIsToken(data, sizeBytes))
    {
        // The 0x3FE0 kicks the VIF decoder took (src/xbox/xbox_native_fx.h):
        // all of their bytes through one direct GIF decoder on this path's
        // stream, or the original way span by span.
        bool fxDone = false;
        {
            XBOX_GIF_DIRECT_GS_ACCESS;
            DirectAccess fxAccess{*this};
            fxDone = xboxNativeFxRun(fxAccess, stream);
        }
        if (!fxDone)
        {
            ++g_xboxNativeFxStats.gsOriginal;
            for (uint32_t fxSpan = 0; fxSpan < g_xboxNativeFx.count; ++fxSpan)
                processGIFPacket(g_xboxNativeFx.spans[fxSpan].data, g_xboxNativeFx.spans[fxSpan].bytes, path);
        }
        return;
    }
#endif
'''


# TS_DIRECT_MODELS: the GS state the model fast lane holds back across
# models (xbox_model_cache.cpp's window) comes in under the front end's lock
# at every entry that takes it, before the entry reads or writes the state:
# packets on every path, register writes, state blocks, runs, clears,
# uploads, presentation and debug reads. (The lock is recursive, and the
# sync only stores values, so an entry on any thread may take it.)
GS_PENDING_DECL = '''#if TS_DIRECT_MODELS
// (xbox_model_cache.cpp) The model fast lane's held-back GS state.
extern bool g_xboxGsPending;
void xboxGsPendingSync(GS &gs);
#endif
'''
RX_GS_LOCK = re.compile(r'^(\s*)(?:std::lock_guard<std::recursive_mutex> \w+\(m_stateMutex\)|m_stateMutex\.lock\(\));\n',
                        re.M)


def gs_pending_hooks(s: str) -> str:
    def hook(m: re.Match) -> str:
        indent = m.group(1)
        return (m.group(0) + '#if TS_DIRECT_MODELS\n' + f'{indent}if (g_xboxGsPending)\n'
                f'{indent}    xboxGsPendingSync(const_cast<GS &>(*this));\n' + '#endif\n')
    s, count = RX_GS_LOCK.subn(hook, s)
    if count < 20:
        raise ValueError(f'GS lock sites: expected at least 20, found {count}')
    return s


def patch_gs(s: str) -> str:
    a = '    auto &stream = m_gifStreams[index - 1];\n'
    b = '''    if (!stream.remaining && !stream.padding && !stream.unitBytes &&
        tryProcessNativeImageUploadPacket(data, sizeBytes))
        return;
'''
    s = replace_once(s, a + b, a + GS_HOOK + b, 'processGIFPacket stream')
    a = '#include "runtime/gs/gs_frontend.h"\n'
    s = replace_once(s, a, a + GS_PENDING_DECL, 'GS pending declaration')
    return gs_pending_hooks(s)


def patch_source(mode: str, text: str) -> str:
    """The whole copy: the mode's patch with the header first."""
    if INCLUDE in text:
        raise ValueError('source already contains the native FX route')
    text = {'vif': patch_vif, 'gs': patch_gs}[mode](text)
    # The include goes first: the inserted calls precede most of the file.
    return GENERATED + INCLUDE + text


def main() -> int:
    if len(sys.argv) != 4 or sys.argv[1] not in ('vif', 'gs'):
        print(__doc__, file=sys.stderr)
        return 2
    mode, source, output = sys.argv[1], Path(sys.argv[2]), Path(sys.argv[3])
    temporary = None
    try:
        if output.exists() and source.resolve() == output.resolve():
            raise ValueError('output must not alias its input source')
        raw = source.read_bytes().decode('utf-8')
        newline = '\r\n' if '\r\n' in raw else '\n'
        text = raw.replace('\r\n', '\n')
        text = patch_source(mode, text)
        output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile('wb', dir=output.parent, prefix='.xbox-native-fx-', delete=False) as f:
            temporary = Path(f.name)
            f.write(text.replace('\n', newline).encode('utf-8'))
        os.replace(temporary, output)
        temporary = None
    except (OSError, ValueError) as error:
        print(f'patch_native_fx: {error}', file=sys.stderr)
        return 2
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
