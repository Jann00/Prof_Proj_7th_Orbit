@echo BP Diff Script - Enter paths to each blueprint
@cd C:\Program Files\Epic Games\UE_4.27\Engine\Binaries\Win64

@set /p file1="Enter path to first file: "
@set /p file2="Enter path to second file: "

UE4Editor.exe -diff %file1% %file2%
