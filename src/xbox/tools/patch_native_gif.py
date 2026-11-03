"""Connect bounded native GIF plans in Xbox-only native/GS source copies.

The native route composes after patch_bg_native.py. The GS route changes
only processNativePackedGIFPacket, retaining its original body at switch 0.
No shared header or source is modified. Every anchor is exact and unique.
"""
from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile


GENERATED = "// Xbox build copy made by src/xbox/tools/patch_native_gif.py; do not edit.\n"
ADAPTER_INCLUDE = '#include "xbox_gif_native.h"\n'
NATIVE_INCLUDE = '#include "vu1_native_xf.h"\n'
GS_INCLUDE = '#include "runtime/gs/gs_frontend.h"\n'
KICK = '''        if (q + qwords > kDataQwords)
            return false;
        if (memory)
            memory->submitGifPacket(GifPathId::Path1, data + q * 16u, qwords * 16u);
        else
            gs.processGIFPacket(data + q * 16u, qwords * 16u, GifPathId::Path1);
        return true;
'''
KICK_FAST = '''#if TS_GIF_NATIVE
        if (xboxGifTryNativePacket(memory, gs, data + q * 16u, qwords * 16u))
            return true;
#endif
'''
GS_METHOD = '''bool GS::processNativePackedGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
    if (!data || sizeBytes < 16u || !m_backend)
        return false;

    if (!validatePackedGifPacket(data, sizeBytes))
        return false;

    const bool processed = visitPackedGifPacket(data, sizeBytes, [&](const PackedGifPacketTag &tag)
                                                {
        m_curQ = 1.0f;

        recordGifTagDebugEventUnlocked(sizeBytes, tag.nloop, GIF_FMT_PACKED, tag.nreg);

        const bool pre = ((tag.lo >> 46u) & 1u) != 0u;
        if (pre)
            writeRegisterUnlocked(GS_REG_PRIM, (tag.lo >> 47u) & 0x7FFu);

        uint32_t offset = tag.payloadOffset;
        for (uint32_t loop = 0u; loop < tag.nloop; ++loop)
        {
            for (uint32_t r = 0u; r < tag.nreg; ++r)
            {
                const uint64_t lo = loadLE64(data + offset);
                const uint64_t hi = loadLE64(data + offset + 8u);
                offset += 16u;
                writeRegisterPacked(tag.regs[r], lo, hi);
            }
        }

        return true; });

    if (!processed)
        return false;

    ++m_nativePackedGIFPacketCount;
    return true;
}
'''
GS_FAST_BODY = '''    std::lock_guard<std::recursive_mutex> lock(m_stateMutex);
    if (!data || sizeBytes < 16u || !m_backend)
        return false;
    // This API also serves the existing PATH3 direct-DMA route. Requiring
    // all streams idle avoids assuming which path owns a partial packet.
    for (const auto &stream : m_gifStreams)
        if (stream.remaining || stream.padding || stream.unitBytes)
        {
            xboxGifNativeStreamFallback();
            return false;
        }

    const auto execute = [](void *owner, const XboxGifNativePlan &plan, const uint8_t *packet) {
        GS &gs = *static_cast<GS *>(owner);
        for (uint32_t i = 0; i < plan.operationCount; ++i)
        {
            const auto &operation = plan.operations[i];
            if (operation.kind == XboxGifNativePlan::Tag)
            {
                const auto &tag = plan.tags[operation.offset];
                gs.recordGifTagDebugEventUnlocked(plan.bytes, tag.nloop, GIF_FMT_PACKED, tag.nreg);
                if ((tag.lo >> 46u) & 1u)
                    gs.writeRegisterUnlocked(GS_REG_PRIM, (tag.lo >> 47u) & 0x7FFu);
                continue;
            }
            // A tag resets its stream Q to 1.0; the first PACKED write
            // transfers that value to current Q. A zero-loop tag never
            // writes current Q. STQ and later registers retain live carry.
            if (operation.kind == XboxGifNativePlan::FirstPacked)
                gs.m_curQ = 1.0f;
            const uint8_t *value = packet + operation.offset;
            gs.writeRegisterPacked(operation.reg, loadLE64(value), loadLE64(value + 8u));
        }
    };
    // Plan acquisition validates every tag and payload bound before the
    // first register/primitive effect. The callback cannot fail midway.
    if (!xboxGifWithNativePlan(data, sizeBytes, execute, this))
        return false;
    ++m_nativePackedGIFPacketCount;
    return true;
'''


def require_once(source: str, label: str, anchor: str) -> None:
    if source.count(anchor) != 1:
        raise ValueError(f"expected exactly one {label} anchor")


def patch_source(kind: str, source: str) -> str:
    if kind not in ("native", "gs"):
        raise ValueError("kind must be native or gs")
    newline = "\r\n" if "\r\n" in source else "\n"
    normalized = source.replace("\r\n", "\n")
    if "\r" in normalized or (newline == "\r\n" and "\n" in source.replace("\r\n", "")):
        raise ValueError("mixed or unsupported source line endings")
    if "\x00" in source or source.startswith("\ufeff"):
        raise ValueError("unsupported source encoding")
    if any(marker in normalized for marker in (GENERATED, ADAPTER_INCLUDE, "xboxGifTryNativePacket(", "xboxGifWithNativePlan(")):
        raise ValueError("source already has the Xbox native GIF route")
    if kind == "native":
        require_once(normalized, "native vertex include", NATIVE_INCLUDE)
        require_once(normalized, "complete native XGKICK submission", KICK)
        normalized = normalized.replace(NATIVE_INCLUDE, NATIVE_INCLUDE + ADAPTER_INCLUDE)
        normalized = normalized.replace(KICK, KICK.replace("        if (memory)\n", KICK_FAST + "        if (memory)\n", 1))
    else:
        require_once(normalized, "GS front-end include", GS_INCLUDE)
        require_once(normalized, "native PACKED GIF method", GS_METHOD)
        start, original_body = GS_METHOD.split("{\n", 1)
        original_body = original_body[:-2]  # remove the method's final }\n only
        replacement = start + "{\n#if TS_GIF_NATIVE\n" + GS_FAST_BODY + "#else\n" + original_body + "#endif\n}\n"
        normalized = normalized.replace(GS_INCLUDE, GS_INCLUDE + ADAPTER_INCLUDE)
        normalized = normalized.replace(GS_METHOD, replacement)
    return (GENERATED + normalized).replace("\n", newline)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("kind", choices=("native", "gs"))
    parser.add_argument("source", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()
    temporary = None
    try:
        if args.source.resolve() == args.output.resolve() or (
                args.output.exists() and args.source.samefile(args.output)):
            raise ValueError("output must not alias the input source")
        patched = patch_source(args.kind, args.source.read_bytes().decode("utf-8"))
        args.output.parent.mkdir(parents=True, exist_ok=True)
        with tempfile.NamedTemporaryFile(mode="wb", dir=args.output.parent,
                                         prefix=".xbox-gif-", delete=False) as stream:
            temporary = Path(stream.name)
            stream.write(patched.encode("utf-8"))
        os.replace(temporary, args.output)
        temporary = None
    except (OSError, ValueError) as error:
        parser.exit(2, f"patch_native_gif: {error}\n")
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
