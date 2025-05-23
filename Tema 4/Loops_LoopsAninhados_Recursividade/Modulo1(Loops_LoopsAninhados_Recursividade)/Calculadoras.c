#include <stdio.h>

// função recursiva para fatorial
long long fatorial(int numero) {
        if (numero == 0 || numero == 1)
        return 1;
        else
        return numero * fatorial(numero - 1);
 }

// declaração das variáveis da calculadora 
int main(){
int numero, tabuada, gerador, opcao;
char continuar, continuarMenu;

// Menu da calculadora 
do {
system("clear");
printf("##### TABUADAS #####\n\n");

printf("1. Tabuada de apenas um número\n");
printf("2. Tabuada de múltiplos números\n");
printf("3. Calcular fatorial de um número\n");
printf("0. Sair do programa\n");
printf("\n");
printf("Escolha uma das opções acima: ");
scanf("%d", &opcao);
system("clear");

switch (opcao){
case 0:
        printf("Saindo do programa... Até mais!\n");
        return 0;
break;
                                                        
case 1: // tabuada construída com loop usando for
do {
        printf("\n");
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &numero);
        printf("\n");
        printf("Tabuada do número %d:\n",numero);
        for (tabuada = 1; tabuada <=10; tabuada++) {
                printf("%d x %d = %d\n", numero, tabuada, numero*tabuada);
        }
                                                                                                     
do {
        printf("Quer ver outra tabuada? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S') {
        printf("\nOpção Invalida! \nDigite 's' para SIM OU 'n' para NÃO\n");
        }
}while (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S');

system("clear");
} while (continuar == 's' || continuar == 'S');
break;
                                                                                                                                                                                                                                            
case 2: // Tabuadas construídas com loops aninhados (for for)
do {
        printf("\n");
        printf("Gerar tabuadas até qual número? ");
        scanf("%d", &numero);
        printf("\nTabuadas até o número %d:\n\n",numero);
                                                                                                                                                                                                                                                                                            
        for (gerador = 1; gerador <= numero; gerador++) {
        printf(" Tabuada do número %d: \n", gerador);
                for (tabuada = 1; tabuada <=10; tabuada++) {
                printf("%d x %d = %d\n", gerador, tabuada, gerador*tabuada);
                }
        printf("\n");
        }
                                                                                                                                                                                                                                                                                                                                                                        
do {
        printf("Quer ver outra tabuada? (s/n): ");
        scanf(" %c", &continuar);
        system("clear");
        if (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S') {
        printf("\nOpção Invalida! \nDigite 's' para Sim ou 'n' para Não.\n\n");
        }
}while (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S');

system("clear");
} while (continuar == 's' || continuar == 'S');
break;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
case 3: // Fatorial usando recursividade
do {
        printf("\nDigite um número para calcular o fatorial: ");
        scanf("%d", &numero);

        if (numero < 0) {
        printf("Fatorial não existe para números negativos!\n");
        } else {
        printf("Fatorial de %d é: %lld\n", numero, fatorial(numero));
}

do {
        printf("\nQuer calcular outro fatorial? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S') {
        printf("Opção inválida! Digite 's' para Sim ou 'n' para Não.\n");
        }
} while (continuar != 'n' && continuar != 'N' && continuar != 's' && continuar != 'S');

system("clear");
} while (continuar == 's' || continuar == 'S');
break;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
default:
        printf("Opção Invalida!");
break;
}

do {
        printf("\nDeseja voltar ao menu? (s/n): ");
        scanf(" %c", &continuarMenu);
        if (continuarMenu != 'n' && continuarMenu != 'N' && continuarMenu != 's' && continuarMenu != 'S') {
        printf("Opção inválida! Digite 's' ou 'n'.\n");
        }
} while (continuarMenu != 'n' && continuarMenu != 'N' && continuarMenu != 's' && continuarMenu != 'S');

} while (continuarMenu == 's' || continuarMenu == 'S');
return 0;
}