#!/usr/bin/env python3
"""code_order.py LOG MAP OUT [--min=N]

Writes the linker order file for TS_CODE_ORDER=1 (src/xbox/Makefile) from a
TS_HWPROF=1 console run: every function the sampler found running, busiest
first, then the callers its stacks saw, so the code a frame runs sits
together at the start of .text instead of spread over 12 MB. The names are
the map's decorated ones, which is what lld-link's -order: matches.

LOG is the run's log (hwrun.py recording or timesplitters.log), MAP the
main.map of the build that was run. Functions seen fewer than --min times
(default 1) are left to the linker.
"""
import collections
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import hwprof_report as H  # noqa: E402


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    opts = dict(a[2:].split('=', 1) for a in sys.argv[1:] if a.startswith('--') and '=' in a)
    if len(args) != 3:
        print(__doc__)
        return 1
    log, map_path, out = args
    minimum = int(opts.get('min', 1))
    syms = H.Symbols(map_path)
    records, _ = H.prof_records(log)
    hot = collections.Counter()
    callers = collections.Counter()
    for seq in sorted(records):
        kind, _, rest = records[seq].partition(' ')
        w = rest.split()
        if kind == 'h':
            for item in w[1:]:
                a, _, c = item.partition(':')
                try:
                    addr, count = int(a, 16), int(c)
                except ValueError:
                    continue
                hot[addr + 8] += count  # middle of the 16-byte bucket
        elif kind == 's':
            for x in w[2:] if w[1] == '+' else w[4:]:
                try:
                    callers[int(x, 16)] += 1
                except ValueError:
                    pass

    def name_of(addr):
        if addr >= 0x80000000 or (syms.text_end and addr >= syms.text_end) or addr < 0x11000:
            return None
        name, _ = syms.look(addr)
        return None if name.startswith('?%') or name.startswith('kernel@') else name

    by_name = collections.Counter()
    for addr, count in hot.items():
        name = name_of(addr)
        if name:
            by_name[name] += count
    order = [n for n, c in by_name.most_common() if c >= minimum]
    seen = set(order)
    caller_names = collections.Counter()
    for addr, count in callers.items():
        name = name_of(addr - 1)  # a return address lies just past its call
        if name and name not in seen:
            caller_names[name] += count
    order += [n for n, _ in caller_names.most_common()]
    with open(out, 'w', newline='\n') as f:
        f.write('\n'.join(order) + '\n')
    print('%d functions (%d sampled running, %d only as callers) -> %s'
          % (len(order), len(order) - len(caller_names), len(caller_names), out))
    return 0


if __name__ == '__main__':
    sys.exit(main())
