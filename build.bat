@echo off
set SOURCE=main.c
set OUTPUT=programa.exe

cls
echo [COMPILANDO]...

gcc %SOURCE% -o %OUTPUT% -std=c99 -Wall -Wextra -pedantic -Werror


if %errorlevel% neq 0 (
    echo.
    echo [ERRO] Falha na compilacao.
    pause
    exit /b
)

echo.
echo [SUCESSO] Executando programa...
echo.

.\%OUTPUT%

echo.
pause