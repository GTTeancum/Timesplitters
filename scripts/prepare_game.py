#!/usr/bin/env python3
"""Restore exact user-provided assets. No network or alternate game versions."""
from pathlib import Path
import argparse,hashlib,json,mmap,os,subprocess
ARCHIVE_SHA='beb36e65408aacfb735fd0801dc77d69388d51101a6b8341c16c799d3202bb73'
BIN_SHA='e845ad76532dfaf890def246ee8a9cd0e96afe7ed14531580213f3a5d298b3d3'
ISO_SHA='1fe0252d57a5e3625ab07770bc881f1ccfc397b5bd6a05f97edd0a9742002397'
def sha(p):
 with p.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()
def main():
 p=argparse.ArgumentParser(description=__doc__);p.add_argument('original',type=Path);a=p.parse_args()
 root=Path(__file__).resolve().parents[1]/'project';disc=root/'disc';disc.mkdir(parents=True,exist_ok=True)
 src=a.original.resolve()
 if src.suffix.lower()=='.7z':
  if sha(src)!=ARCHIVE_SHA:raise ValueError('Original archive SHA256 mismatch')
  subprocess.run(['7z','x','-y','-o'+str(disc),str(src)],check=True)
  src=disc/'TimeSplitters (USA) (v2.00).bin'
 if sha(src)!=BIN_SHA:raise ValueError('Original disc BIN SHA256 mismatch')
 records=json.loads((root/'analysis/game-data-manifest.json').read_text())
 output=root/'game-data';output.mkdir(exist_ok=True)
 with src.open('rb') as f,mmap.mmap(f.fileno(),0,access=mmap.ACCESS_READ) as m:
  if len(m)!=719502672:raise ValueError('Incorrect raw image size')
  for rec in records:
   rel=Path(rec['path']);dst=output/rel
   if rel.is_absolute() or '..' in rel.parts or not dst.resolve().is_relative_to(output.resolve()):raise ValueError('Unsafe asset path')
   if dst.is_file() and dst.stat().st_size==rec['size'] and sha(dst)==rec['sha256']:continue
   dst.parent.mkdir(parents=True,exist_ok=True);tmp=dst.with_name(dst.name+'.restoring')
   if tmp.is_symlink():raise ValueError('Unsafe temporary asset path')
   remain=rec['size'];sector=rec['lba'];h=hashlib.sha256()
   with tmp.open('wb') as target:
    while remain:
     count=min(remain,2048);chunk=m[sector*2352+24:sector*2352+24+count]
     if len(chunk)!=count:raise ValueError('Truncated sector')
     target.write(chunk);h.update(chunk);remain-=count;sector+=1
   if h.hexdigest()!=rec['sha256']:tmp.unlink();raise ValueError('Asset SHA256 mismatch: '+rec['path'])
   os.replace(tmp,dst)
  iso=disc/'TimeSplitters.iso'
  if not iso.is_file() or sha(iso)!=ISO_SHA:
   tmp=iso.with_suffix('.restoring')
   if tmp.is_symlink():raise ValueError('Unsafe temporary ISO path')
   h=hashlib.sha256()
   with tmp.open('wb') as out:
    for sector in range(len(m)//2352):
     chunk=m[sector*2352+24:sector*2352+2072];out.write(chunk);h.update(chunk)
   if h.hexdigest()!=ISO_SHA:tmp.unlink();raise ValueError('ISO SHA256 mismatch')
   os.replace(tmp,iso)
 print('Verified/restored',len(records),'original files and the data-sector ISO')
if __name__=='__main__':
 try:main()
 except Exception as exc:raise SystemExit('PREPARE FAILED: '+str(exc))
