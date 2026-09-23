#!/usr/bin/env python3
"""Verify every packaged file against CHECKPOINT-MANIFEST.json (no network)."""
from pathlib import Path
import hashlib,json
root=Path(__file__).resolve().parents[1]
try:
 manifest=json.loads((root/'CHECKPOINT-MANIFEST.json').read_text())
 seen=set()
 for rec in manifest['files']:
  rel=Path(rec['path']);p=root/rel
  if rel.is_absolute() or '..' in rel.parts or rec['path'] in seen or not p.resolve().is_relative_to(root):raise ValueError('Unsafe manifest path')
  seen.add(rec['path'])
  if not p.is_file() or p.stat().st_size!=rec['size']:raise ValueError('Missing/truncated file: '+rec['path'])
  with p.open('rb') as f:digest=hashlib.file_digest(f,'sha256').hexdigest()
  if digest!=rec['sha256']:raise ValueError('Hash mismatch: '+rec['path'])
 print('Verified',len(seen),'checkpoint files')
except Exception as e:raise SystemExit('CHECKPOINT VERIFICATION FAILED: '+str(e))
