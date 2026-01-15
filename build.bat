@echo off
setlocal

set SOURCES=main.c src/bintext.c
set OUTPUT=programa.exe
set INCLUDES=-Iinclude

cls
echo [COMPILANDO]...

gcc %SOURCES% %INCLUDES% -o %OUTPUT% -std=c99 -Wall -Wextra -pedantic -Werror

if errorlevel 1 (
    echo.
    echo [ERRO] Falha na compilacao.
    pause
    exit /b 1
)

echo.
echo [SUCESSO] Executando programa...
echo.

%OUTPUT%

echo.
pause