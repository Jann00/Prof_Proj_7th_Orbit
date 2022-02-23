@echo BP Diff Script
@cd C:\Program Files\Epic Games\UE_4.27\Engine\Binaries\Win64

@set /p file="Enter path to second file: "

UE4Editor.exe -diff %1 %file%
