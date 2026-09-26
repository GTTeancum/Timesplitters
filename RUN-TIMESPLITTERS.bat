@echo off
cd /d "%~dp0"
set TS_INPUT_TRACE=1
timesplitters.exe
set "RC=%ERRORLEVEL%"
echo.
echo TimeSplitters exited with code %RC%.
echo Log: %~dp0timesplitters.log
pause
exit /b %RC%
