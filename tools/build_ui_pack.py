"""Build the menu / UI / HUD replacement pack from the texture dump.

Reads tools/ui_pack.txt, gathers textures/dump/2d/*.png plus the listed
extras from textures/dump/3d, and runs upscale_textures.py with the method
chosen for each into textures/replacements/ui.

    python tools/build_ui_pack.py
"""

import os
import shutil
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DUMP = os.path.join(ROOT, "textures", "dump")
OUT = os.path.join(ROOT, "textures", "replacements", "ui")


def main():
    extra, smooth = set(), set()
    with open(os.path.join(ROOT, "tools", "ui_pack.txt"), encoding="utf-8") as f:
        for line in f:
            words = line.split("#")[0].split()
            if len(words) == 2:
                (extra if words[0] == "extra" else smooth).add(words[1] + ".png")
    work = tempfile.mkdtemp(prefix="ts_uipack_")
    try:
        names = []
        for name in sorted(os.listdir(os.path.join(DUMP, "2d"))):
            shutil.copy(os.path.join(DUMP, "2d", name), work)
            names.append(name)
        for name in sorted(extra):
            src = os.path.join(DUMP, "3d", name)
            if os.path.exists(src) and name not in names:
                shutil.copy(src, work)
                names.append(name)
        tool = os.path.join(ROOT, "tools", "upscale_textures.py")
        smooth_names = [n for n in names if n in smooth]
        ai_names = [n for n in names if n not in smooth]
        for method, files in (("smooth", smooth_names), ("ai", ai_names)):
            if files:
                subprocess.run([sys.executable, tool, work, OUT, "--method", method, "--files", *files], check=True)
        print(f"{len(names)} textures in {OUT}")
    finally:
        shutil.rmtree(work, ignore_errors=True)


if __name__ == "__main__":
    main()
