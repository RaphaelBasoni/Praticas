#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcoesMenu = 0, opcoesJogar = 0;
    int jogador = 0, computador = 0, resultado = 0;
    char comparacao;

    srand(time(0)); // Garante que a aleatoriedade não se repita

    while (1) {
        printf("Menu do Jogo MAIOR, MENOR OU IGUAL\n\n");
        printf("1. Jogar\n");
        printf("2. Ver Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcoesMenu);
        system("cls");

        switch (opcoesMenu) {
        case 1:
            do {
                computador = rand() % 100 + 1;
                printf("Bem-vindo ao Jogo MAIOR, MENOR OU IGUAL\n\n");
                printf("Voce deve escolher um tipo de comparacao e um numero.\n");
                printf("M. Maior\n");
                printf("N. Menor\n");
                printf("I. Igual\n\n");

                printf("Escolha uma das comparacoes acima: ");
                scanf(" %c", &comparacao);
                printf("Escolha um numero entre 1 e 100: ");
                scanf("%d", &jogador);

                printf("\nO numero do computador foi: %d\n", computador);

                switch (comparacao) {
                case 'M':
                case 'm':
                    resultado = jogador > computador;
                    break;
                case 'N':
                case 'n':
                    resultado = jogador < computador;
                    break;
                case 'I':
                case 'i':
                    resultado = jogador == computador;
                    break;
                default:
                    printf("Opcao invalida!\n");
                    resultado = -1;
                }

                if (resultado == 1) {
                    printf("Voce venceu!!\n");
                }
                else if (resultado == 0) {
                    printf("Voce perdeu!!\n");
                }

                printf("\nJogar novamente? (Sim=1 / Nao=0): ");
                scanf("%d", &opcoesJogar);
                system("cls");

            } while (opcoesJogar == 1);
            break;

        case 2:
            printf("### REGRAS DO JOGO ###\n\n");
            printf("1. Escolha se seu numero sera MAIOR, MENOR ou IGUAL ao do computador.\n");
            printf("2. Escolha um numero entre 1 e 100.\n");
            printf("3. Ganha se sua comparacao estiver correta.\n\n");
            break;

        case 3:
            printf("Saindo do jogo...\n");
            return 0;

        default:
            printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\nPressione ENTER para voltar ao menu...\n");
        getchar(); // consome \n pendente
        getchar(); // espera ENTER
        system("cls");
    }

    return 0;
}
