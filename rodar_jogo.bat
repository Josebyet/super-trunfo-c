@echo off
cls
echo Compilando o jogo...
gcc super_trunfo.c -o super_trunfo
if exist super_trunfo.exe (
    echo Compilado com sucesso!
    echo Executando o jogo...
    super_trunfo.exe
) else (
    echo Erro ao compilar!
)
pause
