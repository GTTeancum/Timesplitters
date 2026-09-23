#!/usr/bin/env python3
"""Bounded native X11 run with real XTEST key input and actual screen captures."""
from pathlib import Path
import argparse,hashlib,json,os,subprocess,time
from PIL import ImageGrab
from probe_events import append_events, edge_sort_key
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--seconds',type=int,default=90);p.add_argument('--label',required=True)
p.add_argument('--binary',type=Path);p.add_argument('--input',type=Path);p.add_argument('--card-root',type=Path)
p.add_argument('--live-input',type=Path,help='Atomically replaced append-only JSON input schedule; same event schema as --input')
a=p.parse_args()
if a.input and a.live_input:p.error('use either --input or --live-input, not both')
if not 1<=a.seconds<=3600 or not a.label or any(c not in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-_' for c in a.label):p.error('invalid seconds/label')
r=Path(__file__).resolve().parents[1];project=r/'project';diag=project/'diagnostics';diag.mkdir(exist_ok=True)
binary=(a.binary or r/'build/timesplitters/timesplitters').resolve()
subprocess.run(['python3',str(r/'scripts/verify_game.py')],check=True)
sha=lambda f:hashlib.sha256(f.read_bytes()).hexdigest()
event_file=a.live_input or a.input
loaded=json.loads(event_file.read_text('utf-8')) if event_file else []
events=append_events([], loaded, a.seconds)
if any(diag.glob(a.label+'-*')) or (diag/(a.label+'.log')).exists():
 raise RuntimeError('Probe label already exists; refusing to overwrite prior evidence')
display=next((f':{n}' for n in range(91,120) if not Path(f'/tmp/.X11-unix/X{n}').exists()),None)
if display is None:raise RuntimeError('no X display')
with (diag/(a.label+'-xvfb.log')).open('wb') as xf,(diag/(a.label+'.log')).open('wb') as log:
 x=subprocess.Popen(['Xvfb',display,'-screen','0','640x480x24','-nolisten','tcp'],stdout=xf,stderr=xf)
 game=None
 try:
  for _ in range(100):
   if Path('/tmp/.X11-unix/X'+display[1:]).exists():break
   if x.poll() is not None:raise RuntimeError('Xvfb failed')
   time.sleep(.05)
  else:raise RuntimeError('X display unavailable')
  env=dict(os.environ,DISPLAY=display,LIBGL_ALWAYS_SOFTWARE='1',TS_DUMP_RAM=str(diag/(a.label+'-ram.bin')))
  if a.card_root:env['TS_MC_ROOT']=str(a.card_root.resolve())
  launch_sha256=sha(binary)
  game=subprocess.Popen([str(binary),str(project/'game-data/SLUS_200.90'),str(a.seconds),str(project/'disc/TimeSplitters.iso')],env=env,stdout=log,stderr=log)
  start=time.monotonic();captures=[];sent=[];next_capture=2.;window=None
  (diag/(a.label+'-live.json')).write_text(json.dumps(dict(display=display,start_monotonic=start,requested_seconds=a.seconds,game_pid=game.pid)))
  while game.poll() is None and time.monotonic()-start<a.seconds+15:
   now=time.monotonic()-start
   if a.live_input:
    document=json.loads(a.live_input.read_text('utf-8'))
    events.extend(append_events(loaded,document,a.seconds));loaded=document;events.sort(key=edge_sort_key)
   while events and events[0][0]<=now:
    sec,action,key=events.pop(0)
    if window is None:
     found=subprocess.run(['xdotool','search','--name','TimeSplitters'],env=env,capture_output=True,text=True,timeout=3,check=True)
     window=found.stdout.splitlines()[-1]
     subprocess.run(['xdotool','windowfocus',window],env=env,check=True,timeout=3)
    dispatched=subprocess.run(['xdotool',action,key],env=env,capture_output=True,text=True,timeout=3)
    sent.append(dict(requested=sec,actual=time.monotonic()-start,action=action,key=key,window=window,returncode=dispatched.returncode,stderr=dispatched.stderr))
    if dispatched.returncode:raise RuntimeError('XTEST input failed')
   if now>=next_capture:
    target=diag/(a.label+f'-{int(next_capture):03}.png');ImageGrab.grab(xdisplay=display).save(target);captures.append(target.name);next_capture+=5
   time.sleep(.04)
  killed=game.poll() is None
  if killed:game.kill()
  rc=game.wait(timeout=5)
  result=dict(requested_seconds=a.seconds,requested_input=loaded,live_input=bool(a.live_input),returncode=rc,outer_killed=killed,elapsed_seconds=time.monotonic()-start,screenshots=captures,binary=str(binary),binary_sha256=launch_sha256,binary_sha256_after=sha(binary),binary_unchanged_during_run=(sha(binary)==launch_sha256),input=sent,undelivered=events,execution='native x86-64 EE AOT with PS2Recomp runtime HLE/IOP/VU support',reference_pcsx2_run=False)
  (diag/(a.label+'-requested-input.json')).write_text(json.dumps(loaded,indent=2)+'\n')
  (diag/(a.label+'-probe.json')).write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(result,indent=2))
 finally:
  if game is not None and game.poll() is None:game.kill();game.wait()
  x.terminate()
  try:x.wait(timeout=3)
  except subprocess.TimeoutExpired:x.kill();x.wait()
