@echo off
cls
set sourceFile=digital_clock.c
set sourceFile2=ascii_digits.c
set outputFile=digital_clock.exe

gcc %sourceFile% %sourceFile2% -Wall -std=c99 -o %outputFile%

if %errorlevel% neq 0 (
echo compilation error
) else (
echo successfull compilation
start %outputFile%
)
