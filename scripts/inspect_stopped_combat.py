#!/usr/bin/env python3
"""Read original match counters from a stopped SLUS_200.90 EE-RAM capture.

This neither executes instructions nor writes guest state. Counter meanings for
slots 0..4 follow original StatsKillMade (0x220bc8); StatsAdd (0x223e60)
uses a 0x558-byte player stride and 4-byte floating-point statistics. matchstats
is the ELF's 19,152-byte ARRAY, not a pointer stored at its first element.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import math
from pathlib import Path
import struct

RAM_SIZE = 32 * 1024 * 1024
ELF_SHA256 = '19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2'
MATCHSTATS = 0x32e6a8
STRIDE = 0x558
SLOTS = 14

def inspect(ram: bytes) -> dict:
    if len(ram) != RAM_SIZE:
        raise ValueError('Expected exactly 32 MiB of stopped EE RAM')
    u32 = lambda address: struct.unpack_from('<I', ram, address)[0]
    rows = []
    for slot in range(SLOTS):
        values = list(struct.unpack_from('<5f', ram, MATCHSTATS + slot * STRIDE))
        if not all(math.isfinite(v) for v in values):
            raise ValueError(f'Non-finite original kill/death counters in slot {slot}')
        rows.append(dict(slot=slot, attributed_kills=values[0], deaths=values[1],
                         suicides=values[2], other_character_kills=values[3],
                         deaths_from_other_characters=values[4]))
    player = u32(0x3afa20)
    first = None
    if player:
        if player > RAM_SIZE - 0x184:
            raise ValueError('First player pointer is outside captured EE RAM')
        prop = u32(player + 0x180)
        if prop:
            if prop > RAM_SIZE - 0x20c:
                raise ValueError('First player prop is outside captured EE RAM')
            health = struct.unpack_from('<f', ram, prop + 0x208)[0]
            if not math.isfinite(health):
                raise ValueError('First player health is non-finite')
            first = dict(player_address=hex(player), prop_address=hex(prop), health=health)
    return dict(kind='stopped-RAM observation, not gameplay execution',
                capture_sha256=hashlib.sha256(ram).hexdigest(),
                local_players=u32(0x3ae764), active_characters=u32(0x3afd8c),
                invincible=u32(0x3ae4d8), selected_cheats=hex(u32(0x3ae740)),
                first_player=first, counters=rows,
                caveat='Counter values supplement screenshots/input logs; they do not establish complete combat correctness.')

def main() -> int:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('capture',type=Path)
    p.add_argument('--elf',type=Path,default=Path(__file__).resolve().parents[1]/'project/analysis/extracted/SLUS_200.90')
    p.add_argument('--output',type=Path)
    a=p.parse_args()
    if hashlib.sha256(a.elf.read_bytes()).hexdigest()!=ELF_SHA256:
        raise ValueError('This reader is specific to the verified USA v2.00 ELF')
    text=json.dumps(inspect(a.capture.read_bytes()),indent=2)+'\n'
    if a.output:
        a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(text)
    else:print(text,end='')
    return 0
if __name__=='__main__':
    try:raise SystemExit(main())
    except (OSError,ValueError) as exc:raise SystemExit(f'INSPECTION FAILED: {exc}')
