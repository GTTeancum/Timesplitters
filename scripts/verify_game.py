#!/usr/bin/env python3
from pathlib import Path
import hashlib,json
r=Path(__file__).resolve().parents[1]/'project'
def sha(p):
 with p.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()
try:
 for rec in json.loads((r/'analysis/game-data-manifest.json').read_text()):
  p=r/'game-data'/rec['path']
  if p.stat().st_size!=rec['size'] or sha(p)!=rec['sha256']:raise ValueError('Asset mismatch: '+rec['path'])
 if sha(r/'disc/TimeSplitters.iso')!='1fe0252d57a5e3625ab07770bc881f1ccfc397b5bd6a05f97edd0a9742002397':raise ValueError('ISO mismatch')
except Exception as e:raise SystemExit('Game verification failed. Run scripts/prepare_game.py with the original upload. '+str(e))
print('Original game files and ISO verified')
