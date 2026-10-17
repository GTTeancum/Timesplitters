#pragma once
// The host clock as the guest sees it (src/xbox/PUSH-BC-PLAN.md section
// 3.4 item 6; owned by B-SCHED). Every calendar time handed to the guest
// (sceCdReadClock, memory-card entry times, fio stat, the OSD time zone)
// comes through here, so deterministic mode (TS_DET: ps2xPinHostTime) can
// pin them all to one fixed instant and the runs compare. Defined in
// ps2_runtime.cpp.
#include <cstdint>
#include <ctime>
#include <filesystem>

// std::time(nullptr), or the pinned instant.
std::time_t ps2xHostTime();
// A file's modification time as a calendar time, or the pinned instant.
std::time_t ps2xHostFileTime(std::filesystem::file_time_type value);
// The local time zone's offset from UTC in minutes (computed by the caller
// from the host), or 0 when pinned.
int ps2xHostTimezoneMinutes(int computed);
// Pins every time above to `instant` (0 unpins).
void ps2xPinHostTime(std::time_t instant);
bool ps2xHostTimePinned();
// Counters for the det report: reads answered from the pin, and reads of
// the real clock made while pinned (must stay 0; only an unpinned site can
// make one).
uint32_t ps2xHostTimePinnedReads();
uint32_t ps2xHostTimeRealReads();
// Counts one real-clock read made while pinned (the Xbox system_clock,
// src/xbox/xbox_chrono.cpp).
void ps2xHostTimeNoteRealRead();
