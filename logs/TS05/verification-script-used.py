from pathlib import Path
import subprocess,shutil,hashlib,json
root=Path('/mnt/data/TimeSplitters_TS05_Checkpoint');base=Path('/mnt/data/TimeSplitters-Dependencies/sources/PS2Recomp');work=Path('/mnt/data/ts05-patch-work');check=Path('/mnt/data/ts05-patch-check')
pin='75d729ce40d7eed9649fd4bb05628dee520f3d0c'
def git(*args,cwd=None,stdout=None):return subprocess.run(['git',*args],cwd=cwd,check=True,stdout=stdout,stderr=subprocess.PIPE)
assert subprocess.check_output(['git','-C',str(base),'rev-parse','HEAD'],text=True).strip()==pin
for target in (work,check):
 if target.exists():raise RuntimeError('verification checkout already exists: '+str(target))
 git('clone','--no-hardlinks','--quiet',str(base),str(target))
 git('checkout','--quiet','--detach',pin,cwd=target)
source=root/'source/PS2Recomp';files=[p for p in source.rglob('*') if p.is_file()]
for p in files:
 rel=p.relative_to(source);dest=work/rel;dest.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(p,dest)
git('add','-N','.',cwd=work)
patch=root/'patches/PS2Recomp-TS05.patch'
with patch.open('wb') as f:git('diff','--binary','HEAD',cwd=work,stdout=f)
git('apply','--check',str(patch),cwd=check);git('apply',str(patch),cwd=check)
h=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
records=[]
for p in sorted(files):
 rel=p.relative_to(source);q=check/rel
 assert p.read_bytes()==q.read_bytes(),str(rel)
 records.append({'path':str(rel),'size':p.stat().st_size,'sha256':h(p)})
old=json.load(open('/mnt/data/ts05-worklogs/baseline-source-hashes.json'))
changed=[str(p.relative_to(source)) for p in files if old.get(str(p.relative_to(root)))!=h(p)]
result={'base_commit':pin,'patch':str(patch.relative_to(root)),'patch_sha256':h(patch),'clean_apply_pass':True,'matching_framework_payload_files':len(records),'changed_framework_files_since_TS04':sorted(changed),'changed_framework_files_from_base':subprocess.check_output(['git','diff','--name-only','HEAD'],cwd=work,text=True).splitlines(),'scope':'All packaged framework files compared. Optional upstream font assets are not packaged.','files':records}
(root/'provenance/TS05-patch-verification.json').write_text(json.dumps(result,indent=2)+'\n')
print({k:v for k,v in result.items() if k!='files'})
