#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// declaração de variáveis da primeira carta.
char estado[2] = "A", codigo[3] = "01", cidade[50] = "Sao Paulo";
float area = 1521.11, densidade, densidadeInv, capita, superPower1;
unsigned long int populacao = 12325000;
double pib = 699280000000;
int turismo = 50;

// declaração de variáveis da segunda carta.
char estado2[2] = "B", codigo2[3] = "02", cidade2[50] = "Rio de Janeiro";
unsigned long int populacao2 = 6748000;
float area2 = 1200.25, densidade2, densidadeInv2, capita2, superPower2;
double pib2 = 300500000000;
int turismo2 = 30;

// declaração de variáveis dos menus de opcoes e resultado das batalhas.
int atributo1, atributo2, resultado1, resultado2;

int main()
{
    // Cálculo da densidade demográfica e renda per capita da primeira carta

    densidade = (float)populacao / area;
    capita = pib / (float)populacao;
    densidadeInv = (1 / densidade);
    superPower1 = (float)populacao + area + pib + (float)turismo + capita + densidadeInv;

    // Cálculo da densidade demográfica, densidade inversa, renda per capita da segunda carta
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / (float)populacao2;
    densidadeInv2 = (1 / densidade2);
    superPower2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + capita2 + densidadeInv2;

    // Menu
    printf("\n\nVamos dar inicio a BATALHA DAS CARTAS\n\n");
    printf("Escolha em qual categoria competir: \n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Turismo\n");
    printf("5. Per Capita\n");
    printf("6. Densidade Inversa\n\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
    case 1:
        printf("\n\nCategoria Populacao\n");
        printf("Populacao de %s: %lu \n", cidade, populacao);
        printf("Populacao de %s: %lu \n", cidade2, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("\n\nCategoria Area\n");
        printf("Area de %s: %f \n", cidade, area);
        printf("Area de %s: %f \n", cidade2, area2);
        resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("\n\nCategoria PIB\n");
        printf("PIB de %s: %lf \n", cidade, pib);
        printf("PIB de %s: %lf \n", cidade2, pib2);
        resultado1 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("\n\nCategoria Turismo\n");
        printf("Turismo de %s: %d \n", cidade, turismo);
        printf("Turismo de %s: %d \n", cidade2, turismo2);
        resultado1 = turismo > turismo2 ? 1 : 0;
        break;

    case 5:
        printf("\n\nCategoria Per Capita\n");
        printf("Per capita de %s: %f \n", cidade, capita);
        printf("Per capita de %s: %f \n", cidade2, capita2);
        resultado1 = capita > capita2 ? 1 : 0;
        break;

    case 6:
        printf("\n\nCategoria Densidade Inversa\n");
        printf("Densidade inversa de %s: %f \n", cidade, densidadeInv);
        printf("Densidade inversa de %s: %f \n", cidade2, densidadeInv2);
        resultado1 = densidadeInv < densidadeInv2 ? 1 : 0;
        break;

    default:
        printf("Opcao Invalida, escolha um numero entre 1 a 6 apenas");
    }

    // Segundo atributo
    printf("\n\nEscolha o segundo atributo: \n\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Turismo\n");
    printf("5. Per Capita\n");
    printf("6. Densidade Inversa\n\n");
    scanf("%d", &atributo2);

    switch (atributo2) {
    case 1:
        printf("\n\nCategoria Populacao\n");
        printf("Populacao de %s: %lu \n", cidade, populacao);
        printf("Populacao de %s: %lu \n", cidade2, populacao2);
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
        printf("\n\nCategoria Area\n");
        printf("Area de %s: %f \n", cidade, area);
        printf("Area de %s: %f \n", cidade2, area2);
        resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("\n\nCategoria PIB\n");
        printf("PIB de %s: %lf \n", cidade, pib);
        printf("PIB de %s: %lf \n", cidade2, pib2);
        resultado2 = pib > pib2 ? 1 : 0;
        break;

    case 4:
        printf("\n\nCategoria Turismo\n");
        printf("Turismo de %s: %d \n", cidade, turismo);
        printf("Turismo de %s: %d \n", cidade2, turismo2);
        resultado2 = turismo > turismo2 ? 1 : 0;
        break;

    case 5:
        printf("\n\nCategoria Per Capita\n");
        printf("Per capita de %s: %f \n", cidade, capita);
        printf("Per capita de %s: %f \n", cidade2, capita2);
        resultado2 = capita > capita2 ? 1 : 0;
        break;

    case 6:
        printf("\n\nCategoria Densidade Inversa\n");
        printf("Densidade inversa de %s: %f \n", cidade, densidadeInv);
        printf("Densidade inversa de %s: %f \n", cidade2, densidadeInv2);
        resultado2 = densidadeInv < densidadeInv2 ? 1 : 0;
        break;

    default:
        printf("Opcao Invalida, escolha um numero entre 1 a 6 apenas");
    }

    // Verificação de escolha dos atributos

    if (atributo1 == atributo2) {
        printf("Voce deve escolher atributos diferentes. Tente novamente!\n\n");
        return 0;
    }

    // Resultado

    if ((resultado1 == 1) && (resultado2 == 1)) {
        printf("Venceu!\n\n");
    } else if ((resultado1 != 1) || (resultado2 != 1)) {
        printf("Empatou!\n\n");
    }
    else {
        printf("Perdeu!\n\n");
    }
    return 0;
}