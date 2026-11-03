"""Make one autoplay script per arcade level from test/arcade-4p.pad.

make_level_pads.py OUTDIR COUNT [--key right|down] [--template PAD]

Script N moves the Select Level cursor N times (with --key) before taking
the level, so OUTDIR/level-00.pad .. level-<COUNT-1>.pad cover the first
COUNT entries of the arcade level list. Used by harvest_models.sh to visit
every level once. The list's order and which key moves through it are the
game's; check one script's level by screenshot before a full harvest.
"""
from __future__ import annotations

import argparse
from pathlib import Path

ANCHOR = '# Select Level: Tomb, Deathmatch.\n2 cross\n'


def main() -> int:
    here = Path(__file__).resolve().parent
    ap = argparse.ArgumentParser()
    ap.add_argument('outdir', type=Path)
    ap.add_argument('count', type=int)
    ap.add_argument('--key', default='right', choices=('right', 'down', 'left', 'up'))
    ap.add_argument('--template', type=Path, default=here.parent / 'test' / 'arcade-4p.pad')
    args = ap.parse_args()
    text = args.template.read_text().replace('\r\n', '\n')
    if text.count(ANCHOR) != 1:
        raise SystemExit(f'make_level_pads: {args.template}: Select Level block not found once')
    args.outdir.mkdir(parents=True, exist_ok=True)
    for n in range(args.count):
        moves = ''.join(f'2 {args.key}\n10 none\n' for _ in range(n))
        block = f'# Select Level: entry {n} of the list ({n} x {args.key}).\n{moves}2 cross\n'
        (args.outdir / f'level-{n:02d}.pad').write_text(text.replace(ANCHOR, block))
    print(f'make_level_pads: {args.count} scripts in {args.outdir}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
