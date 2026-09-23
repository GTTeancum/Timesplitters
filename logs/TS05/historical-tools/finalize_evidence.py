#!/usr/bin/env python3
"""Read completed native probes and stopped captures. No game execution/state edits."""
from pathlib import Path
import hashlib,json,re,shutil,subprocess
R=Path('/mnt/data/TimeSplitters_TS05_Checkpoint')
D=R/'project/diagnostics'
A=R/'project/analysis/TS05'
def h(p):
 with p.open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()
def write(p,d):p.write_text(json.dumps(d,indent=2)+'\n')
def cards(p):
 return [{'path':x.relative_to(p).as_posix(),'size':x.stat().st_size,'sha256':h(x)} for x in sorted(p.rglob('*')) if x.is_file()]
def memory(label,log):
 matches=re.findall(r'\[Audio:VoiceTrans\] core=(\d+) src=(0x[0-9a-f]+) dest=(0x[0-9a-f]+) size=(0x[0-9a-f]+) mode=(0x[0-9a-f]+) copied=(\d+) physical=(\d+)',log)
 transfers=[dict(core=int(m[0]),iop_address=int(m[1],16),spu_address=int(m[2],16),requested=int(m[3],16),mode=int(m[4],16),copied=bool(int(m[5])),physical=int(m[6])) for m in matches]
 p=D/f'{label}-ram.bin.spu.bin'
 if not p.exists():
  p=D/f'{label}-ram.bin.spu.bin' # exact dump spelling is checked below; never substitute another run
 if not p.exists():return None
 spu=p.read_bytes();iop=(D/f'{label}-ram.bin.iop.bin').read_bytes()
 assert len(spu)==2*1024*1024 and len(iop)==2*1024*1024
 st=re.search(r'\[TS:sound-memory\] writes=(\d+) bytes_written=(\d+) reads=(\d+) bytes_read=(\d+)',log)
 assert st
 out=dict(label=label,transfers=len(transfers),all_recorded_copies_succeeded=all(t['copied'] for t in transfers),physical_bytes_sum=sum(t['physical'] for t in transfers if t['copied']),stopped_backend_counters=dict(zip(('writes','bytes_written','reads','bytes_read'),map(int,st.groups()))),spu_dump_sha256=h(p),spu_nonzero_bytes=sum(bool(b) for b in spu),mixing_or_output_verified=False)
 if transfers:
  last=transfers[-1];out['last_transfer']=last;src=iop[last['iop_address']:last['iop_address']+last['physical']];s=last['spu_address'] & 0x1ffffe;n=last['physical'];dst=(spu+spu)[s:s+n]
  out['last_transfer_source_survives_and_matches_destination']=len(src)==len(dst)==n and src==dst
  out['last_transfer_iop_sha256']=hashlib.sha256(src).hexdigest();out['last_transfer_spu_sha256']=hashlib.sha256(dst).hexdigest()
 write(A/f'{label}-sound-memory.json',out)
 return out

def main():
 results={};base_cards=cards(D/'native-created-card/mc0');final_hash=h(R/'bin/timesplitters')
 for label in ('ts05-format','ts05-story-candidate','ts05-final-story','ts05-final-arcade'):
  d=json.loads((D/f'{label}-probe.json').read_text());log=(D/f'{label}.log').read_text(errors='replace')
  assert d['returncode']==10 and not d['outer_killed'] and d['binary_unchanged_during_run']
  assert not d['undelivered'] and all(e['returncode']==0 for e in d['input'])
  final=label.startswith('ts05-final-');assert not final or d['binary_sha256']==final_hash
  fail=re.findall(r'\[TS:original\] numdmafail=(\d+)',log);assert len(fail)==1
  out={k:d[k] for k in ('requested_seconds','elapsed_seconds','returncode','outer_killed','binary_sha256','binary_sha256_after','binary_unchanged_during_run','reference_pcsx2_run')}
  out.update(exact_packaged_binary=final,delivered_key_edges=len(d['input']),undelivered_key_edges=len(d['undelivered']),all_key_edges_succeeded=True,dma_warning_count=log.count('DMA did not terminate'),original_numdmafail=int(fail[0]),native_evidence=f'project/diagnostics/{label}-probe.json',screenshots=len(d['screenshots']))
  subprocess.run(['python3',str(R/'scripts/inspect_stopped_combat.py'),str(D/f'{label}-ram.bin'),'--output',str(A/f'{label}-counters.json')],check=True)
  out['stopped_combat_observation']=f'project/analysis/TS05/{label}-counters.json'
  mem=memory(label,log)
  if mem:out['sound_memory']=mem
  if final:
   root=R/f'test-work/{label}/mc0';c=cards(root);out['card_fixture_unchanged']=c==base_cards;out['card_files_after']=c
   shutil.copy2(D/f'{label}-requested-input.json',R/f'project/tools/input-sequences/{label}-observed.json')
  results[label]=out
 write(R/'provenance/TS05-native-run-summary.json',results)
 # Verify production files still have the hashes recorded during the clean build.
 before=json.loads(Path('/mnt/data/ts05-worklogs/final-production-source-hashes.json').read_text())
 changes=[name for name,sha in before.items() if not (R/name).is_file() or h(R/name)!=sha]
 assert not changes,changes
 write(R/'provenance/TS05-post-native-source-verification.json',dict(recorded_production_files=len(before),changed_files=changes,unchanged=True,native_sha256=final_hash))
 print(json.dumps(results,indent=2))
if __name__=='__main__':main()
