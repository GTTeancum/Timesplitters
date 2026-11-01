"""Connect the native 2D emitters (src/xbox/xbox_native_2d.*) to Xbox copies.

patch_native_2d.py memory|vif|gs SOURCE OUTPUT

- memory: the VIF1 DMA walker (ps2_memory.cpp, after the native models
  stage) appends a native 2D token's 16-byte marker piece where the token
  lies in the list (a QWC-0 REF with ADDR kXboxNative2dTag | sequence);
- vif: the segmented decoder (ps2_vif1_interpreter.cpp, after the native
  models stage) hands the marker to the emitters: the batch's VIF bytes
  rebuilt, then the fast route (the MSCALs' register steps and one PATH1
  token packet for all of the kicks) or a nested decode of those bytes;
- gs: the GS front end (gs_frontend.cpp, after the direct GIF stage) takes
  a token packet on PATH1: the kicks through the direct GIF decoder with
  deferred stores, or one by one through processGIFPacket.

Only generated copies are written; the shared sources are never edited.
Every anchor must match exactly once (in the decoder: inside
decodeVIF1Pieces), or the patch fails without writing output.
"""
from __future__ import annotations

import os
import sys
import tempfile
from pathlib import Path

GENERATED = '// Xbox build copy made by src/xbox/tools/patch_native_2d.py; do not edit.\n'
INCLUDE = '#include "xbox_native_2d.h"\n'


def replace_once(text: str, anchor: str, replacement: str, label: str) -> str:
    count = text.count(anchor)
    if count != 1:
        raise ValueError(f'{label}: expected one anchor, found {count}')
    return text.replace(anchor, replacement)


WALKER = '''#if defined(PLATFORM_XBOX) && TS_NATIVE_2D
                        // A native 2D token (src/xbox/xbox_native_2d.h): its
                        // batch's marker piece in the token's place (lost: none).
                        if (id == 3u && tagQwc == 0u && recordSegments && xboxNative2dIsTag(addr))
                            if (const uint8_t *xboxNative2dMarker = xboxNative2dWalk(addr))
                                addSegment(xboxNative2dMarker, 16u);
#endif
'''


def patch_memory(s: str) -> str:
    a = '''                        if (irq && tieEnabled)
                            endChain = true;
'''
    return replace_once(s, a, WALKER + a, 'walker REF')


DECODER = '''#if TS_NATIVE_2D
        if (opcode == kXboxNative2dOpcode)
        {
            // A native 2D token's marker (the walker's 16-byte piece; its
            // other words are NOPs): the VIF bytes the batch stands for, by
            // the fast route or decoded as they are (src/xbox/xbox_native_2d.h).
            static bool xbox2dNested = false; // inside its own nested decode: not a marker
            const uint8_t *xbox2dBytes = nullptr;
            uint32_t xbox2dSize = 0u;
            if (!xbox2dNested && xboxNative2dMaterialize(cmd & kXboxNative2dIndexMask, xbox2dBytes, xbox2dSize))
            {
                bool xbox2dDone = false;
#if TS_MSCAL_FAST
                Vu1MscalFast &xbox2dFast = m_vu1MscalFast;
                if (xbox2dFast.owner && (!xbox2dFast.fbrst || xbox2dFast.generation != getVU1CodeGeneration()))
                    xbox2dFast.lookup(xbox2dFast.owner, xbox2dFast);
                if (!xbox2dFast.owner || !xbox2dFast.native || !xbox2dFast.fbrst || !xbox2dFast.vpuStat ||
                    !xbox2dFast.vu1 || !xbox2dFast.gs || !m_vu1Data || PS2Memory::onVif1Worker())
                    xboxNative2dCountDecline(XboxNative2dDeclineProgram);
                else if (m_gifArbiter && !m_gifArbiter->empty())
                    xboxNative2dCountDecline(XboxNative2dDeclineArbiter);
#if TS_NATIVE_MODELS
                else if (xboxModelCapturing()) // its hooks must see every command
                    xboxNative2dCountDecline(XboxNative2dDeclineOther);
#endif
                else
                {
                    XboxNative2dVifState xbox2dState{vif1_regs.base & 0x3FFu, vif1_regs.ofst & 0x3FFu,
                                                     vif1_regs.tops & 0x3FFu, vif1_regs.itops & 0x3FFu,
                                                     vif1_regs.top,          vif1_regs.itop,
                                                     (vif1_regs.stat & (1u << 7)) != 0u, 0u};
                    if (xboxNative2dPlan(xbox2dBytes, xbox2dSize, vif1_regs.cycle, vif1_regs.mode, xbox2dState))
                    {
                        // Each MSCAL's register steps, and what the native kick
                        // leaves in the VU1 state (the MSCAL branch below).
                        vif1_regs.top = xbox2dState.top;
                        vif1_regs.itop = xbox2dState.itop;
                        vif1_regs.tops = xbox2dState.tops;
                        if (xbox2dState.dbf)
                            vif1_regs.stat |= (1u << 7);
                        else
                            vif1_regs.stat &= ~(1u << 7);
                        if (xbox2dState.mscals != 0u)
                        {
                            const uint32_t fbrst = *xbox2dFast.fbrst;
                            xbox2dFast.vu1->dBitEnabled = (fbrst & (1u << 10)) != 0u;
                            xbox2dFast.vu1->tBitEnabled = (fbrst & (1u << 11)) != 0u;
                            xbox2dFast.vu1->top = xbox2dState.top;
                            xbox2dFast.vu1->itop = xbox2dState.itop;
                            xbox2dFast.vu1->stoppedByD = false;
                            xbox2dFast.vu1->stoppedByT = false;
                            *xbox2dFast.vpuStat &= ~0x0600u; // VPU_STAT: no D/T stop
                            submitGifPacket(GifPathId::Path1, xboxNative2dTokenPacket(), 16u);
                        }
                        xbox2dDone = true;
                    }
                }
#else
                xboxNative2dCountDecline(XboxNative2dDeclineProgram);
#endif
                if (!xbox2dDone)
                {
                    // The original stream, as the REFs would have sent it.
                    const Vif1Piece xbox2dPiece{xbox2dBytes, xbox2dSize};
                    xbox2dNested = true;
                    decodeVIF1Pieces(&xbox2dPiece, 1u, xbox2dSize, true);
                    xbox2dNested = false;
                }
            }
            continue;
        }
#endif
'''


def patch_vif(s: str) -> str:
    start = s.index('uint32_t PS2Memory::decodeVIF1Pieces(')
    head, body = s[:start], s[start:]
    a = '''        if ((opcode & 0x60u) == 0x60u)
        {
            // By format and destination (ps2_render_counters.h).
'''
    body = replace_once(body, a, DECODER + a, 'decoder command')
    return head + body


GS_HOOK = '''#if TS_NATIVE_2D
    if (index == 1u && sizeBytes == 16u && xboxNative2dIsTokenPacket(data))
    {
        // A native 2D token packet (src/xbox/xbox_native_2d.h): its kicks,
        // one after another on this path's stream, in one piece through the
        // direct decoder (stores that only set a value keep the open run).
        const uint8_t *xbox2dKicks = nullptr;
        const uint32_t *xbox2dEnds = nullptr;
        uint32_t xbox2dCount = 0u;
        if (xboxNative2dTakeKicks(data, xbox2dKicks, xbox2dEnds, xbox2dCount) && xbox2dCount != 0u)
        {
            bool xbox2dDone = false;
#if TS_GIF_DIRECT
            {
                XBOX_GIF_DIRECT_GS_ACCESS;
                DirectAccess access{*this};
                xbox2dDone = xbox_gif_direct::run(access, stream, xbox2dKicks, xbox2dEnds[xbox2dCount - 1u], false,
                                                  false, true);
            }
#endif
            if (!xbox2dDone)
            {
                xboxNative2dCountGsFallback();
                for (uint32_t k = 0, at = 0; k < xbox2dCount; at = xbox2dEnds[k++])
                    processGIFPacket(xbox2dKicks + at, xbox2dEnds[k] - at, path);
            }
        }
        return;
    }
#endif
'''


def patch_gs(s: str) -> str:
    if 'xbox_gif_direct::run(' not in s:
        raise ValueError("gs: the input is not the direct GIF stage's copy")
    a = '    auto &stream = m_gifStreams[index - 1];\n'
    b = '''    if (!stream.remaining && !stream.padding && !stream.unitBytes &&
        tryProcessNativeImageUploadPacket(data, sizeBytes))
        return;
'''
    return replace_once(s, a + b, a + GS_HOOK + b, 'processGIFPacket stream')


def patch_source(mode: str, text: str) -> str:
    """The whole copy: the mode's patch with the header first."""
    if INCLUDE in text:
        raise ValueError('source already contains the native 2D route')
    text = {'memory': patch_memory, 'vif': patch_vif, 'gs': patch_gs}[mode](text)
    # The include goes first: the inserted calls precede most of the file.
    return GENERATED + INCLUDE + text


def main() -> int:
    if len(sys.argv) != 4 or sys.argv[1] not in ('memory', 'vif', 'gs'):
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
        with tempfile.NamedTemporaryFile('wb', dir=output.parent, prefix='.xbox-native-2d-', delete=False) as f:
            temporary = Path(f.name)
            f.write(text.replace('\n', newline).encode('utf-8'))
        os.replace(temporary, output)
        temporary = None
    except (OSError, ValueError) as error:
        print(f'patch_native_2d: {error}', file=sys.stderr)
        return 2
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
