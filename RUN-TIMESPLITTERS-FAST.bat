@echo off
rem Optimized MSVC Release build (recompiled VU1 microprogram, multi-core
rem rasterizer). Build it with:
rem   cmake --build build-release --target timesplitters
rem The session is limited to one hour by the executable's argument check.
cd /d "%~dp0"
set "EXE=%~dp0build-release\timesplitters\timesplitters.exe"
if not exist "%EXE%" (
    echo Optimized build not found: %EXE%
    pause
    exit /b 1
)
"%EXE%" "%~dp0project\game-data\SLUS_200.90" 3600 "%~dp0project\disc\TimeSplitters.iso"
set "RC=%ERRORLEVEL%"
echo.
echo TimeSplitters exited with code %RC%.
pause
exit /b %RC%
