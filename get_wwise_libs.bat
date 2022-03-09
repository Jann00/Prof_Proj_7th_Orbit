@echo off
cd /d %~dp0
:: Check for Wwise install, so we can move the files instead of downloading.
if exist "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\" (
	robocopy "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\SDK" Plugins\Wwise\ThirdParty /e /xd "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\SDK\source" "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\SDK\samples" "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\SDK\include" "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774\SDK\Help" 
	pause
	goto :eof
)
:: If no Wwise install found, download the lib files from my GitHub repo.
echo No Wwise install found at "C:\Program Files (x86)\Audiokinetic\Wwise 2021.1.6.7774", downloading lib files...
powershell -Command "Invoke-WebRequest https://github.com/laurence-dorman/WWiseLibs/archive/refs/heads/main.zip -OutFile WWiseLibs.zip"
powershell Expand-Archive WWiseLibs.zip 
robocopy WWiseLibs\WWiseLibs-main Plugins\Wwise\ThirdParty /e /move
del WWiseLibs.zip
rmdir WWiseLibs
pause
