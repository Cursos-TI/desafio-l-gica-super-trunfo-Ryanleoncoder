/// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.
// nivel logica novato

#include <stdio.h>

int main() {
    // --- Carta 1 ---
    char estado1;
    char codigo1[50];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    double densidadePopulacional1 = 0.0, pibPerCapita1 = 0.0, superPoder1 = 0.0;

    printf("\n-- Faça a primeira carta --\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%49s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Carta 2 ---
    char estado2;
    char codigo2[50];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    double densidadePopulacional2 = 0.0, pibPerCapita2 = 0.0, superPoder2 = 0.0;

    printf("\n-- Faça a segunda carta --\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%49s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos carta 1 ---
    if (area1 != 0.0f)
        densidadePopulacional1 = (double)populacao1 / (double)area1;
    else {
        printf("Atenção: Área da Carta 1 é zero! Densidade definida como 0.\n");
    }

    if (populacao1 != 0)
        pibPerCapita1 = (double)pib1 * 1000000000.0 / (double)populacao1;
    else {
        printf("Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\n");
    }

    double invDensidade1 = (densidadePopulacional1 != 0.0) ? (1.0 / densidadePopulacional1) : 0.0;
    superPoder1 = (double)populacao1 + (double)area1 + (double)pib1 + (double)pontosTuristicos1 + pibPerCapita1 + invDensidade1;

    // --- Cálculos carta 2 ---
    if (area2 != 0.0f)
        densidadePopulacional2 = (double)populacao2 / (double)area2;
    else {
        printf("Atenção: Área da Carta 2 é zero! Densidade definida como 0.\n");
    }

    if (populacao2 != 0)
        pibPerCapita2 = (double)pib2 * 1000000000.0 / (double)populacao2;
    else {
        printf("Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.\n");
    }

    double invDensidade2 = (densidadePopulacional2 != 0.0) ? (1.0 / densidadePopulacional2) : 0.0;
    superPoder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)pontosTuristicos2 + pibPerCapita2 + invDensidade2;

    // --- Exibição carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2lf reais\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n", superPoder1);
    printf("--------------\n");

    // --- Exibição carta 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2lf reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n", superPoder2);
    printf("--------------\n");

    // --- Comparação de cartas (Atributo: População) ---
    printf("\n---- COMPARAÇÃO DE CARTAS (Atributo: População) ----\n");
    printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("--------------\n");

    return 0;
}