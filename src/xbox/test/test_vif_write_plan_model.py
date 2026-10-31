"""Compiler-free algorithm model, NOT execution of xbox_vif_write_plan.h.

The backward lane-coverage algorithm is checked against an independent
forward last-writer oracle and full versus elided final images. Focused
source assertions bind assumptions to the header; the deferred native
probe tests the real C++ implementation when compilation is permitted.
"""
from __future__ import annotations

from dataclasses import dataclass, replace
from pathlib import Path
import random
import unittest

ALL = (1 << 64) - 1
ROWS = 1024
FORMATS = (0, 1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 15)
XBOX = Path(__file__).resolve().parents[1]


@dataclass(frozen=True)
class Operation:
    code: int
    opcode: int
    format: int = 0
    vectors: int = 0
    cl: int = 0
    wl: int = 0


def control(opcode, imm=0):
    return Operation((opcode << 24) | imm, opcode)


def upload(fmt, row, count, cycle=0x101, relative=False):
    cl, wl = (cycle & 255) or 1, ((cycle >> 8) & 255) or 1
    return Operation(((0x60 | fmt) << 24) | ((count & 255) << 16) |
                     row | (0x8000 if relative else 0), 0x60 | fmt, fmt, count, cl, wl)


def analyze_model(ops, base=0, tops=0, cycle=0x101, mode=0):
    """Return (keep, omitted uploads, vectors, bytes), mirroring the C++ proof."""
    if not ops or len(ops) > 64:
        return ALL, 0, 0, 0
    base, tops, mode = base & 1023, tops & 1023, mode & 3
    destinations = [0] * len(ops)
    for i, op in enumerate(ops):
        opcode, imm = (op.code >> 24) & 127, op.code & 65535
        if op.opcode != opcode:
            return ALL, 0, 0, 0
        if op.vectors:
            num = (op.code >> 16) & 255
            cl, wl = (cycle & 255) or 1, ((cycle >> 8) & 255) or 1
            if (opcode & 0x60 != 0x60 or opcode & 0x10 or mode or
                    op.format != opcode & 15 or
                    (op.format & 3 == 3 and op.format != 15) or
                    op.vectors != (num or 256) or cl < wl or op.cl != cl or op.wl != wl):
                return ALL, 0, 0, 0
            destinations[i] = ((imm & 1023) + (tops if imm & 0x8000 else 0)) & 1023
        elif opcode == 1:
            cycle = imm
        elif opcode == 2:
            tops = base
        elif opcode == 3:
            base = imm & 1023
        elif opcode == 5:
            mode = imm & 3
        elif opcode not in (0, 4, 7, 0x10, 0x11, 0x13, 0x20, 0x30, 0x31):
            return ALL, 0, 0, 0
    covered = [0] * ROWS
    keep = omitted = vectors = store_bytes = 0
    for i in range(len(ops)-1, -1, -1):
        op = ops[i]
        if not op.vectors:
            continue
        lanes = (op.format >> 2) + 1
        lanes = 4 if lanes == 1 else lanes
        mask = (1 << lanes) - 1
        row, position, live = destinations[i], 0, False
        for _ in range(op.vectors):
            live = live or covered[row] & mask != mask
            covered[row] |= mask
            row = (row + 1) & 1023
            position += 1
            if position == op.wl:
                row = (row + op.cl - op.wl) & 1023
                position = 0
        if live:
            keep |= 1 << i
        else:
            omitted += 1
            vectors += op.vectors
            store_bytes += op.vectors * lanes * 4
    return keep, omitted, vectors, store_bytes


def oracle(ops, base=0, tops=0, cycle=0x101, mode=0, keep=ALL):
    """Forward oracle: closed-form destinations, last owners, unique lane witnesses."""
    cells = [(-1, row, lane) for row in range(ROWS) for lane in range(4)]
    owners = [-1] * (ROWS * 4)
    regs = {'base': base & 1023, 'tops': tops & 1023, 'cycle': cycle, 'mode': mode & 3,
            'code': 0, 'num': 0, 'int': 0, 'mark': 0, 'itops': 0, 'ofst': 0}
    events = []
    for index, op in enumerate(ops):
        opcode, imm = (op.code >> 24) & 127, op.code & 65535
        regs['code'], regs['num'] = op.code, (op.code >> 16) & 255
        regs['int'] |= int(bool(op.code & 0x80000000))
        if op.vectors:
            start = ((imm & 1023) + (regs['tops'] if imm & 0x8000 else 0)) & 1023
            events.append((index, start, op.vectors, op.format, op.cl, op.wl))
            if not (keep >> index) & 1:
                continue
            lanes = 4 if op.format < 4 else (op.format >> 2) + 1
            for vector in range(op.vectors):
                row = (start + (vector // op.wl) * op.cl + vector % op.wl) % ROWS
                for lane in range(lanes):
                    cells[row*4 + lane] = (index, vector, lane)
                    owners[row*4 + lane] = index
        elif opcode == 1:
            regs['cycle'] = imm
        elif opcode == 2:
            regs['ofst'] = imm & 1023
            regs['tops'] = regs['base']
        elif opcode == 3:
            regs['base'] = imm & 1023
        elif opcode == 4:
            regs['itops'] = imm & 1023
        elif opcode == 5:
            regs['mode'] = imm & 3
        elif opcode == 7:
            regs['mark'] = imm
    needed = sum(1 << index for index in set(owners) if index >= 0)
    return needed, cells, regs, events


class FinalWriteModelTests(unittest.TestCase):
    def verify(self, ops, **state):
        mask, omitted, vectors, store_bytes = analyze_model(ops, **state)
        expected, full, registers, events = oracle(ops, **state)
        self.assertEqual(mask, expected)
        _, reduced, reduced_registers, reduced_events = oracle(ops, keep=mask, **state)
        self.assertEqual(reduced, full)
        self.assertEqual(reduced_registers, registers)
        self.assertEqual(reduced_events, events)
        dead = [op for index, op in enumerate(ops) if op.vectors and not (mask >> index) & 1]
        self.assertEqual(omitted, len(dead))
        self.assertEqual(vectors, sum(op.vectors for op in dead))
        self.assertEqual(store_bytes, sum(op.vectors * (4 if op.format < 4 else (op.format >> 2)+1)*4 for op in dead))
        return omitted

    def test_full_partial_scalar_and_union_overwrites(self):
        for first in FORMATS:
            for second in FORMATS:
                self.verify([upload(first, 44, 7), upload(second, 44, 7)])
        self.assertEqual(analyze_model([upload(12, 44, 1), upload(8, 44, 1)])[0], 3)
        self.assertEqual(self.verify([upload(12, 44, 4), upload(12, 44, 2), upload(12, 46, 2)]), 1)
        self.assertEqual(self.verify([upload(12, 44, 4), upload(0, 44, 4)]), 1)

    def test_skip_wrap_repeated_rows_and_num_zero(self):
        for cl, wl in ((1, 1), (4, 2), (128, 1), (255, 1), (255, 255)):
            cycle = (wl << 8) | cl
            for start in (0, 900, 1023):
                self.verify([control(1, cycle), upload(12, start, 256, cycle),
                             upload(15, start, 256, cycle)])
        self.verify([control(1, 0), upload(12, 900, 256, 0), upload(12, 900, 256, 0)])

    def test_live_base_tops_offset_controls_and_high_operation_bit(self):
        ops = [upload(12, 4, 3, relative=True), control(3, 1000), control(2, 41),
               upload(12, 4, 3, relative=True), control(7, 22), control(0)]
        for top in (0, 996, 1000, 1023):
            self.verify(ops, base=33, tops=top)
        self.verify([control(0)]*62 + [upload(12, 99, 1), upload(12, 99, 1)])
        self.assertEqual(analyze_model([control(0)]*63 + [upload(12, 99, 1)])[0], 1 << 63)

    def test_unknown_invalid_and_reading_modes_keep_every_upload(self):
        good = upload(12, 10, 7)
        invalids = [replace(good, opcode=0), replace(good, format=8),
                    replace(good, vectors=6), replace(good, cl=2), replace(good, wl=0),
                    replace(good, code=good.code | 0x10000000, opcode=0x7c),
                    upload(3, 10, 7), control(0x14), control(0x50), control(0x4a)]
        for bad in invalids:
            self.assertEqual(analyze_model([good, bad, good]), (ALL, 0, 0, 0))
        for mode in (1, 2, 3):
            self.assertEqual(analyze_model([good, good], mode=mode), (ALL, 0, 0, 0))
        self.assertEqual(analyze_model([upload(12, 10, 7, 0x0201)], cycle=0x0201), (ALL, 0, 0, 0))
        self.assertEqual(analyze_model([]), (ALL, 0, 0, 0))
        self.assertEqual(analyze_model([good]*65), (ALL, 0, 0, 0))

    def test_4096_seeded_mixed_prefixes_match_forward_oracle(self):
        rng = random.Random(0x58424f58)
        dropped = 0
        for case in range(4096):
            cycle = 0x101
            ops = []
            band = rng.randrange(ROWS)
            while len(ops) < rng.randrange(8, 63):
                choice = rng.randrange(10)
                if choice == 0:
                    cl, wl = rng.choice(((1, 1), (4, 2), (128, 1), (17, 3), (255, 255)))
                    cycle = (wl << 8) | cl
                    ops.append(control(1, cycle))
                elif choice == 1:
                    ops.append(control(3, rng.randrange(ROWS)))
                elif choice == 2:
                    ops.append(control(2, rng.randrange(ROWS)))
                elif choice == 3:
                    ops.append(control(rng.choice((0, 4, 7, 0x10, 0x11, 0x13)), rng.randrange(1024)))
                else:
                    op = upload(rng.choice(FORMATS), (band + rng.randrange(8)) & 1023,
                                rng.choice((1, 2, 3, 7, 16, 64, 256)), cycle, bool(rng.randrange(2)))
                    ops.append(op)
                    if len(ops) < 63 and rng.randrange(4) == 0:
                        ops.append(op) # Deliberate exact supersession as well as partial overlap.
            dropped += self.verify(ops, base=rng.randrange(ROWS), tops=rng.randrange(ROWS))
        self.assertGreater(dropped, 4096)
        print(f'4096 model prefixes: {dropped} redundant uploads; full final images and observer traces match.')

    def test_header_still_matches_model_admission_and_lane_contract(self):
        text = (XBOX/'xbox_vif_write_plan.h').read_text()
        for required in ('kRows = 1024u, kMaxOperations = 64u',
                         'return lanes == 1u ? 4u : lanes;',
                         'op.vectors != (num ? num : 256u)',
                         'cl < wl || op.cl != cl || op.wl != wl',
                         'case 0x02u: tops = base;',
                         'live = live || (covered[row] & mask) != mask;',
                         'result.keep |= uint64_t(1) << i;',
                         'result.omittedStoreBytes += op.vectors * lanes * 4u;'):
            self.assertIn(required, text)


if __name__ == '__main__':
    unittest.main()
