#include <stdio.h>

int main() {
    
    char Estado1[50], codigoCarta1[50], NomeCidade1[50];
    int populacao1, NumeroDePontosTuristicos1;
    float area1, pib1;

    char Estado2[50], codigoCarta2[50], NomeCidade2[50];
    int populacao2, NumeroDePontosTuristicos2;
    float area2, pib2;

    int pontos1 = 0, pontos2 = 0;

    // Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado: ");
    scanf("%s", Estado1);

    printf("Digite o Código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade1); // permite espaços

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos1);

    // Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o Estado: ");
    scanf("%s", Estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite a quantidade de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    // Exibindo as Cartas
    printf("\nCarta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", NomeCidade1);
    printf("Habitantes: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", NomeCidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);

    // Comparação
    printf("\nResultado das comparações\n");

    if (populacao1 > populacao2) { 
        printf("População: %s venceu\n", NomeCidade1); pontos1++; 
    }
    else if (populacao2 > populacao1) { 
        printf("População: %s venceu\n", NomeCidade2); pontos2++; 
    }
    else { 
        printf("População: Empate\n"); 
    }

    if (area1 > area2) { 
        printf("Área: %s venceu\n", NomeCidade1); pontos1++; 
    }
    else if (area2 > area1) { 
        printf("Área: %s venceu\n", NomeCidade2); pontos2++; 
    }
    else { 
        printf("Área: Empate\n"); 
    }

    if (pib1 > pib2) { 
        printf("PIB: %s venceu\n", NomeCidade1); pontos1++; 
    }
    else if (pib2 > pib1) { 
        printf("PIB: %s venceu\n", NomeCidade2); pontos2++; 
    }
    else { 
        printf("PIB: Empate\n"); 
    }

    if (NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2) { 
        printf("Pontos Turísticos: %s venceu\n", NomeCidade1); pontos1++; 
    }
    else if (NumeroDePontosTuristicos2 > NumeroDePontosTuristicos1) { 
        printf("Pontos Turísticos: %s venceu\n", NomeCidade2); pontos2++; 
    }
    else { 
        printf("Pontos Turísticos: Empate\n"); 
    }

    // Resultado final
    printf("\nResultado final\n");
    if (pontos1 > pontos2) {
        printf("%s venceu! (%d x %d)\n", NomeCidade1, pontos1, pontos2);
    } else if (pontos2 > pontos1) {
        printf("%s venceu! (%d x %d)\n", NomeCidade2, pontos2, pontos1);
    } else {
        printf("Empate! (%d x %d)\n", pontos1, pontos2);
    }
    return 0;
}
