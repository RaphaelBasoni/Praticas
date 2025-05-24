#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	/* Este programa de gerenciamento de notas deve determinar o status do estudante com base em suas notas 
	calculando media e determinar status */

	int opcao;
	float nota1 =-1, nota2=-1, media=-1;

	printf("Menu de gerenciamento de estudante\n\n");
	printf("1. Calcular Media\n");
	printf("2. Determinar Status\n");
	printf("3. Sair\n");
	printf("Escolha uma opcao:");
	scanf("%d", &opcao);

	switch (opcao) {
		case 1:
			printf("\n\n### CALCULAR MEDIA ###\n\n");

			printf("\n\nEntre a nota1: ");
			scanf("%f", &nota1);
			if (nota1 < 0 || nota1 > 10) {
				printf("Valor Invalido!");
				break;
			}
			printf("Entre a nota2: ");
			scanf("%f", &nota2);
			if (nota2 < 0 || nota2 > 10) {
				printf("Valor Invalido!");
				break;
			}
			media = (nota1 + nota2) / 2;
			printf("A SUA MEDIA E: %.2f\n", media);
			break;

		case 2:
			printf("\n\nStatus");
			break;

		case 3:
			return 0;
			break;
		default:
			printf("Opcao invalida!");
			break;
	}
}