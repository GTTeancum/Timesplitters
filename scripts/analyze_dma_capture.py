#!/usr/bin/env python3
"""Inspect TimeSplitters' original DMA lists in a stopped 32-MiB EE-RAM capture.

This is a structural walk, not a game run or a replacement renderer. It does not
execute VIF/VU/GIF commands. The native component replay verifies the actual GS
SIGNAL separately. This capture contains RAM-backed tags; scratchpad is refused.
"""
from __future__ import annotations
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct

RAM_SIZE=32*1024*1024

def walk(ram: bytes, start: int) -> dict:
    if len(ram)!=RAM_SIZE: raise ValueError('expected exactly 32 MiB EE RAM')
    tags=[];stack=[];seen=set();addr=start;payload_bytes=0
    while True:
        state=(addr,tuple(stack))
        if state in seen: raise ValueError('cyclic DMA chain')
        seen.add(state)
        if len(seen)>1_048_576: raise ValueError('host analysis budget exhausted')
        if addr & 15 or addr<0 or addr>len(ram)-16: raise ValueError('tag outside aligned captured EE RAM')
        low,high=struct.unpack_from('<QQ',ram,addr)
        qwc=low & 0xffff;kind=(low>>28)&7;ref=(low>>32)&0x7fffffff
        if low>>63: raise ValueError('scratchpad address requires an additional capture')
        if low & 0x80000000: raise ValueError('IRQ-bearing tag needs explicit CHCR/TIE context')
        data=ref if kind in (0,3,4) else addr+16
        size=qwc*16
        if data<0 or data>len(ram) or size>len(ram)-data: raise ValueError('payload outside captured EE RAM')
        tail_bytes=ram[data:data+min(size,64)]
        tags.append({'index':len(tags),'tag':hex(addr),'qwc':qwc,'id':kind,
                     'payload':hex(data),'reference':hex(ref),'tag_hi':hex(high),
                     'payload_first_words':[f'{w:08x}' for w in struct.unpack('<'+'I'*(len(tail_bytes)//4),tail_bytes)]})
        payload_bytes+=size
        nxt=addr+16
        if kind in (0,7): break
        if kind==1:nxt=data+size
        elif kind==2:nxt=ref
        elif kind==5:
            if len(stack)==2: raise ValueError('CALL stack exceeds two slots')
            stack.append(data+size);nxt=ref
        elif kind==6:
            if not stack: break
            nxt=stack.pop()
        addr=nxt
    return {'start':hex(start),'tag_count':len(tags),'payload_bytes':payload_bytes,
            'tag_kinds':dict(sorted(Counter(t['id'] for t in tags).items())),
            'old_4096_limit_next_tadr':tags[4096]['tag'] if len(tags)>4096 else None,
            'last_tag':tags[-1],'last_three_tags':tags[-3:]}

def analyze(ram: bytes) -> dict:
    starts=struct.unpack_from('<II',ram,0x3adb00) if len(ram)==RAM_SIZE else (0,0)
    result={'capture_sha256':hashlib.sha256(ram).hexdigest(),'capture_bytes':len(ram),
            'original_elf_sha256':'19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2',
            'kind':'stopped-RAM structural analysis; not native gameplay evidence',
            'lists':[walk(ram,p) for p in starts]}
    result['numdmafail']=struct.unpack_from('<I',ram,0x3adb54)[0]
    return result

def main() -> int:
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('capture',type=Path);p.add_argument('--output',type=Path)
    a=p.parse_args();text=json.dumps(analyze(a.capture.read_bytes()),indent=2)+'\n'
    if a.output:a.output.write_text(text)
    print(text,end='');return 0

if __name__=='__main__':
    try:raise SystemExit(main())
    except (ValueError,OSError,struct.error) as e:raise SystemExit(str(e))
