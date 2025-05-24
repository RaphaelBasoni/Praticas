#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    system("chcp 65001 > nul");  // Muda para UTF-8
    int opcao, escolhaJogador, escolhaComputador;
    int jogarNovamente = 1;
    int placarJogador = 0, placarComputador = 0;

    while (1) {
        system("cls");
        system("color 0A"); // Fundo preto, texto verde

        printf("===== \xF0\x9F\xAA\xA8 JOKENP\xC3\x94 \xE2\x9C\x82\xEF\xB8\x8F =====\n\n");
        printf("Menu Principal:\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Ver Regras\n");
        printf("3. Sair do Jogo\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            do {
                system("cls");
                srand(time(0));
                printf("\n===== NOVA RODADA =====\n");
                printf("1. Pedra \xF0\x9F\xAA\xA8\n");
                printf("2. Papel \xF0\x9F\x93\x84\n");
                printf("3. Tesoura \xE2\x9C\x82\xEF\xB8\x8F\n\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &escolhaJogador);

                escolhaComputador = rand() % 3 + 1;

                printf("\nVoce escolheu: ");
                switch (escolhaJogador) {
                case 1: printf("PEDRA \xF0\x9F\xAA\xA8\n"); break;
                case 2: printf("PAPEL \xF0\x9F\x93\x84\n"); break;
                case 3: printf("TESOURA \xE2\x9C\x82\xEF\xB8\x8F\n"); break;
                default: printf("Opcao Invalida!\n"); continue;
                }

                printf("Computador pensando...");
                Sleep(1000);

                printf("\nComputador escolheu: ");
                switch (escolhaComputador) {
                case 1: printf("PEDRA \xF0\x9F\xAA\xA8\n"); break;
                case 2: printf("PAPEL \xF0\x9F\x93\x84\n"); break;
                case 3: printf("TESOURA \xE2\x9C\x82\xEF\xB8\x8F\n"); break;
                }

                printf("\n==== RESULTADO ====");

                if (escolhaJogador == escolhaComputador) {
                    printf("\nEmpate!\n");
                }
                else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
                    (escolhaJogador == 2 && escolhaComputador == 1) ||
                    (escolhaJogador == 3 && escolhaComputador == 2)) {
                    printf("\nVoce Ganhou!\n");
                    placarJogador++;
                }
                else {
                    printf("\nVoce Perdeu!\n");
                    placarComputador++;
                }

                printf("\n----- PLACAR -----\n");
                printf("Voce: %d  |  Computador: %d\n", placarJogador, placarComputador);
                printf("------------------\n");

                printf("\nDeseja jogar novamente? (1 - Sim / 0 - Voltar ao menu): ");
                scanf("%d", &jogarNovamente);

            } while (jogarNovamente == 1);
            break;

        case 2:
            system("cls");
            printf("\n===== REGRAS DO JOGO =====\n");
            printf("- Pedra ganha de Tesoura\n");
            printf("- Tesoura ganha de Papel\n");
            printf("- Papel ganha de Pedra\n\n");
            system("pause");
            break;

        case 3:
            printf("\nObrigado por jogar!\n");
            printf("Placar final: VOCE %d x %d COMPUTADOR\n", placarJogador, placarComputador);
            printf("Volte sempre!\n\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
            Sleep(1000);
            break;
        }
    }

    return 0;
}
