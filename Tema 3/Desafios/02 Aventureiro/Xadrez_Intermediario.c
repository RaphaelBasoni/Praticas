#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// variaveis do menu (switch), do (p/ re-execução caso switch caia em default), e tamanho do tabuleiro.
	// obs: variaveis das peças (linha/coluna de cada peça) estao nos 'case' para facilitar manupulação.

	int opcao, valido = 0;
	int linha = 0, coluna = 0, tamanho = 7;

	// Menu de escolha

	do {
		printf("Menu de movimentos de pecas de xadrez:\n\n");
		printf("1.Peao \n");
		printf("2.Torre \n");
		printf("3.Cavalo \n");
		printf("4.Bispo \n");
		printf("5.Rainha \n");
		printf("6.Rei \n");
		printf("Selecione uma das opcoes:\n");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			// Movimento do peao - pendente
			printf("Movimento do peao:\n");
			printf("Em breve .... (ainda nao solicitado pelo professor)\n\n");
			valido = 1;
			break;

		case 2:
			// Movimento da torre (usando "for")
			printf("Movimento da Torre:\n");
			printf("Se move livremente na horizontal ou vertical\n\n");

			int torre_linha = 3, torre_coluna = 3;


			for (linha = 0; linha < tamanho; linha++) {
				for (coluna = 0; coluna < tamanho; coluna++) {
					if (linha == torre_linha || coluna == torre_coluna)
						printf("T ");
					else
						printf(". ");
				}
				printf("\n");
			}
			valido = 1;
			break;

		case 3:
			// Movimento do cavalo (usando "for" para loop externo e "while" para loop interno)
			printf("Movimento do cavalo:\n");
			printf("Se move em 'L',\n");
			printf("No exemplo a seguir: Baixo - baixo - baixo - esquerda\n\n");

			int linha_cavalo = 1;
			int coluna_cavalo = 4;

			for (linha = 0; linha < tamanho; linha++) {
				coluna = 0;  
				for (int tempo = 0; tempo < 100000000; tempo++) {}
				while (coluna < tamanho) {
					if (linha == linha_cavalo && coluna == coluna_cavalo)
						printf("C ");
					else if (linha == linha_cavalo + 1 && coluna == coluna_cavalo)
						printf("C ");
					else if (linha == linha_cavalo + 2 && coluna == coluna_cavalo)
						printf("C ");
					else if (linha == linha_cavalo + 2 && coluna == coluna_cavalo - 1)
						printf("C ");
					else
						printf(". ");
					coluna++;
				}
				printf("\n");
			}

			valido = 1;
			break;


		case 4:
			// Movimento do bispo (usando "while")
			printf("Movimento do Bispo:\n");
			printf("Se move livremente na diagonal\n\n");

			while (linha < tamanho) {
				int coluna = 0;
				while (coluna < tamanho) {
					if (coluna == linha)
						printf("B ");
					else
						printf(". ");
					coluna++;
				}
				printf("\n");
				linha++;
			}
			valido = 1;
			break;

		case 5:
			// Movimento da rainha (usando "do-while")
			printf("Movimento da Rainha:\n");

			do {
				int coluna = 0, rainha_linha = 3, rainha_coluna = 3;
				do {
					if (linha == rainha_linha && coluna == rainha_coluna)
						printf("R ");
					else if (linha == rainha_linha || coluna == rainha_coluna || linha - coluna == rainha_linha - rainha_coluna || linha + coluna == rainha_linha + rainha_coluna)
						printf("* ");
					else
						printf(". ");
					coluna++;
				} while (coluna < tamanho);

				printf("\n");
				linha++;
			} while (linha < tamanho);
			valido = 1;
			break;

		case 6:
			// Movimento do rei - pendente

			valido = 1;
			break;

		default:
			printf("Opcao Invalida!\n");
			break;
		}
	} while (!valido);
	return 0;
}