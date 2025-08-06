/// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.
// nivel novato

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
    float densidadePopulacional1 = 0.0f, pibPerCapita1 = 0.0f, superPoder1 = 0.0f;

    printf("\n-- Faça a primeira carta --\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
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
    float densidadePopulacional2 = 0.0f, pibPerCapita2 = 0.0f, superPoder2 = 0.0f;

    printf("\n-- Faça a segunda carta --\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
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
        densidadePopulacional1 = (float)populacao1 / area1;
    else {
        printf("Atenção: Área da Carta 1 é zero! Densidade definida como 0.\n");
    }

    if (populacao1 != 0)
        pibPerCapita1 = pib1 * 1000000000.0f / populacao1;
    else {
        printf("Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\n");
    }

    float invDensidade1 = (densidadePopulacional1 != 0.0f) ? (1.0f / densidadePopulacional1) : 0.0f;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + invDensidade1;

    // --- Cálculos carta 2 ---
    if (area2 != 0.0f)
        densidadePopulacional2 = (float)populacao2 / area2;
    else {
        printf("Atenção: Área da Carta 2 é zero! Densidade definida como 0.\n");
    }

    if (populacao2 != 0)
        pibPerCapita2 = pib2 * 1000000000.0f / populacao2;
    else {
        printf("Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.\n");
    }

    float invDensidade2 = (densidadePopulacional2 != 0.0f) ? (1.0f / densidadePopulacional2) : 0.0f;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + invDensidade2;

    // --- Exibição carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
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
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("--------------\n");

    // --- Comparação ---
    printf("\n---- COMPARAÇÃO DE CARTAS ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2); 
    printf("Super Poder: %d\n", superPoder1 > superPoder2); 
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);        
  

    printf("--------------\n");


    // --- Verificação de vencedor ---
    printf("\n---- Carta vencedora ---\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s, %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s, %d\n\n", nomeCidade2, populacao2);
        printf("Carta 1 é a vencedora!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 1 - %s, %ld\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s, %d\n\n", nomeCidade2, populacao2);
        printf("Carta 2 é a vencedora!\n");
    } else {
        printf("Carta 1 - %s, %ld\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s, %d\n", nomeCidade2, populacao2);
        printf("Empate!\n");
    }

    printf("--------------\n");
    return 0;
}