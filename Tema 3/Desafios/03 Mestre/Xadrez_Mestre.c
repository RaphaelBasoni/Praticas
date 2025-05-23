#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ------------------- Funções para Torre -------------------
void imprimir_linha_torre(int linha, int coluna, int tamanho, int torre_linha, int torre_coluna) {
	if (coluna >= tamanho) {
		printf("\n");
		return;
	}
	if (linha == torre_linha || coluna == torre_coluna)
		printf("T ");
	else
		printf(". ");
	imprimir_linha_torre(linha, coluna + 1, tamanho, torre_linha, torre_coluna);
}

void imprimir_tabuleiro_torre(int linha, int tamanho, int torre_linha, int torre_coluna) {
	if (linha >= tamanho)
		return;
	imprimir_linha_torre(linha, 0, tamanho, torre_linha, torre_coluna);
	imprimir_tabuleiro_torre(linha + 1, tamanho, torre_linha, torre_coluna);
}

// ------------------- Funções para Bispo -------------------
void imprimir_linha_bispo(int linha, int coluna, int tamanho, int bispo_linha, int bispo_coluna) {
	if (coluna >= tamanho) {
		printf("\n");
		return;
	}
	if ((linha - coluna == bispo_linha - bispo_coluna) || (linha + coluna == bispo_linha + bispo_coluna))
		printf("B ");
	else
		printf(". ");
	imprimir_linha_bispo(linha, coluna + 1, tamanho, bispo_linha, bispo_coluna);
}

void imprimir_tabuleiro_bispo(int linha, int tamanho, int bispo_linha, int bispo_coluna) {
	if (linha >= tamanho)
		return;
	imprimir_linha_bispo(linha, 0, tamanho, bispo_linha, bispo_coluna);
	imprimir_tabuleiro_bispo(linha + 1, tamanho, bispo_linha, bispo_coluna);
}

// ------------------- Funções para Rainha -------------------
void imprimir_linha_rainha(int linha, int coluna, int tamanho, int rainha_linha, int rainha_coluna) {
	if (coluna >= tamanho) {
		printf("\n");
		return;
	}
	if (linha == rainha_linha && coluna == rainha_coluna)
		printf("R ");
	else if (linha == rainha_linha || coluna == rainha_coluna || linha - coluna == rainha_linha - rainha_coluna || linha + coluna == rainha_linha + rainha_coluna)
		printf("* ");
	else
		printf(". ");
	imprimir_linha_rainha(linha, coluna + 1, tamanho, rainha_linha, rainha_coluna);
}

void imprimir_tabuleiro_rainha(int linha, int tamanho, int rainha_linha, int rainha_coluna) {
	if (linha >= tamanho)
		return;
	imprimir_linha_rainha(linha, 0, tamanho, rainha_linha, rainha_coluna);
	imprimir_tabuleiro_rainha(linha + 1, tamanho, rainha_linha, rainha_coluna);
}

// ------------------- Função Principal -------------------
int main() {
	int opcao;
	int tamanho = 7;
	char continuar;
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
			printf("Movimento do peao:\n");
			printf("Em breve .... (ainda nao solicitado pelo professor)\n\n");
			break;

		case 2:
			printf("Movimento da Torre:\n");
			printf("Se move livremente na horizontal ou vertical\n\n");
			imprimir_tabuleiro_torre(0, tamanho, 3, 3);
			break;

		case 3:
			printf("Movimento do cavalo:\n");
			printf("Se move em 'L': duas casas para cima e uma para a direita.\n\n");
			for (int linha = 0; linha < tamanho; linha++) {
				for (int coluna = 0; coluna < tamanho; coluna++) {
					int valido_movimento = 0;

					if (linha == 4 && coluna == 2) {
						printf("C ");
						continue;
					}

					if (linha == 4 - 2 && coluna == 2 + 1)
						valido_movimento = 1;

					if (valido_movimento)
						printf("C ");
					else
						printf(". ");
				}
				printf("\n");
			}
			break;

		case 4:
			printf("Movimento do Bispo:\n");
			printf("Se move livremente na diagonal\n\n");
			imprimir_tabuleiro_bispo(0, tamanho, 3, 3);
			break;

		case 5:
			printf("Movimento da Rainha:\n");
			imprimir_tabuleiro_rainha(0, tamanho, 3, 3);
			break;

		case 6:
			printf("Movimento do Rei:\n");
			printf("Em breve .... (ainda nao solicitado pelo professor)\n\n");
			break;

		default:
			printf("Opcao Invalida!\n");
			break;
		}

		printf("\nDeseja escolher outra peca? (S/N): ");
		scanf(" %c", &continuar);

	} while (continuar == 'S' || continuar == 's');

	return 0;
}
