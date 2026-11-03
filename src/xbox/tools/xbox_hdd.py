"""Read files from an xemu hard disk image (qcow2 holding a retail FATX layout).

xbox_hdd.py ls IMAGE PATH            list a directory, e.g. E:\\TimeSplitters\\models
xbox_hdd.py get IMAGE PATH OUTDIR    copy a directory's files (not subdirectories) to OUTDIR

Read-only: the image is never written. xemu must not be running on it (its
writes may not have reached the file). Supports uncompressed qcow2 clusters
(what xemu writes) and raw images; partitions C, E, X, Y, Z at the retail
offsets.
"""
from __future__ import annotations

import os
import struct
import sys
from pathlib import Path

PARTITIONS = {
    'X': (0x00080000, 0x2EE00000),
    'Y': (0x2EE80000, 0x2EE00000),
    'Z': (0x5DC80000, 0x2EE00000),
    'C': (0x8CA80000, 0x1F400000),
    'E': (0xABE80000, 0x1312D6000),
}


class Image:
    """Byte reads at virtual offsets of a qcow2 (v2/v3, no backing file) or raw image."""

    def __init__(self, path: Path):
        self.f = open(path, 'rb')
        head = self.f.read(104)
        self.qcow = head[:4] == b'QFI\xfb'
        if not self.qcow:
            return
        (version, backing_offset, _, cluster_bits, _size, crypt, l1_size,
         l1_offset) = struct.unpack('>IQIIQIIQ', head[4:48])
        if backing_offset:
            raise ValueError('qcow2 images with a backing file are not supported')
        if crypt:
            raise ValueError('encrypted qcow2 images are not supported')
        self.version = version
        self.cluster_bits = cluster_bits
        self.cluster = 1 << cluster_bits
        self.l2_entries = self.cluster // 8
        self.f.seek(l1_offset)
        self.l1 = struct.unpack(f'>{l1_size}Q', self.f.read(8 * l1_size))
        self.l2_cache: dict[int, tuple[int, ...]] = {}

    def _l2(self, offset: int) -> tuple[int, ...]:
        table = self.l2_cache.get(offset)
        if table is None:
            self.f.seek(offset)
            table = struct.unpack(f'>{self.l2_entries}Q', self.f.read(self.cluster))
            self.l2_cache[offset] = table
        return table

    def read(self, offset: int, length: int) -> bytes:
        if not self.qcow:
            self.f.seek(offset)
            return self.f.read(length)
        out = bytearray()
        while length > 0:
            in_cluster = offset & (self.cluster - 1)
            chunk = min(length, self.cluster - in_cluster)
            index = offset >> self.cluster_bits
            l1_index, l2_index = divmod(index, self.l2_entries)
            data = None
            if l1_index < len(self.l1):
                l2_offset = self.l1[l1_index] & 0x00FFFFFFFFFFFE00
                if l2_offset:
                    entry = self._l2(l2_offset)[l2_index]
                    if entry & (1 << 62):
                        raise ValueError('compressed qcow2 clusters are not supported')
                    host = entry & 0x00FFFFFFFFFFFE00
                    zero = self.version >= 3 and (entry & 1)
                    if host and not zero:
                        self.f.seek(host + in_cluster)
                        data = self.f.read(chunk)
            out += data if data is not None else bytes(chunk)
            offset += chunk
            length -= chunk
        return bytes(out)


class Fatx:
    def __init__(self, image: Image, letter: str):
        self.image = image
        self.base, self.size = PARTITIONS[letter.upper()]
        sb = image.read(self.base, 18)
        magic, _volume, sectors, root = struct.unpack('<4sIII', sb[:16])
        if magic != b'FATX':
            raise ValueError(f'{letter}: no FATX superblock')
        self.cluster = sectors * 512
        self.root = root
        clusters = self.size // self.cluster
        self.entry = 2 if clusters < 0xFFF0 else 4
        fat_bytes = (clusters + 1) * self.entry
        fat_bytes = (fat_bytes + 0xFFF) & ~0xFFF
        self.fat_offset = self.base + 0x1000
        self.data = self.fat_offset + fat_bytes

    def _next(self, cluster: int) -> int:
        raw = self.image.read(self.fat_offset + cluster * self.entry, self.entry)
        value = struct.unpack('<H' if self.entry == 2 else '<I', raw)[0]
        end = 0xFFF0 if self.entry == 2 else 0xFFFFFFF0
        return 0 if value >= end or value == 0 else value

    def _chain(self, first: int, limit: int | None = None):
        cluster, seen = first, 0
        while cluster and (limit is None or seen < limit):
            yield cluster
            seen += 1
            cluster = self._next(cluster)

    def _cluster_bytes(self, cluster: int) -> bytes:
        return self.image.read(self.data + (cluster - 1) * self.cluster, self.cluster)

    def entries(self, first: int):
        for cluster in self._chain(first):
            raw = self._cluster_bytes(cluster)
            for at in range(0, len(raw), 64):
                e = raw[at:at + 64]
                n = e[0]
                if n in (0x00, 0xFF):
                    return
                if n == 0xE5 or n > 42:
                    continue
                attributes = e[1]
                name = e[2:2 + n].decode('latin1')
                start, size = struct.unpack('<II', e[44:52])
                yield name, bool(attributes & 0x10), start, size

    def lookup(self, parts: list[str]) -> tuple[int, bool, int]:
        cluster, is_dir, size = self.root, True, 0
        for part in parts:
            if not is_dir:
                raise FileNotFoundError(part)
            for name, d, start, s in self.entries(cluster):
                if name.lower() == part.lower():
                    cluster, is_dir, size = start, d, s
                    break
            else:
                raise FileNotFoundError(part)
        return cluster, is_dir, size

    def read_file(self, first: int, size: int) -> bytes:
        out = bytearray()
        for cluster in self._chain(first, (size + self.cluster - 1) // self.cluster):
            out += self._cluster_bytes(cluster)
        return bytes(out[:size])


def split(path: str) -> tuple[str, list[str]]:
    letter, _, rest = path.partition(':')
    return letter, [p for p in rest.replace('/', '\\').split('\\') if p]


def main() -> int:
    if len(sys.argv) not in (4, 5) or sys.argv[1] not in ('ls', 'get'):
        print(__doc__, file=sys.stderr)
        return 2
    image = Image(Path(sys.argv[2]))
    letter, parts = split(sys.argv[3])
    fs = Fatx(image, letter)
    try:
        cluster, is_dir, _ = fs.lookup(parts)
    except FileNotFoundError as missing:
        print(f'xbox_hdd: {sys.argv[3]}: {missing} not found', file=sys.stderr)
        return 1
    if not is_dir:
        print(f'xbox_hdd: {sys.argv[3]} is not a directory', file=sys.stderr)
        return 1
    if sys.argv[1] == 'ls':
        for name, d, _start, size in fs.entries(cluster):
            print(f'{"<dir>" if d else size:>12}  {name}')
        return 0
    if len(sys.argv) != 5:
        print(__doc__, file=sys.stderr)
        return 2
    out = Path(sys.argv[4])
    out.mkdir(parents=True, exist_ok=True)
    copied = 0
    for name, d, start, size in fs.entries(cluster):
        if d:
            continue
        data = fs.read_file(start, size)
        tmp = out / (name + '.part')
        tmp.write_bytes(data)
        os.replace(tmp, out / name)
        copied += 1
    print(f'xbox_hdd: {copied} files to {out}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
