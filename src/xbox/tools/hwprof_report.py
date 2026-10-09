#!/usr/bin/env python3
"""hwprof_report.py LOG [MAP] [--top N] [--per-thread N]

Reads the [TS:prof] lines of a TS_HWPROF=1 build (xbox_hwprof.cpp) and
symbolises them with the link map.

LOG may be
  - an XBDM notification recording: `22:26:44 debugstr thread=56 lf string=...`
    (a string without the `lf` flag continues in the next one from the same
    thread; several [TS:...] messages may share one string),
  - E:\\TimeSplitters\\timesplitters.log copied off the console,
  - any text holding [TS:prof] lines (e.g. a gdb capture).
MAP defaults to D:\\Programming\\GitHub\\Timesplitters\\build\\xbox\\main.map; it
must be the map of the build that was run.
"""
import bisect
import collections
import re
import sys

DEFAULT_MAP = r'D:\Programming\GitHub\Timesplitters\build\xbox\main.map'

# Categories, as in prof2.py (object file name -> category), plus native game code.
OBJ_CATEGORIES = [
    ('vu1_native', 'VU native'), ('vu1_ts', 'VU translated'), ('gs_nv2a', 'Xbox renderer'),
    ('pbkit', 'GPU push buffer'), ('gs_frontend', 'GS front end'), ('gs_cpu_backend', 'software renderer'),
    ('ps2_gs_memory', 'software renderer'), ('ps2_gif', 'GS front end'), ('ps2_memory', 'DMA/VIF/memory'),
    ('ps2_vif1', 'DMA/VIF/memory'), ('eescheduler', 'EE scheduler'), ('ps2_runtime', 'runtime'),
    ('iop', 'IOP/sound'), ('spu', 'IOP/sound'), ('ps2_music', 'IOP/sound'), ('ps2_audio', 'IOP/sound'),
    ('libsd', 'IOP/sound'), ('ts_native', 'game code (native)'), ('xbox_', 'Xbox platform'),
    ('libc', 'C library'), ('libcxx', 'C++ library'), ('winapi', 'winapi'), ('nxdk', 'nxdk'),
]


def load_map(path):
    syms = []
    seen = set()
    with open(path, encoding='latin-1') as f:
        lines = f.read().splitlines()
    for line in lines:
        m = re.match(r'\s*([0-9a-f]{4}):[0-9a-f]{8}\s+(\S+)\s+([0-9a-f]{8,16})\s+(\S+)?', line)
        if not m:
            continue
        addr = int(m.group(3), 16)
        if addr in seen:  # identical code folded under several names: keep the first
            continue
        seen.add(addr)
        syms.append((addr, m.group(2), m.group(4) or ''))
    syms.sort()
    return syms, [a for a, _, _ in syms]


class Symbols:
    def __init__(self, path):
        self.syms, self.addrs = load_map(path)
        self.end = self.addrs[-1] + 0x10000 if self.addrs else 0
        self.clock_block = None

    def look(self, addr):
        if addr >= 0x80000000:  # no symbols: 256-byte blocks of the kernel
            block = addr & ~0xff
            return 'kernel@%08x%s' % (block, ' (clock interrupt)' if block == self.clock_block else ''), 'xboxkrnl'
        i = bisect.bisect_right(self.addrs, addr) - 1
        if i < 0 or addr > self.end:
            return '?%08x' % addr, ''
        return self.syms[i][1], self.syms[i][2]


def demangle_short(name):
    """A readable short form of an MSVC-mangled name (no external tools)."""
    if name.startswith('?'):
        m = re.match(r'\?+([^@]+)@(?:([^@]+)@)?', name)
        if m:
            fn = m.group(1)
            cls = m.group(2)
            if cls and not cls.startswith('?') and not cls.startswith('$'):
                return '%s::%s' % (cls, fn)
            return fn
    return name


def category(name, obj, idle):
    if idle:
        return 'kernel idle'
    if name.startswith('kernel@'):
        return 'kernel (not idle)'
    if re.search(r'_0x[0-9a-f]{5,6}@@YAXPAEPAUR5900Context', name):
        return 'game code (translated)'
    o = obj.lower()
    for key, cat in OBJ_CATEGORIES:
        if key in o:
            return cat
    return 'other:' + (obj or name)


def payloads(path):
    """The logged text, notification framing removed and split strings rejoined."""
    pending = collections.defaultdict(str)
    note = re.compile(r'^\S+ debugstr thread=(\d+) (\S*) ?string=(.*)$')
    with open(path, encoding='latin-1') as f:
        lines = f.read().splitlines()
    for raw in lines:
        raw = raw.rstrip('\r\n')
        m = note.match(raw)
        if not m:
            yield raw
            continue
        thread, flags, text = m.groups()
        pending[thread] += text
        if 'lf' in flags.split(','):
            yield pending.pop(thread)
    for text in pending.values():
        yield text


def prof_records(path):
    """(seq, text) of every [TS:prof] message; repeats dropped."""
    seen = {}
    unnumbered = []
    for text in payloads(path):
        for part in text.split('[TS:prof] ')[1:]:
            cut = part.find('[TS:')  # another message glued on
            if cut >= 0:
                part = part[:cut]
            part = part.strip()
            m = re.match(r'#(\d+) (.*)$', part)
            if m:
                seen.setdefault(int(m.group(1)), m.group(2))
            else:
                unnumbered.append(part)
    return seen, unnumbered


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    opts = dict(a[2:].split('=', 1) for a in sys.argv[1:] if a.startswith('--') and '=' in a)
    if not args:
        print(__doc__)
        return 1
    top_n = int(opts.get('top', 60))
    per_thread_n = int(opts.get('per-thread', 15))
    syms = Symbols(args[1] if len(args) > 1 else DEFAULT_MAP)
    records, unnumbered = prof_records(args[0])
    main_id = None
    for line in unnumbered:
        print('note:', line)
        m = re.match(r'init thread=\S+ id=(\d+)', line)
        if m:
            main_id = m.group(1)
        m = re.search(r'handlers ([0-9a-f]+)/', line)
        if m:  # the kernel clock interrupt's entry (samples held back behind it land there)
            syms.clock_block = int(m.group(1), 16) & ~0xff
    if not records:
        print('no numbered [TS:prof] lines found')
        return 1

    begin = frame = gpu = None
    fh = ''
    threads = {}
    hist = collections.Counter()  # (slot, addr) -> count
    end_lines = None
    for seq in sorted(records):
        text = records[seq]
        kind, _, rest = text.partition(' ')
        if kind == 'begin':
            begin = dict(kv.split('=', 1) for kv in rest.split() if '=' in kv)
        elif kind == 'frame':
            frame = dict(kv.split('=', 1) for kv in rest.split() if '=' in kv)
        elif kind == 'fh':  # several lines (10 bins each); older logs have one
            fh += ' ' + rest
        elif kind == 'gpu':
            gpu = dict(kv.split('=', 1) for kv in rest.split() if '=' in kv)
        elif kind == 't':
            w = rest.split()
            info = dict(kv.split('=', 1) for kv in w[1:] if '=' in kv)
            threads[int(w[0])] = info
        elif kind == 'h':
            w = rest.split()
            slot = int(w[0])
            for item in w[1:]:
                a, _, c = item.partition(':')
                try:
                    hist[(slot, int(a, 16))] += int(c)
                except ValueError:
                    pass  # a damaged entry
        elif kind == 'end':
            m = re.search(r'lines=(\d+)', rest)
            end_lines = int(m.group(1)) if m else None

    expected = end_lines if end_lines else max(records) + 1
    missing = [i for i in range(expected) if i not in records]
    if missing:
        print('WARNING: %d of %d [TS:prof] lines missing (e.g. #%s); use the log file from the disk if possible'
              % (len(missing), expected, ', #'.join(map(str, missing[:8]))))
    if end_lines is None:
        print('WARNING: no end line: the dump is incomplete')
    if not begin:
        print('no begin line')
        return 1

    src = begin.get('src')
    hz = int(begin.get('hz', 1000))
    ms = int(begin.get('ms', 0))
    print('== window: script reads %s, %.1f s, %s game frames, CPU %s MHz, sampled by %s at %d Hz'
          % (begin.get('reads'), ms / 1000.0, begin.get('frames'), begin.get('mhz'),
             'the CMOS clock' if src == 'rtc' else 'the kernel clock tick', hz))
    print('   table %s/%s entries, %s samples without room, %s saturated, threshold %s'
          % (begin.get('used'), begin.get('table'), begin.get('drops'), begin.get('sat'), begin.get('minc')))
    if frame:
        f_us = int(frame.get('us', 0))
        print('== per game frame: %.2f ms (%.1f fps); EE scheduler waiting %.2f ms; renderer spinning on the GPU %.2f ms'
              % (f_us / 1000, 1e6 / f_us if f_us else 0, int(frame.get('eewait_us', 0)) / 1000,
                 int(frame.get('gpuwait_us', 0)) / 1000))
    if fh.strip():
        print('   frame times (ms bin:frames):', ' '.join(fh.split()))
    if gpu and int(gpu.get('samples', 0)):
        n = int(gpu['samples'])
        print('   of all samples: kernel idle %.1f%%; GPU busy %.1f%% (graphics engine %.1f%%, commands queued %.1f%%)%s'
              % (100.0 * int(gpu.get('idle', 0)) / n, 100.0 * int(gpu.get('busy', 0)) / n,
                 100.0 * int(gpu.get('graph', 0)) / n, 100.0 * int(gpu.get('fifo', 0)) / n,
                 '' if gpu.get('ready') == '1' else ' (GPU not sampled: no NV2A renderer)'))

    # Thread table.
    srckey = 'rtc' if src == 'rtc' else 'pit'
    other = 'pit' if src == 'rtc' else 'rtc'
    total = sum(int(t.get(srckey, 0)) for t in threads.values()) or 1
    total_other = sum(int(t.get(other, 0)) for t in threads.values())
    names = {}
    for slot, t in sorted(threads.items()):
        if t.get('idle') == '1':
            names[slot] = 'idle'
        else:
            start = int(t.get('start', '0'), 16)
            name, _ = syms.look(start) if start else ('?', '')
            label = 'main' if t.get('id') == main_id else demangle_short(name)[:40]
            names[slot] = 'id %s %s' % (t.get('id'), label)
    print('== threads (share of all samples; the other clock\'s share as a cross-check; DPC/ISR = samples at IRQL>=2)')
    for slot, t in sorted(threads.items(), key=lambda kv: -int(kv[1].get(srckey, 0))):
        n = int(t.get(srckey, 0))
        o = int(t.get(other, 0))
        print('  %2d %-48s %6d %5.1f%%  (%s %5.1f%%)  DPC/ISR %4.1f%%  unlisted %s  no-room %s'
              % (slot, names[slot], n, 100.0 * n / total, other, 100.0 * o / total_other if total_other else 0,
                 100.0 * int(t.get('hi', 0)) / n if n else 0, t.get('unlisted'), t.get('drops')))
    idle = sum(int(t.get(srckey, 0)) for t in threads.values() if t.get('idle') == '1')
    print('   kernel idle: %.1f%% of the CPU' % (100.0 * idle / total))

    # Aggregate by function.
    func = collections.Counter()
    func_thread = collections.defaultdict(collections.Counter)
    cats = collections.Counter()
    cats_thread = collections.defaultdict(collections.Counter)
    objs = {}
    for (slot, addr), c in hist.items():
        is_idle = threads.get(slot, {}).get('idle') == '1'
        name, obj = syms.look(addr + 8)  # middle of the 16-byte bucket
        objs[name] = obj
        func[name] += c
        func_thread[slot][name] += c
        cat = category(name, obj, is_idle)
        cats[cat] += c
        cats_thread[slot][cat] += c
    unlisted = sum(int(t.get('unlisted', 0)) + int(t.get('drops', 0)) for t in threads.values())
    print('== categories (all threads; %d samples in buckets below the listing threshold not attributed)' % unlisted)
    small = 0
    for cat, c in cats.most_common():
        if 100.0 * c / total < 0.1:
            small += c
            continue
        print('  %5.1f%% %s' % (100.0 * c / total, cat))
    if small:
        print('  %5.1f%% (smaller categories)' % (100.0 * small / total))
    print('== per thread categories (% of all samples)')
    for slot in sorted(threads, key=lambda s: -int(threads[s].get(srckey, 0))):
        n = int(threads[slot].get(srckey, 0))
        if not n or names[slot] == 'idle':
            continue
        parts = ', '.join('%s %.1f%%' % (cat, 100.0 * c / total) for cat, c in cats_thread[slot].most_common(6))
        print('  %-48s %s' % (names[slot], parts))
    print('== top %d functions (all threads, %% of all samples)' % top_n)
    for name, c in func.most_common(top_n):
        print('  %5.1f%% %6d  %-70s %s' % (100.0 * c / total, c, demangle_short(name)[:70], objs[name][:28]))
    for slot in sorted(threads, key=lambda s: -int(threads[s].get(srckey, 0))):
        n = int(threads[slot].get(srckey, 0))
        if not n or names[slot] == 'idle' or 100.0 * n / total < 0.5:
            continue
        print('== %s: top %d (%% of this thread)' % (names[slot], per_thread_n))
        for name, c in func_thread[slot].most_common(per_thread_n):
            print('  %5.1f%% %6d  %-70s %s' % (100.0 * c / n, c, demangle_short(name)[:70], objs[name][:28]))
    return 0


if __name__ == '__main__':
    sys.exit(main())
