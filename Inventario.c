#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// declaração das variaveis

	char produtoA[30] = "Produto A"; 
	char produtoB[30] = "Produto B";
	
	unsigned int estoqueA = 1000;
	unsigned int estoqueB = 2000;
	
	float valorA = 10.50;
	float valorB = 20.40;
	
	unsigned int estoqueMinA = 500;
	unsigned int estoqueMinB = 2500;
	
	double valorTotalA = 0;
	double valorTotalB = 0;

	int resultadoA;
	int resultadoB;

	// exibir as informações dos produtos.
	printf("O produto %s tem estoque %u e o valor unitario R$%.2f\n", produtoA, estoqueA, valorA);
	printf("O produto %s tem estoque %u e o valor unitario R$%.2f\n", produtoB, estoqueB, valorB);

	// Comparações com o valor minimo de estoque
	resultadoA = estoqueA > estoqueMinA;
	resultadoB = estoqueB > estoqueMinB;
	printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
	printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);
	printf("1= Acima do estoque minimo | 0= Abaixo do estoque minimo\n");

	// comparacao dos valores totais
	printf("Valor Total de A (R$%.2f) eh maior que o valor total de B (R$%.2f): %d\n", (estoqueA * valorA), (estoqueB * valorB), (estoqueA * valorA) > (estoqueB * valorB));
	printf("1= Sim | 0= Nao\n");
	return 0;
}