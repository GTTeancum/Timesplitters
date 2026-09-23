#!/usr/bin/env python3
"""Capture a bounded native Linux run. Does not run PCSX2 or synthesize game images."""
from pathlib import Path
import argparse,hashlib,json,os,subprocess,time
from PIL import ImageGrab
p=argparse.ArgumentParser(description=__doc__);p.add_argument('--seconds',type=int,default=12)
p.add_argument('--label',default='native-probe');p.add_argument('--binary',type=Path);a=p.parse_args()
if not 1<=a.seconds<=3600:raise SystemExit('seconds must be 1..3600')
if not a.label or any(c not in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_' for c in a.label):raise SystemExit('Invalid label')
r=Path(__file__).resolve().parents[1];project=r/'project';diag=project/'diagnostics';diag.mkdir(exist_ok=True)
binary=(a.binary or r/'bin/timesplitters').resolve()
subprocess.run(['python3',str(r/'scripts/verify_game.py')],check=True)
with binary.open('rb') as f:binary_sha=hashlib.file_digest(f,'sha256').hexdigest()
display=next((f':{n}' for n in range(91,120) if not Path(f'/tmp/.X11-unix/X{n}').exists()),None)
if display is None:raise SystemExit('No free diagnostic X display')
with (diag/(a.label+'-xvfb.log')).open('wb') as xf,(diag/(a.label+'.log')).open('wb') as log:
 x=subprocess.Popen(['Xvfb',display,'-screen','0','640x448x24','-nolisten','tcp'],stdout=xf,stderr=xf)
 game=None
 try:
  for _ in range(100):
   if Path('/tmp/.X11-unix/X'+display[1:]).exists():break
   if x.poll() is not None:raise RuntimeError('Xvfb failed')
   time.sleep(.05)
  else:raise RuntimeError('Xvfb did not create its display')
  env=dict(os.environ,DISPLAY=display,LIBGL_ALWAYS_SOFTWARE='1',TS_DUMP_RAM=str(diag/(a.label+'-ram.bin')))
  game=subprocess.Popen([str(binary),str(project/'game-data/SLUS_200.90'),str(a.seconds),str(project/'disc/TimeSplitters.iso')],env=env,stdout=log,stderr=log)
  start=time.monotonic();captures=[];next_capture=2.0
  while game.poll() is None and time.monotonic()-start<a.seconds+10:
   if time.monotonic()-start>=next_capture:
    target=diag/(a.label+f'-{int(next_capture):03}.png')
    try:ImageGrab.grab(xdisplay=display).save(target);captures.append(target.name)
    except Exception as e:log.write(('Screenshot failed: '+str(e)+'\n').encode());log.flush()
    next_capture+=5.0
   time.sleep(.05)
  killed=game.poll() is None
  if killed:game.kill()
  rc=game.wait(timeout=5)
  result=dict(returncode=rc,outer_killed=killed,elapsed_seconds=time.monotonic()-start,screenshots=captures,binary=str(binary),binary_sha256=binary_sha,
              execution='native x86-64 EE AOT with PS2Recomp HLE/runtime and IOP emulation',reference_pcsx2_run=False)
  (diag/(a.label+'-probe.json')).write_text(json.dumps(result,indent=2)+'\n')
  (diag/(a.label+'.exit')).write_text(str(rc)+'\n');print(json.dumps(result))
 finally:
  if game is not None and game.poll() is None:game.kill();game.wait()
  x.terminate()
  try:x.wait(timeout=3)
  except subprocess.TimeoutExpired:x.kill();x.wait()
