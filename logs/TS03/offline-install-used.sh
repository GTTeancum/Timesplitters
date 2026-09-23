#!/bin/bash
set -euo pipefail
ROOT=/mnt/data/TimeSplitters-Dependencies
python3 - <<'PY'
import json
from pathlib import Path
r=Path('/mnt/data/TimeSplitters-Dependencies/debian');lock=json.loads((r/'packages-lock.json').read_text());fields=['Package','Version','Architecture','Pre-Depends','Depends','Provides','Conflicts','Breaks','Replaces','Multi-Arch','Essential','Size','SHA256']
with (r/'Packages').open('w') as f:
 for p in lock['packages']:
  for k in fields:
   if k in p:f.write(k+': '+p[k].replace('\n','\n ')+'\n')
  f.write('Filename: debs/'+Path(p['Filename']).name+'\n\n')
(r/'offline.list').write_text('deb [trusted=yes] '+r.as_uri()+' ./\n')
PY
mkdir -p "$ROOT/debian/lists/partial" "$ROOT/debian/apt-cache/archives/partial"
OPTS=(-o "Dir::Etc::sourcelist=$ROOT/debian/offline.list" -o Dir::Etc::sourceparts=- -o "Dir::State::lists=$ROOT/debian/lists" -o "Dir::Cache=$ROOT/debian/apt-cache" -o APT::Get::List-Cleanup=0 -o Acquire::Languages=none)
apt-get "${OPTS[@]}" update
PKGS=(clang-19 lld-19 7zip binutils-mipsel-linux-gnu genisoimage libasound2-dev libavcodec-dev libavformat-dev libavutil-dev libswresample-dev libswscale-dev libgl-dev libxcursor-dev libxi-dev libxinerama-dev libxrandr-dev python3-capstone python3-pycdlib python3-pyelftools xdotool)
apt-get "${OPTS[@]}" --no-install-recommends --no-remove -s install "${PKGS[@]}" > /mnt/data/ts03-install-plan.log
apt-get "${OPTS[@]}" --no-install-recommends --no-remove -y install "${PKGS[@]}"
