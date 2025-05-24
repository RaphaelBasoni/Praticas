#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int opcao, numeroSecreto, palpite;

	//Menu
	printf("Menu Principal:\n");
	printf("1. Iniciar Jogo\n");
	printf("2. Ver Regras\n");
	printf("3. Sair do Jogo\n\n");
	printf("Escolha uma opcao:");
	scanf("%d", &opcao);

	switch (opcao) {
	case 1:
		printf("Iniciando o jogo...\n");
		srand(time(0));
		numeroSecreto = rand() % 10 + 1;
		printf("Adivinhe o numero entre 1 a 10: ");
		scanf("%d", &palpite);
		if (palpite == numeroSecreto) {
			printf("Parabens! Voce Acertou!\n");
		}
		else {
			printf("Voce Errou! O numero era %d\n", numeroSecreto);
		}

		break;
	case 2:
		printf("Regras do jogo...\n");
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