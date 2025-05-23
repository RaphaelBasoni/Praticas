#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char Estado1, Codigo1[3], Cidade1[20];
    char Estado2, Codigo2[3], Cidade2[20];
    int Populacao1, Turismo1;
    int Populacao2, Turismo2;
    float Area1, Pib1, Densidade1, Capita1;
    float Area2, Pib2, Densidade2, Capita2;

    // Cadastro da Primeira Carta

    printf("Entre 1 letra para o estado da primeira carta:\n");
    scanf(" %c", &Estado1);

    printf("Entre o codigo da primeira carta:\n");
    scanf("%2s", Codigo1);

    getchar();

    printf("Entre o nome da cidade da primeira carta:\n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0';

    printf("Entre a populacao da primeira carta:\n");
    scanf("%d", &Populacao1);

    printf("Entre a area em KM2 da primeira carta:\n");
    scanf("%f", &Area1);

    printf("Entre o PIB da primeira carta:\n");
    scanf("%f", &Pib1);

    printf("Entre o numero de pontos turisticos da primeira carta:\n");
    scanf("%d", &Turismo1);

    // Cadastro da Segunda Carta

    printf("\n\n");
    printf("Entre 1 letra para o estado da segunda carta:\n");
    scanf(" %c", &Estado2);

    printf("Entre o codigo da segunda carta:\n");
    scanf("%2s", Codigo2);

    getchar();

    printf("Entre o nome da cidade da segunda carta:\n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';

    printf("Entre a populacao da segunda carta:\n");
    scanf("%d", &Populacao2);

    printf("Entre a area em KM2 da segunda carta:\n");
    scanf("%f", &Area2);

    printf("Entre o PIB da segunda carta:\n");
    scanf("%f", &Pib2);

    printf("Entre o numero de pontos turisticos da segunda carta:\n");
    scanf("%d", &Turismo2);

    // Calculos da densidade demografica e PIB per capita.

    Densidade1 = Populacao1 / Area1;
    Densidade2 = Populacao2 / Area2;
    Capita1 = Pib1 / Populacao1;
    Capita2 = Pib2 / Populacao2;

    // Primeira Carta Cadastrada

    printf("\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n", Estado1, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km2\n", Area1);
    printf("PIB: %.2f bilhoes\n", Pib1);
    printf("Pontos turisticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/Km2 \n", Densidade1);
    printf("PIB per Capita: %.2f Reais.\n\n", Capita1);

    // Segunda Carta Cadastrada

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km2\n", Area2);
    printf("PIB: %.2f bilhoes\n", Pib2);
    printf("Pontos turisticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/Km2 \n", Densidade2);
    printf("PIB per Capita: %.2f Reais.\n\n", Capita2);

    return 0;
}
