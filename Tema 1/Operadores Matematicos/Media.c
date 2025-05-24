#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float nota1=0, nota2=0, nota3=0, media=0;

	// Entrada de dados
	printf("entre o valor da primeira nota:\n");
	scanf("%f", &nota1);

	printf("entre o valor da segunda nota:\n");
	scanf("%f", &nota2);

	printf("entre o valor da terceira nota:\n");
	scanf("%f", &nota3);

	// Calculo da média
	media = (nota1 + nota2 + nota3) / 3;

	// Saida de dados
	printf("Nota 1: %f\n", nota1);
	printf("Nota 2: %f\n", nota2);
	printf("Nota 3: %f\n", nota3);
	printf("Media: %f\n", media);

	return 0;
}