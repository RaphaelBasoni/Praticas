#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int opcao, escolhaJogador, escolhaComputador;

	//Menu Inicial
	printf("##### JOKENPO #####\n\n\n");
	printf("Menu Principal:\n");
	printf("1. Iniciar Jogo\n");
	printf("2. Ver Regras\n");
	printf("3. Sair do Jogo\n\n");
	
	printf("Escolha uma opcao:");
	scanf("%d", &opcao);

	switch (opcao) {
    case 1:
        do {
            system("cls");  // limpa a tela, opcional

            srand(time(0));
            printf("##### JOKENPO #####\n\n\n");
            printf("Menu de opcoes:\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n\n");

            printf("Escolha uma opcao:");
            scanf("%d", &escolhaJogador);

            escolhaComputador = rand() % 3 + 1;

            // Exibir escolhas
            switch (escolhaJogador) {
            case 1: printf("voce escolheu PEDRA\n"); break;
            case 2: printf("voce escolheu PAPEL\n"); break;
            case 3: printf("voce escolheu TESOURA\n"); break;
            default: printf("Opcao Invalida!\n"); break;
            }

            switch (escolhaComputador) {
            case 1: printf("Computador escolheu PEDRA\n"); break;
            case 2: printf("Computador escolheu PAPEL\n"); break;
            case 3: printf("Computador escolheu TESOURA\n"); break;
            }

            // Resultado
            if (escolhaJogador == escolhaComputador) {
                printf("Empatou!\n");
            }
            else if (
                (escolhaJogador == 1 && escolhaComputador == 3) ||
                (escolhaJogador == 2 && escolhaComputador == 1) ||
                (escolhaJogador == 3 && escolhaComputador == 2)
                ) {
                printf("Voce Ganhou!\n");
            }
            else {
                printf("Voce Perdeu!\n");
            }

            // Pergunta se quer jogar novamente
            printf("\nDeseja jogar novamente? (1 - Sim / 0 - Nao): ");
            scanf("%d", &opcao);

        } while (opcao == 1);
        break;


	case 2:
		printf("\nRegras do jogo:\n");
		printf("Pedra ganha de tesoura\n");
		printf("Tesoura ganha de papel\n");
		printf("Papel ganha de pedra\n");
	break;
	case 3:
		printf("Saindo do jogo...\n");
	break;
	default:
		printf("Opcao invalida\n");
	break;
	}
	return 0;
}