#define _CRT_SECURE_NO_WARNINGS
//bibliotecas:
#include <stdio.h>
//contantes:
#define qtd_alunos 3
#define qtd_notas 3
//inicio do programa
int main() {
	// declaração de array de strings para guardar os nomes dos alunos (cada aluno pode ter ate 50 caracteres em seus nomes)
	char nomes[qtd_alunos][50];
	// declaração da matriz de floats para guardar as notas dos alunos (cada linha é um aluno, cada coluna é uma nota)
	float notas[qtd_alunos][qtd_notas];
	// declaração de variaveis
	float soma, media;

	//Primeiro loop: Cadastro dos alunos e notas
	for (int i = 0; i < qtd_alunos; i++) { //percorre cada aluno
		printf("\n");
		printf("Digite o nome do aluno %d:\n", i + 1); //Pede o nome do aluno
		scanf(" %[^\n]", nomes[i]); //faz a leitura ate o [enter] permitindo espaços
		for (int j = 0; j < qtd_notas; j++) { //Loop interno que percorre as notas dos alunos
			printf("\n");
			printf("Digite a nota %d do aluno %s:", j + 1, nomes[i]);
			scanf("%f", &notas[i][j]); //Solicita a nota do aluno atualmente no loop, e na matriz na posicao [i][j], sendo [i=linha=aluno][j=coluna=nota]
		}
	}
	//Exibir resultados
	printf("\n----- Resultado dos alunos -----\n");
	//Segundo loop: Calculo de médias
	for (int i = 0; i < qtd_alunos; i++) { //Percorre novamente cada aluno para calcular média e exibir resultados
		soma = 0;
		for (int j = 0; j < qtd_notas; j++) { 
			soma += notas[i][j]; //Soma as 3 notas do aluno
		}
		media = soma / qtd_notas; //Calcula a média dividindo a soma pela quantidade de notas.
		printf("Aluno: %s - Media: %.2f - ", nomes[i], media);
	//Status do aluno
		if (media >= 7) {
			printf("Aprovado!\n");
		}
		else {
			printf("Reprovado!\n");
		}

	}

return 0;
}