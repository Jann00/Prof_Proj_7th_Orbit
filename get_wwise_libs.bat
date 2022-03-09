@echo off
cd /d %~dp0
powershell -Command "Invoke-WebRequest https://github.com/laurence-dorman/WWiseLibs/archive/refs/heads/main.zip -OutFile WWiseLibs.zip"
powershell Expand-Archive WWiseLibs.zip 
robocopy WWiseLibs\WWiseLibs-main Plugins\Wwise\ThirdParty /e /move
del WWiseLibs.zip
rmdir WWiseLibs
pause
