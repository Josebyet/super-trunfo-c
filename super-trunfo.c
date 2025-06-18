#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_CARTAS 5
#define TAM_NOME 20

typedef struct {
    char nome[TAM_NOME];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

// Função para exibir uma carta
void mostrarCarta(Carta c) {
    printf("Carta: %s\n", c.nome);
    printf("Força: %d\n", c.forca);
    printf("Velocidade: %d\n", c.velocidade);
    printf("Inteligência: %d\n", c.inteligencia);
}

int main() {
    srand(time(NULL)); // Inicializa a semente do random

    // Baralho de cartas
    Carta cartas[NUM_CARTAS] = {
        {"Dragão", 95, 60, 70},
        {"Fênix", 85, 75, 90},
        {"Grifo", 80, 85, 60},
        {"Minotauro", 90, 40, 50},
        {"Unicórnio", 70, 80, 95}
    };

    // Embaralhar
    for (int i = 0; i < NUM_CARTAS; i++) {
        int r = rand() % NUM_CARTAS;
        Carta temp = cartas[i];
        cartas[i] = cartas[r];
        cartas[r] = temp;
    }

    int pontosJogador = 0;
    int pontosComputador = 0;

    // Dividir baralho
    for (int i = 0; i < NUM_CARTAS - 1; i += 2) {
        Carta jogador = cartas[i];
        Carta computador = cartas[i+1];

        printf("\n--- Rodada %d ---\n", (i / 2) + 1);
        printf("Sua carta:\n");
        mostrarCarta(jogador);

        int escolha;
        printf("Escolha um atributo para competir:\n");
        printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
        printf("Digite o número: ");
        scanf("%d", &escolha);

        int valorJogador = 0;
        int valorComputador = 0;

        switch (escolha) {
            case 1:
                valorJogador = jogador.forca;
                valorComputador = computador.forca;
                break;
            case 2:
                valorJogador = jogador.velocidade;
                valorComputador = computador.velocidade;
                break;
            case 3:
                valorJogador = jogador.inteligencia;
                valorComputador = computador.inteligencia;
                break;
            default:
                printf("Escolha inválida! O computador ganha por W.O.\n");
                pontosComputador++;
                continue;
        }

        printf("Carta do computador: %s\n", computador.nome);
        printf("Valor do computador: %d\n", valorComputador);

        if (valorJogador > valorComputador) {
            printf("Você venceu a rodada!\n");
            pontosJogador++;
        } else if (valorJogador < valorComputador) {
            printf("Computador venceu a rodada!\n");
            pontosComputador++;
        } else {
            printf("Empate!\n");
        }
    }

    // Resultado final
    printf("\n=== FIM DO JOGO ===\n");
    printf("Seus pontos: %d\n", pontosJogador);
    printf("Pontos do computador: %d\n", pontosComputador);

    if (pontosJogador > pontosComputador)
        printf("🎉 Você venceu o jogo!\n");
    else if (pontosJogador < pontosComputador)
        printf("😢 O computador venceu o jogo!\n");
    else
        printf("⚔️ O jogo terminou empatado!\n");

    return 0;
}
