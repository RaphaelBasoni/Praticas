#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char Estado1, Codigo1[3], Cidade1[20];
    char Estado2, Codigo2[3], Cidade2[20];

    unsigned long int Populacao1;
    unsigned long int Populacao2;

    int Turismo1;
    int Turismo2;

    float Area1, Densidade1, Capita1, Poder1;
    float Area2, Densidade2, Capita2, Poder2;

    double Pib1;
    double Pib2;

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
    scanf("%lu", &Populacao1);

    printf("Entre a area em KM2 da primeira carta:\n");
    scanf("%f", &Area1);

    printf("Entre o PIB da primeira carta:\n");
    scanf("%lf", &Pib1);

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
    scanf("%lu", &Populacao2);

    printf("Entre a area em KM2 da segunda carta:\n");
    scanf("%f", &Area2);

    printf("Entre o PIB da segunda carta:\n");
    scanf("%lf", &Pib2);

    printf("Entre o numero de pontos turisticos da segunda carta:\n");
    scanf("%d", &Turismo2);

    // Calculos da densidade demografica, PIB per capita e super poder.

    Densidade1 = (float)Populacao1 / Area1;
    Densidade2 = (float)Populacao2 / Area2;
    Capita1 = Pib1 / (float)Populacao1;
    Capita2 = Pib2 / (float)Populacao2;
    Poder1 = (float)Populacao1 + (float)Turismo1 + Area1 + (1 / Densidade1) + Pib1 + Capita1;
    Poder2 = (float)Populacao2 + (float)Turismo2 + Area2 + (1 / Densidade2) + Pib2 + Capita2;

    // Primeira Carta Cadastrada

    printf("\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n", Estado1, Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f km2\n", Area1);
    printf("PIB: %.2f bilhoes\n", Pib1);
    printf("Pontos turisticos: %d\n", Turismo1);
    printf("Densidade Populacional: %.2f hab/Km2 \n", Densidade1);
    printf("PIB per Capita: %.2f Reais.\n", Capita1);
    printf("Super Poder: %f.\n\n", Poder1);

    // Segunda Carta Cadastrada

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f km2\n", Area2);
    printf("PIB: %.2f bilhoes\n", Pib2);
    printf("Pontos turisticos: %d\n", Turismo2);
    printf("Densidade Populacional: %.2f hab/Km2 \n", Densidade2);
    printf("PIB per Capita: %.2f Reais.\n", Capita2);
    printf("Super Poder: %f.\n\n", Poder2);

    // Comparação das Cartas

    printf("Resultado da batalha:\n");
    printf("Quesito: Populacao\n");
    printf("Carta 1 - %s: %lu\n", Cidade1, Populacao1);
    printf("Carta 2 - %s: %lu\n", Cidade2, Populacao2);
    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao1 < Populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    }
    else {
        printf("Empatou!\n");
    }
    return 0;
}
