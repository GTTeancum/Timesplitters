#pragma once
// B-PLATFORM's start-up entry (src/xbox/PUSH-BC-PLAN.md section 5.3): the
// [TS:plat] status line and, with TS_PLATFORM_SELFTEST=1, the platform boot
// self-tests (xbox_platform_selftest.cpp). Called once by xboxInstallBackend
// (xbox_perf.cpp), before the game runs.
void xboxPlatformStart();
