#!/usr/bin/env python3
"""Create path-relocatable CMake overrides for the supplied dependency snapshot."""
from pathlib import Path
import argparse,json,subprocess
p=argparse.ArgumentParser();p.add_argument('dependencies',type=Path);p.add_argument('output',type=Path);a=p.parse_args()
root=a.dependencies.resolve()
records=json.loads((root/'metadata/ps2-fetchcontent.json').read_text())
lines=['# Exact source inputs; do not fetch from the network.']
for name in ['FETCHCONTENT_FULLY_DISCONNECTED','FETCHCONTENT_UPDATES_DISCONNECTED']:
 lines.append(f'set({name} ON CACHE BOOL "" FORCE)')
for name in ['ELFIO_BUILD_TESTS','ELFIO_BUILD_EXAMPLES','TOML11_BUILD_TESTS','TOML11_BUILD_EXAMPLES','TOML11_BUILD_TOML_TESTS','FMT_TEST','JSON_BuildTests','DO_TESTING','BUILD_EXAMPLES']:
 lines.append(f'set({name} OFF CACHE BOOL "" FORCE)')
for name,rec in sorted(records.items()):
 folder=(root/rec['destination']).resolve()
 if not folder.is_relative_to(root) or not folder.is_dir():raise SystemExit('Missing/unsafe dependency '+str(folder))
 commit=subprocess.check_output(['git','-C',str(folder),'rev-parse','HEAD'],text=True).strip()
 if commit!=rec['commit']:raise SystemExit('Dependency commit mismatch: '+name)
 if ']==]' in str(folder):raise SystemExit('Unsupported bracket in path')
 lines.append(f'set(FETCHCONTENT_SOURCE_DIR_{name.upper()} [==[{folder.as_posix()}]==] CACHE PATH "" FORCE)')
a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text('\n'.join(lines)+'\n')
print('Prepared',len(records),'verified offline source overrides')
