# Super Trunfo em C 🃏

Este é um pequeno jogo de cartas estilo Super Trunfo, desenvolvido em linguagem C como desafio da disciplina.

## 🎮 Regras do Jogo

- Cada jogador (você e o computador) recebe uma carta com 3 atributos: Força, Velocidade e Inteligência.
- Você escolhe um atributo.
- O computador revela sua carta.
- Quem tiver o valor mais alto no atributo escolhido ganha a rodada.

---

## ⚙️ Como Compilar e Rodar

### 🪟 No Windows

1. Instale o [TDM-GCC (GCC para Windows)](https://github.com/Josebyet/super-trunfo-c)
2. Baixe ou clone este repositório.
3. Clique duas vezes em `rodar_jogo.bat`

### 💻 Manualmente via terminal

```bash
gcc super_trunfo.c -o super_trunfo
super_trunfo.exe
```

---

## 🧾 Estrutura do Projeto

```
super-trunfo-c/
├── super_trunfo.c       ← Código do jogo
├── rodar_jogo.bat       ← Script para rodar no Windows
