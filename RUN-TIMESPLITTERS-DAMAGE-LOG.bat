@echo off
rem Same as RUN-TIMESPLITTERS-FAST.bat, but logs every damage event to
rem damage-log.txt next to this file (TS_TRACE_DAMAGE=1).
cd /d "%~dp0"
set "EXE=%~dp0build-release\timesplitters\timesplitters.exe"
set TS_TRACE_DAMAGE=1
"%EXE%" "%~dp0project\game-data\SLUS_200.90" 3600 "%~dp0project\disc\TimeSplitters.iso" 2> "%~dp0damage-log.txt"
echo.
echo Damage log written to %~dp0damage-log.txt
pause
