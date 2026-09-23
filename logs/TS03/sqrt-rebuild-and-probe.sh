#!/usr/bin/env bash
set -euo pipefail
R="/mnt/data/TimeSplitters_TS03_Checkpoint"
cmake --build "$R/build" --target ps2_recomp ps2x_tests --parallel 3
python3 "$R/scripts/regenerate.py" --output "$R/test-work/sqrt-regenerated" > "$R/logs/TS03/sqrt-regenerate.log" 2>&1
python3 - <<'END'
from pathlib import Path
import hashlib,json,shutil
r=Path('/mnt/data/TimeSplitters_TS03_Checkpoint');src=r/'test-work/sqrt-regenerated';dst=r/'project/generated';changed=[]
for p in src.iterdir():
 if p.is_file():
  q=dst/p.name
  if not q.exists() or p.read_bytes()!=q.read_bytes():
   changed.append(p.name);shutil.copy2(p,q)
assert set(p.name for p in src.iterdir() if p.is_file())==set(p.name for p in dst.iterdir() if p.is_file())
(r/'provenance/sqrt-regeneration-changes.json').write_text(json.dumps(dict(changed_count=len(changed),changed_files=changed),indent=2)+'\n')
print('Regenerated files changed:',len(changed))
END
cmake --build "$R/build" --parallel 3
bash "$R/scripts/test_linux.sh" > "$R/logs/TS03/sqrt-after-tests.log" 2>&1
echo 0 > "$R/logs/TS03/sqrt-after-tests.exit"
python3 "$R/scripts/probe_with_input.py" --seconds 235 --label ts03-sqrt-fixed --input "$R/project/tools/input-sequences/tomb-controls.json" --card-root "$R/test-work/sqrt-card/mc0" > "$R/logs/TS03/sqrt-fixed-launch.log" 2>&1
