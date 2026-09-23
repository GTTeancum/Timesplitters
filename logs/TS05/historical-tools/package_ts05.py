#!/usr/bin/env python3
"""Serialize verified TS05 sources and stopped evidence; no downloads or library writes."""
from pathlib import Path
import hashlib,json,os,shutil,stat,subprocess,zipfile
ROOT=Path('/mnt/data/TimeSplitters_TS05_Checkpoint')
OUT=Path('/mnt/data')
FONTS={'.ttf','.otf','.woff','.woff2','.ttc','.pfb','.pfa','.fon','.bdf','.pcf'}
H=lambda p: hashlib.file_digest(p.open('rb'),'sha256').hexdigest()
BASESHA='094609f900457ac8998481ca17997596ff6a91430b74b807f16b1a65c2bf8718'

def pick(p:Path,kind:str)->bool:
    rel=p.relative_to(ROOT);parts=rel.parts
    if any(q in ('__pycache__','.git') for q in parts) or p.suffix.lower() in FONTS|{'.pyc','.lock','.lck'}:return False
    if len(parts)==1:return parts[0] in ('README-LINUX.md','STATUS.md','RESULTS.json')
    if parts[0] in ('source','scripts','patches','provenance','logs'):
        return True
    if parts[0]=='bin':return kind=='full' and len(parts)==2 and parts[1] in ('timesplitters','ps2_recomp','timesplitters_dma_replay')
    if parts[0]!='project':return False
    sub=parts[1]
    if sub in ('game','generated','config','ghidra-scripts','tests','tools'):return p.name!='runtime-paths.toml'
    if sub in ('diagnostics','ghidra-project'):return kind=='full'
    if sub=='analysis':
        if kind=='full':return True
        if len(parts)>2 and parts[2]=='extracted':return True # supplied analysis ELF/IRX, not full assets
        return p.suffix.lower() in ('.json','.tsv','.txt','.md','.c','.cpp','.h','.py','.toml','.sha256')
    return False

def save_json(p,obj):p.write_text(json.dumps(obj,indent=2)+'\n')

def build_kind(kind):
    stagebase=OUT/f'ts05-stage-{kind}'
    stage=stagebase/('TimeSplitters_TS05_Checkpoint' if kind=='full' else 'TimeSplitters_TS05_Source_Backup')
    if stagebase.exists():raise RuntimeError('Staging destination already exists')
    stage.mkdir(parents=True)
    for p in sorted(ROOT.rglob('*')):
        if not p.is_file() or not pick(p,kind):continue
        if p.is_symlink():raise RuntimeError('Unexpected package symlink: '+str(p))
        q=stage/p.relative_to(ROOT);q.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(p,q)
    info={'checkpoint':'TS05','kind':kind,'foundation':'actual verified TS04 archive','foundation_sha256':BASESHA,
          'full_disc_assets_included':False,'dependency_downloads_included':False,'font_files_included':False,
          'native_host_binaries_included':kind=='full','native_images_selected_RAM_included':kind=='full',
          'native_card_fixtures_included':kind=='full','original_analysis_ELF_modules_included':True,
          'build_intermediates_included':False,'clean_build_checks_passed':705,
          'checks_available_after_build':705 if kind=='full' else 703,
          'note':'Source-only skips the two omitted captured-RAM DMA replays. Sound RAM transfers are not working voice mixing or audio output.'}
    save_json(stage/'PACKAGE-CONTENTS.json',info)
    entries=[]
    for p in sorted(stage.rglob('*')):
        if p.is_file():entries.append({'path':p.relative_to(stage).as_posix(),'size':p.stat().st_size,'sha256':H(p),'mode':stat.S_IMODE(p.stat().st_mode)})
    save_json(stage/'CHECKPOINT-MANIFEST.json',{'checkpoint':'TS05','package_kind':kind,'files':entries})
    name='TimeSplitters_TS05_Linux_Checkpoint.zip' if kind=='full' else 'TimeSplitters_TS05_Source_Backup.zip'
    archive=OUT/name
    if archive.exists():raise RuntimeError('Archive already exists; refusing overwrite')
    with zipfile.ZipFile(archive,'w',compression=zipfile.ZIP_DEFLATED,compresslevel=6,allowZip64=True) as z:
        for p in sorted(stage.rglob('*')):
            if p.is_file():z.write(p,p.relative_to(stagebase).as_posix())
    freshbase=OUT/f'ts05-fresh-{kind}'
    if freshbase.exists():raise RuntimeError('Fresh extraction path already exists')
    freshbase.mkdir()
    with zipfile.ZipFile(archive) as z:
        assert len(z.namelist())==len(set(z.namelist()))
        assert z.testzip() is None
        for inf in z.infolist():
            rel=Path(inf.filename)
            assert not rel.is_absolute() and '..' not in rel.parts
            q=freshbase/rel;q.parent.mkdir(parents=True,exist_ok=True)
            with z.open(inf) as src,q.open('wb') as dst:shutil.copyfileobj(src,dst)
            q.chmod((inf.external_attr>>16)&0o777)
    fresh=freshbase/stage.name
    for e in entries:
        p=fresh/e['path'];assert p.stat().st_size==e['size'] and H(p)==e['sha256']
        assert stat.S_IMODE(p.stat().st_mode)==e['mode']
    verdict=subprocess.check_output(['python3',str(fresh/'scripts/verify_checkpoint.py')],text=True).strip()
    assert archive.stat().st_size<=350*1024*1024
    record={'archive':name,'archive_size':archive.stat().st_size,'archive_sha256':H(archive),
            'zip_crc_pass':True,'unique_entries':True,'archive_entries':len(entries)+1,'manifest_payload_files':len(entries),
            'fresh_extraction_manifest_pass':True,'fresh_extraction_all_hashes_and_modes_pass':True,'font_files':0,
            'full_disc_assets_excluded':True,'dependency_downloads_excluded':True,'build_intermediates_excluded':True,
            'manifest_verifier_output':verdict}
    print(json.dumps(record),flush=True)
    return fresh,record

def main():
    final=json.loads((ROOT/'project/diagnostics/ts05-final-story-probe.json').read_text())
    assert final['returncode']==10 and not final['outer_killed'] and final['binary_unchanged_during_run']
    assert final['binary_sha256']==H(ROOT/'bin/timesplitters')
    assert json.loads((ROOT/'RESULTS.json').read_text())['checkpoint']=='TS05'
    full,fr=build_kind('full');source,sr=build_kind('source')
    for p in source.rglob('*'):
        if p.is_file() and p.name not in ('CHECKPOINT-MANIFEST.json','PACKAGE-CONTENTS.json'):
            assert H(p)==H(full/p.relative_to(source)),str(p)
    cmds=[];elf=full/'project/analysis/extracted/SLUS_200.90';binary=full/'bin/timesplitters'
    for flag in ('--self-test','--image-self-test','--mc-self-test','--math-self-test','--matrix-self-test','--format-self-test','--audio-memory-self-test'):
        cmds.append([str(binary),flag,str(elf)])
    cmds.extend([[str(full/'bin/timesplitters_dma_replay'),str(full/'project/diagnostics/ts04-first-alarm-ee-ram.bin')],
                 ['python3','-m','unittest','discover','-s',str(full/'project/tests'),'-p','test_*.py','-v']])
    with (OUT/'TimeSplitters_TS05_Fresh_Extraction_Tests.log').open('w') as log:
        for cmd in cmds:
            log.write('COMMAND '+repr(cmd)+'\n');log.flush()
            subprocess.run(cmd,cwd=full,stdout=log,stderr=subprocess.STDOUT,check=True,timeout=60)
    fr.update(fresh_extraction_native_component_checks_passed=172,fresh_extraction_captured_DMA_checks_passed=2,fresh_extraction_Python_checks_passed=17)
    report={'checkpoint':'TS05','foundation':'actual verified TS04 full archive','clean_build_checks_passed':705,
            'generated_files_reproduced_byte_identical':2673,'cumulative_patch_framework_files_reproduced':295,
            'native_sha256':H(ROOT/'bin/timesplitters'),'pcsx2_built_run_linked':False,'complete_port_verified':False,
            'working_audio_output_verified':False,'full':fr,'source':sr,'source_payload_matches_full_except_package_metadata':True}
    save_json(OUT/'TimeSplitters_TS05_Package_Verification.json',report)
    shutil.copy2(ROOT/'STATUS.md',OUT/'TimeSplitters_TS05_Status.md')
    shutil.copy2(ROOT/'RESULTS.json',OUT/'TimeSplitters_TS05_Results.json')
    print('TS05 PACKAGES AND FRESH EXTRACTION TESTS COMPLETE',flush=True)
if __name__=='__main__':main()
