"""Compiler-free contracts/models for the expanded Xbox VIF source bridge.

These execute Python models and check C++ source structure, NOT C++ or Xbox
code. The independent reference materializes rows using struct's signed
conversions; the source model decodes raw bytes with unsigned bit operations.
Actual production API comparisons are in the deferred native layout probe.
"""
from __future__ import annotations

from dataclasses import dataclass
from pathlib import Path
import random
import re
import struct
import unittest

XBOX = Path(__file__).resolve().parents[1]
ROOT = XBOX.parents[1]
FORMATS = (0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 15)
PCS = {0x0000: 0, 0x0D20: 1, 0x1AE0: 2, 0x3520: 2, 0x2800: 3}
U32 = (1 << 32) - 1


@dataclass(frozen=True)
class Layout:
    vertex_base: int
    position: int
    color: int
    texture: int
    normal: int
    bone: int
    lit: bool
    skinned: bool
    env: bool


def read_layouts() -> tuple[Layout, ...]:
    text = (ROOT / 'project/game/vu1_native_xf.h').read_text()
    body = re.search(r'kLayouts\[4\]\s*=\s*\{(.*?)\n\s*\};', text, re.S).group(1)
    entries = re.findall(r'\{([^{}]+)\}', body)
    result = []
    for entry in entries:
        values = [field.strip() for field in entry.split(',')]
        result.append(Layout(*(int(v) for v in values[:6]), *(v == 'true' for v in values[6:])))
    return tuple(result)


LAYOUTS = read_layouts()


def stride(fmt: int) -> int:
    if fmt not in FORMATS:
        return 0
    return 2 if fmt == 15 else ((fmt >> 2) + 1) * (4 >> (fmt & 3))


def source_lane(raw: bytes | memoryview, width: int, zero: bool) -> int:
    value = int.from_bytes(raw[:width], 'little')
    if width == 4 or zero:
        return value
    sign = 1 << (width * 8 - 1)
    return value | ((U32 << (width * 8)) & U32) if value & sign else value


def source_row(fmt: int, zero: bool, raw: bytes | memoryview, previous: bytes) -> bytes:
    """Model of new source-backed read: only untouched lanes use the VU row."""
    if fmt == 15:
        packed = source_lane(raw, 2, True)
        values = [packed & 31, (packed >> 5) & 31, (packed >> 10) & 31, (packed >> 15) & 1]
    else:
        lanes, width = (fmt >> 2) + 1, 4 >> (fmt & 3)
        values = [source_lane(raw[i * width:], width, zero) for i in range(lanes)]
        if lanes == 1:
            values *= 4
        elif lanes < 4:
            values += list(struct.unpack('<4I', previous)[lanes:])
    return struct.pack('<4I', *values)


def original_unpack(fmt: int, zero: bool, raw: bytes | memoryview, previous: bytes) -> bytes:
    """Independent oracle: signed struct reads, then original lane stores."""
    output = bytearray(previous)
    if fmt == 15:
        packed, = struct.unpack('<H', raw[:2])
        values = [(packed // factor) % modulus for factor, modulus in
                  ((1, 32), (32, 32), (1024, 32), (32768, 2))]
    else:
        components = fmt // 4 + 1
        width = (4, 2, 1)[fmt % 4]
        spelling = {4: 'I', 2: 'H' if zero else 'h', 1: 'B' if zero else 'b'}[width]
        values = list(struct.unpack('<' + spelling * components, raw[:components * width]))
        if components == 1:
            values = values * 4
    for index, value in enumerate(values):
        struct.pack_into('<I', output, index * 4, value & U32)
    return bytes(output)


@dataclass
class Upload:
    row: int
    count: int
    fmt: int
    zero: bool
    data: bytearray
    cl: int = 1
    wl: int = 1


class LoanModel:
    def __init__(self, pc: int):
        self.kind = PCS.get(pc, 4)
        self.live = self.kind < 4
        self.rows = [None] * 1024
        self.vu = bytearray(b'\x95' * 16384)

    def add(self, upload: Upload) -> None:
        row, position = upload.row & 1023, 0
        for i in range(upload.count):
            self.rows[row] = upload
            start = i * stride(upload.fmt)
            self.vu[row*16:row*16+16] = original_unpack(
                upload.fmt, upload.zero, upload.data[start:], self.vu[row*16:row*16+16])
            row = (row + 1) & 1023
            position += 1
            if position == upload.wl:
                row = (row + upload.cl - upload.wl) & 1023
                position = 0

    def lookup(self, row: int, count: int) -> tuple[Upload, memoryview] | None:
        if not self.live or not 1 <= count <= 64 or not 0 <= row < 1024 or count > 1024-row:
            return None
        upload = self.rows[row]
        if upload is None or upload.cl != upload.wl or upload.count > 1024-upload.row:
            return None
        if row < upload.row or count > upload.count-(row-upload.row):
            return None
        if any(self.rows[i] is not upload for i in range(row, row+count)):
            return None
        return upload, memoryview(upload.data)[(row-upload.row)*stride(upload.fmt):]

    def prepare(self, kind: int, vi: int, count: int) -> dict[str, tuple[Upload, memoryview]] | None:
        if not self.live or kind != self.kind or not 0 <= kind < 4 or not 3 <= count <= 64:
            return None
        layout = LAYOUTS[kind]
        last = max(layout.position, layout.color, layout.texture, layout.normal, layout.bone)
        if vi < 0 or vi > 1024-count-last:
            return None
        fields = {'position': layout.position, 'color': layout.color}
        if not layout.env:
            fields['texture'] = layout.texture
        if layout.lit or layout.env:
            fields['normal'] = layout.normal
        if layout.skinned:
            fields['bone'] = layout.bone
        result = {}
        for name, offset in fields.items():
            view = self.lookup(vi+offset, count)
            if view is None:
                return None
            fmt = view[0].fmt
            if name == 'color' and fmt not in (12, 13, 14):
                return None
            if name not in ('color', 'bone') and fmt not in (8, 12):
                return None
            result[name] = view
        return result


def make_fixture(pc: int, count: int, colors: int, bones: int, zero: bool,
                 rng: random.Random, vi: int | None = None) -> tuple[LoanModel, int]:
    loan = LoanModel(pc)
    layout = LAYOUTS[loan.kind]
    vi = 256 + layout.vertex_base if vi is None else vi
    fields = [(layout.position, rng.choice((8, 12))), (layout.color, colors)]
    if not layout.env:
        fields.append((layout.texture, rng.choice((8, 12))))
    if layout.lit or layout.env:
        fields.append((layout.normal, rng.choice((8, 12))))
    if layout.skinned:
        fields.append((layout.bone, bones))
    for row, fmt in fields:
        data = bytearray(rng.randbytes(count * stride(fmt)))
        if row == layout.texture and not layout.env:
            for i in range(count):
                q = (0, 0x80000000, 0x7FC01234, 0x7F801234, 0x3F800000)[i % 5]
                struct.pack_into('<I', data, i*stride(fmt)+8, q)
        if row == layout.bone and layout.skinned and fmt != 15:
            width = 4 >> (fmt & 3)
            for i in range(count):
                value = (0, 1, 2, 3, 0x80, 0xFFFF, 0x12340001)[i % 7] & ((1 << (width*8))-1)
                data[i*stride(fmt):i*stride(fmt)+width] = value.to_bytes(width, 'little')
        loan.add(Upload(vi+row, count, fmt, zero, data))
    return loan, vi


def source_vertex(kind: int, arrays: dict, index: int) -> bytes:
    layout = LAYOUTS[kind]

    def payload(field):
        upload, data = arrays[field]
        return data[index*stride(upload.fmt):], upload

    position, _ = payload('position')
    normal = bytes(12)
    if layout.lit or layout.env:
        normal, _ = payload('normal')
        normal = normal[:12]
    colors, color = payload('color')
    width = stride(color.fmt) // 4
    packed = colors[2*width] | colors[width] << 8 | colors[0] << 16 | colors[3*width] << 24
    if layout.env:
        stq = struct.pack('<3I', 0, 0, 0x3F800000)
    else:
        texture, _ = payload('texture')
        q = int.from_bytes(texture[8:12], 'little')
        stq = bytes(texture[:8]) + struct.pack('<I', 0x3F800000 if q & 0x7FFFFFFF == 0 else q)
    bone = 0
    if layout.skinned:
        raw, view = payload('bone')
        value = source_lane(raw, 2, True) & 31 if view.fmt == 15 else source_lane(raw, 4 >> (view.fmt & 3), view.zero)
        bone = min(value & 65535, 2)
    return bytes(position[:12]) + bytes(normal) + struct.pack('<I', packed) + stq + struct.pack('<f', bone * 4.0)


def original_vertex(kind: int, vu: bytes, vi: int, index: int) -> bytes:
    layout = LAYOUTS[kind]
    def row(offset):
        at = ((vi + offset + index) % 1024) * 16
        return vu[at:at+16]
    result = bytearray(44)
    result[:12] = row(layout.position)[:12]
    if layout.lit or layout.env:
        result[12:24] = row(layout.normal)[:12]
    rgba = struct.unpack('<4I', row(layout.color))
    result[24:28] = bytes((rgba[2] & 255, rgba[1] & 255, rgba[0] & 255, rgba[3] & 255))
    if layout.env:
        result[28:40] = struct.pack('<3f', 0, 0, 1)
    else:
        result[28:40] = row(layout.texture)[:12]
        if result[36:40] in (b'\0\0\0\0', b'\0\0\0\x80'):
            result[36:40] = struct.pack('<f', 1)
    if layout.skinned:
        index, = struct.unpack('<H', row(layout.bone)[:2])
        struct.pack_into('<f', result, 40, min(index, 2)*4.0)
    return bytes(result)


class SourceLayoutModelTests(unittest.TestCase):
    def test_production_layout_table(self):
        self.assertEqual(LAYOUTS, (Layout(24,0,64,128,0,0,False,False,False),
                                  Layout(24,0,64,0,128,0,False,False,True),
                                  Layout(24,0,48,96,144,0,True,False,False),
                                  Layout(32,0,36,72,144,108,True,True,False)))

    def test_exhaustive_compact_extension_and_bone_masks(self):
        checks = 0
        for width in (1, 2):
            for zero in (False, True):
                fmt = 2 if width == 1 else 1
                for value in range(1 << (width*8)):
                    raw = value.to_bytes(width, 'little')
                    expected = original_unpack(fmt, zero, raw, bytes(16))
                    actual = source_row(fmt, zero, raw, bytes(16))
                    self.assertEqual(actual, expected)
                    reference_bone = min(struct.unpack('<I', expected[:4])[0] & 65535, 2)
                    self.assertEqual(min(source_lane(raw, width, zero) & 65535, 2), reference_bone)
                    checks += 1
        self.assertEqual(checks, 131584)

    def test_exhaustive_packed_v4_5_and_untouched_lanes(self):
        previous = struct.pack('<4I', 0x12345678, 0x80000000, 0x7FA01234, 0xDEADBEEF)
        for packed in range(65536):
            raw = struct.pack('<H', packed)
            self.assertEqual(source_row(15, False, raw, previous), original_unpack(15, False, raw, previous))
        rng = random.Random(0x524F5753)
        for fmt in FORMATS:
            for zero in (False, True):
                for _ in range(128):
                    raw = rng.randbytes(stride(fmt))
                    self.assertEqual(source_row(fmt, zero, raw, previous), original_unpack(fmt, zero, raw, previous))

    def test_all_five_entries_and_raw_vertex_layouts(self):
        rng = random.Random(0x4C495453)
        vertices = 0
        for pc in PCS:
            for colors in (12, 13, 14):
                for bones in FORMATS:
                    for zero in (False, True):
                        count = 31
                        loan, vi = make_fixture(pc, count, colors, bones, zero, rng)
                        arrays = loan.prepare(PCS[pc], vi, count)
                        self.assertIsNotNone(arrays)
                        for index in range(count):
                            self.assertEqual(source_vertex(PCS[pc], arrays, index), original_vertex(PCS[pc], loan.vu, vi, index))
                            vertices += 1
        self.assertEqual(vertices, 12090)

    def test_group_order_and_all_or_nothing_admission(self):
        rng = random.Random(0x47524F55)
        for pc, kind in PCS.items():
            loan, vi = make_fixture(pc, 7, 14, 2, False, rng)
            spans = [(vi, 3), (vi+3, 4)]
            arrays = [loan.prepare(kind, row, n) for row, n in spans]
            for direct in (False, True):
                for joined in (False, True):
                    if not direct and joined:
                        continue
                    reference, actual = [], []
                    previous = b'\xa7'*44
                    for (row, n), group in zip(spans, arrays):
                        want = [original_vertex(kind, loan.vu, row, i) for i in range(n)]
                        have = [source_vertex(kind, group, i) for i in range(n)]
                        if direct:
                            if joined:
                                reference += [previous, want[0]]
                                actual += [previous, have[0]]
                            reference += want
                            actual += have
                            previous, joined = want[-1], True
                        else:
                            reference += [want[j] for i in range(2,n) for j in (i,i-2,i-1)]
                            actual += [have[j] for i in range(2,n) for j in (i,i-2,i-1)]
                    self.assertEqual(actual, reference)
            # One overwritten position no longer has a three-lane source.
            loan.add(Upload(vi+3, 1, 4, False, bytearray(8)))
            self.assertIsNotNone(loan.prepare(kind, vi, 3))
            self.assertIsNone(loan.prepare(kind, vi+3, 4))

    def test_bounds_missing_inputs_kind_mismatch_and_revoke(self):
        rng = random.Random(0x424F554E)
        for pc, kind in PCS.items():
            layout = LAYOUTS[kind]
            last = max(layout.position, layout.color, layout.texture, layout.normal, layout.bone)
            loan, vi = make_fixture(pc, 3, 12, 0, True, rng, 1024-last-3)
            self.assertIsNotNone(loan.prepare(kind, vi, 3))
            for bad_vi, bad_n in ((vi+1,3),(U32,3),(vi,2),(vi,65)):
                self.assertIsNone(loan.prepare(kind, bad_vi, bad_n))
            for wrong in set(range(5))-{kind}:
                self.assertIsNone(loan.prepare(wrong, vi, 3))
            for field in (layout.position, layout.color, layout.texture if not layout.env else layout.normal):
                save = loan.rows[vi+field]
                loan.rows[vi+field] = None
                self.assertIsNone(loan.prepare(kind, vi, 3))
                loan.rows[vi+field] = save
            loan.live = False
            self.assertIsNone(loan.prepare(kind, vi, 3))
        for pc in (0x3AF8, 0x3CE8, 0x3FE0, 0x4000, 0x4D20):
            self.assertFalse(LoanModel(pc).live)

    def test_skips_wrap_and_latest_partial_row(self):
        for row, count, cl, wl in ((100,3,2,1),(1023,2,1,1)):
            loan = LoanModel(0x2800)
            loan.add(Upload(row,count,12,False,bytearray(count*16),cl,wl))
            self.assertIsNone(loan.lookup(row,1))
        loan = LoanModel(0x1AE0)
        loan.add(Upload(100,1,12,False,bytearray(struct.pack('<4I',1,2,3,4))))
        loan.add(Upload(100,1,6,True,bytearray((128,255))))
        upload, data = loan.lookup(100,1)
        self.assertEqual(source_row(upload.fmt,upload.zero,data,loan.vu[1600:1616]),struct.pack('<4I',128,255,3,4))
        # Changing a payload is consumed live, not from a decoded cache.
        upload.data[:] = bytes((1,2))
        self.assertEqual(source_row(upload.fmt,upload.zero,data,loan.vu[1600:1616]),struct.pack('<4I',1,2,3,4))


class SourceLayoutContractTests(unittest.TestCase):
    def test_literal_pc_mapping_and_kind_gate(self):
        text = (XBOX/'xbox_vif_source.cpp').read_text()
        for pc in ('0x0000u','0x0d20u','0x1ae0u','0x3520u','0x2800u'):
            self.assertIn('case '+pc+':',text)
        self.assertEqual(text.count('drawKind(pc) > ts_native_xf::Skinned'),2)
        self.assertIn('!source.active(vu, kind)',text)
        self.assertIn('kind == drawKind((terminalCode_ & 0xffffu) * 8u)',text)
        self.assertIn('pc != (source->terminalCode_ & 0xffffu) * 8u',text)

    def test_uses_production_offsets_and_separate_fields(self):
        text = (XBOX/'xbox_vif_source.cpp').read_text()
        for field in ('pos','rgba','st','normal','boneIndex'):
            self.assertIn('vi + layout.'+field,text)
        self.assertIn('!layout.envMap &&',text)
        self.assertIn('(layout.lit || layout.envMap) &&',text)
        self.assertIn('layout.skinned ? static_cast<float>(sourceBone(arrays.bone, index) * 4u)',text)
        self.assertIn('sizeof(Arrays) * kXboxVifSourceMaxStrips <= 2u * 1024u',text)
        self.assertIn('source arrays match the admitted Lit/Skinned layouts',text)

    def test_signed_flag_reaches_source_without_changing_write_order(self):
        header = (XBOX/'xbox_vif_source.h').read_text()
        source = (XBOX/'xbox_vif_source.cpp').read_text()
        record = (XBOX/'xbox_vif_record.cpp').read_text()
        self.assertIn('bool zeroExtend = false',header)
        self.assertIn('uint8_t(format), uint8_t(cl), uint8_t(wl), uint8_t(zeroExtend)',source)
        self.assertIn('upload.zeroExtend != 0u',source)
        call = re.search(r'sourceScope->noteUnpack\((.*?)\);',record,re.S).group(1)
        self.assertIn('(op.code & 0x4000u) != 0u',call)
        self.assertLess(record.index('if (observe) observe('),record.index('sourceScope->noteUnpack('))
        self.assertLess(record.index('sourceScope->noteUnpack('),record.index('if ((writeMask &'))
        self.assertIn('plan.valid = plan.writesValid = false',record)

    def test_raw_reader_commits_only_after_proof_and_preserves_lanes(self):
        source = (XBOX/'xbox_vif_source.cpp').read_text()
        body = source.split('bool xboxVifSourceTryReadRow(',1)[1].split('bool xboxVifSourceTryDecodeStrip(',1)[0]
        self.assertIn('source->lookup(vu, row, 1u, view)',body)
        self.assertIn('value[1] = value[2] = value[3] = value[0]',body)
        self.assertIn('vu + row * 16u + lanes * 4u, (4u - lanes) * 4u',body)
        self.assertIn('(packed >> 15u) & 1u',body)
        self.assertLess(body.rindex('return false'),body.index('std::memcpy(out, value'))
        self.assertEqual(body.count('std::memcpy(out,'),1)
        lookup = source.split('bool XboxVifSourceScope::lookup(',1)[1].split('bool XboxVifSourceScope::array(',1)[0]
        self.assertIn('upload.cl != upload.wl',lookup)
        self.assertIn('if (rows_[row + i] != id) return false',lookup)


if __name__ == '__main__':
    unittest.main()
