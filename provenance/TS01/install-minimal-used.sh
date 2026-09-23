#!/usr/bin/env bash
set -euo pipefail
D="${1:-/mnt/data/TimeSplitters-Dependencies}/debian"
export DEBIAN_FRONTEND=noninteractive
apt-get -o Dir::Etc::sourcelist="$D/offline.list" -o Dir::Etc::sourceparts=- -o Dir::State::lists="$D/lists" -o Dir::Cache="$D/apt-cache" --no-install-recommends --no-remove -y install clang-19 lld-19 7zip binutils-mipsel-linux-gnu libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev libgl-dev libasound2-dev libavcodec-dev libavformat-dev libavutil-dev libswresample-dev libswscale-dev python3-pyelftools python3-capstone python3-pycdlib xdotool
