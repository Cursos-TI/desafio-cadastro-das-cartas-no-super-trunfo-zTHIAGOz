#include <stdio.h>

#include <stdio.h>

int main() {
    // Carta 1
    char nomeCidade1[50];
    char estado1[30];
    char codigo1[25];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char nomeCidade2[50];
    char estado2[30];
    char codigo2[25];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada Carta 1
    printf("Digite o nome da cidade (Carta 1): ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite o estado (Carta 1): ");
    scanf(" %s", estado1);

    printf("Digite o código da carta (Carta 1): ");
    scanf(" %s", codigo1);

    printf("Digite a população (Carta 1): ");
    scanf("%d", &populacao1);

    printf("Digite a área em km2 (Carta 1): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Carta 1): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (Carta 1): ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada Carta 2
    printf("Digite o nome da cidade (Carta 2): ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite o estado (Carta 2): ");
    scanf(" %s", estado2);

    printf("Digite o código da carta (Carta 2): ");
    scanf(" %s", codigo2);

    printf("Digite a população (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Digite a área em km2 (Carta 2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Cálculos extras
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação
    int pontos1 = 0, pontos2 = 0;

    printf("Comparação de cartas:\n\n");

    if (populacao1 > populacao2) { printf("População: %s venceu\n", nomeCidade1); pontos1++; }
    else if (populacao2 > populacao1) { printf("População: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("População: Empate\n"); }

    if (area1 > area2) { printf("Área: %s venceu\n", nomeCidade1); pontos1++; }
    else if (area2 > area1) { printf("Área: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("Área: Empate\n"); }

    if (pib1 > pib2) { printf("PIB: %s venceu\n", nomeCidade1); pontos1++; }
    else if (pib2 > pib1) { printf("PIB: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("PIB: Empate\n"); }

    if (pontosTuristicos1 > pontosTuristicos2) { printf("Pontos turísticos: %s venceu\n", nomeCidade1); pontos1++; }
    else if (pontosTuristicos2 > pontosTuristicos1) { printf("Pontos turísticos: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("Pontos turísticos: Empate\n"); }

    if (densidade1 < densidade2) { printf("Densidade populacional: %s venceu\n", nomeCidade1); pontos1++; }
    else if (densidade2 < densidade1) { printf("Densidade populacional: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("Densidade populacional: Empate\n"); }

    if (pibPerCapita1 > pibPerCapita2) { printf("PIB per capita: %s venceu\n", nomeCidade1); pontos1++; }
    else if (pibPerCapita2 > pibPerCapita1) { printf("PIB per capita: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("PIB per capita: Empate\n"); }

    if (superPoder1 > superPoder2) { printf("Super poder: %s venceu\n", nomeCidade1); pontos1++; }
    else if (superPoder2 > superPoder1) { printf("Super poder: %s venceu\n", nomeCidade2); pontos2++; }
    else { printf("Super poder: Empate\n"); }

    printf("\nResultado final:\n");

    if (pontos1 > pontos2) {
        printf("%s venceu o jogo! (%d x %d)\n", nomeCidade1, pontos1, pontos2);
    } else if (pontos2 > pontos1) {
        printf("%s venceu o jogo! (%d x %d)\n", nomeCidade2, pontos2, pontos1);
    } else {
        printf("Empate geral! (%d x %d)\n", pontos1, pontos2);
    }

    return 0;
}