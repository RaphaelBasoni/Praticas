#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char Nome[40]; int Idade; int Matricula;

	printf("Entre o nome do Aluno:\n");
	fgets(Nome, 40, stdin);
	Nome[strcspn(Nome, "\n")] = '\0';

	printf("Entre a idade do Aluno:\n");
	scanf("%i", &Idade);

	printf("Entre a matricula do Aluno:\n");
	scanf("%i", &Matricula);

	printf("O aluno %s de %i de idade, matricula #%i, foi cadastrado com sucesso!\n", Nome, Idade, Matricula);

	return 0;
}