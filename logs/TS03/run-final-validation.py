from pathlib import Path
import subprocess,json,hashlib,time,shutil
r=Path('/mnt/data/TimeSplitters_TS03_Checkpoint');logs=r/'logs/TS03'
end=time.monotonic()+900
while not (logs/'clean-regenerate.exit').exists():
 for name in ['clean-build.exit','clean-tests.exit']:
  f=logs/name
  if f.exists() and f.read_text().strip()!='0':raise RuntimeError(name+' failed')
 if time.monotonic()>end:raise TimeoutError('clean build validation deadline')
 time.sleep(2)
assert (logs/'clean-regenerate.exit').read_text().strip()=='0'
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
inputs=json.loads((r/'provenance/clean-build-source-inputs.json').read_text())
assert all(sha(r/x['path'])==x['sha256'] for x in inputs),'source changed during clean build'
a=r/'test-work/clean-regenerated';b=r/'project/generated'
aa={p.relative_to(a).as_posix():sha(p) for p in a.rglob('*') if p.is_file()}
bb={p.relative_to(b).as_posix():sha(p) for p in b.rglob('*') if p.is_file()}
assert aa==bb,'regenerated output differs'
(r/'provenance/TS03-regeneration-verification.json').write_text(json.dumps(dict(generated_files=len(aa),byte_identical=True,recompiler_sha256=sha(r/'build-clean/ps2xRecomp/ps2_recomp'),clean_build_source_inputs_unchanged=True),indent=2)+'\n')
for name,src in [('timesplitters','build-clean/timesplitters/timesplitters'),('ps2_recomp','build-clean/ps2xRecomp/ps2_recomp')]:
 shutil.copy2(r/src,r/'bin'/name)
(r/'provenance/TS03-native-identities.json').write_text(json.dumps({name:dict(size=(r/'bin'/name).stat().st_size,sha256=sha(r/'bin'/name)) for name in ['timesplitters','ps2_recomp']},indent=2)+'\n')
card=r/'test-work/final-native-card/mc0';assert not card.exists();card.mkdir(parents=True)
for label,seconds,inputs in [('ts03-final-create',125,'create-save.json'),('ts03-final-tomb',250,'tomb-final.json')]:
 with (logs/(label+'-launch.log')).open('wb') as log:
  subprocess.run(['python3',str(r/'scripts/probe_with_input.py'),'--seconds',str(seconds),'--label',label,'--binary',str(r/'bin/timesplitters'),'--input',str(r/'project/tools/input-sequences'/inputs),'--card-root',str(card)],stdout=log,stderr=subprocess.STDOUT,check=True,timeout=seconds+35)
 result=json.loads((r/'project/diagnostics'/(label+'-probe.json')).read_text())
 if result['returncode']!=10 or result['outer_killed'] or not result['binary_unchanged_during_run']:raise RuntimeError('Unexpected native probe stop: '+label)
 files={p.relative_to(card.parent).as_posix():dict(size=p.stat().st_size,sha256=sha(p)) for p in sorted(card.parent.rglob('*')) if p.is_file()}
 (r/'provenance'/(label+'-card-files.json')).write_text(json.dumps(files,indent=2)+'\n')
 if label=='ts03-final-create':
  assert any(p.endswith('BASLUS-20090-TS1-OPT') and x['size']==47000 for p,x in files.items()),'native save not created'
(logs/'final-native-validation.exit').write_text('0\n')
