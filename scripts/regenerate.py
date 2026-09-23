#!/usr/bin/env python3
"""Regenerate original EE AOT C++ using the checkpoint's recompiler changes."""
from pathlib import Path
import argparse,json,subprocess,hashlib
r=Path(__file__).resolve().parents[1];p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--recompiler',type=Path,default=r/'build/ps2xRecomp/ps2_recomp');p.add_argument('--output',type=Path,default=r/'project/generated');a=p.parse_args()
elf=r/'project/analysis/extracted/SLUS_200.90'
if hashlib.sha256(elf.read_bytes()).hexdigest()!='19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2':raise SystemExit('ELF SHA256 mismatch')
template=(r/'project/config/timesplitters.toml').read_text()
lines=[]
for line in template.splitlines():
 if line.startswith('input ='):line='input = '+json.dumps(elf.as_posix())
 if line.startswith('output ='):line='output = '+json.dumps(a.output.resolve().as_posix())
 lines.append(line)
cfg=r/'project/config/runtime-paths.toml';cfg.write_text('\n'.join(lines)+'\n')
subprocess.run([str(a.recompiler.resolve()),str(cfg)],check=True)
