/// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.
// nivel logica intermediário

#include <stdio.h>

int main() {
    // --- Carta 1 ---
    char estado1;
    char codigo1[50];
    char nomeCidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
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
    scanf("%lf", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Carta 2 ---
    char estado2;
    char codigo2[50];
    char nomeCidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
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
    scanf("%lf", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos carta 1 ---
    if (area1 != 0.0)
        densidadePopulacional1 = (double)populacao1 / area1;
    else {
        printf("Atenção: Área da Carta 1 é zero! Densidade definida como 0.\n");
    }

    if (populacao1 != 0)
        pibPerCapita1 = pib1 * 1000000000.0 / (double)populacao1;
    else {
        printf("Atenção: População da Carta 1 é zero! PIB per Capita definido como 0.\n");
    }

    double invDensidade1 = (densidadePopulacional1 != 0.0) ? (1.0 / densidadePopulacional1) : 0.0;
    superPoder1 = (double)populacao1 + area1 + pib1 + (double)pontosTuristicos1 + pibPerCapita1 + invDensidade1;

    // --- Cálculos carta 2 ---
    if (area2 != 0.0)
        densidadePopulacional2 = (double)populacao2 / area2;
    else {
        printf("Atenção: Área da Carta 2 é zero! Densidade definida como 0.\n");
    }

    if (populacao2 != 0)
        pibPerCapita2 = pib2 * 1000000000.0 / (double)populacao2;
    else {
        printf("Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.\n");
    }

    double invDensidade2 = (densidadePopulacional2 != 0.0) ? (1.0 / densidadePopulacional2) : 0.0;
    superPoder2 = (double)populacao2 + area2 + pib2 + (double)pontosTuristicos2 + pibPerCapita2 + invDensidade2;

    // --- Exibição carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
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
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2lf reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n", superPoder2);
    printf("--------------\n");

    // --- Menu de Comparação de cartas ---
    int escolha;
    printf("\n---- COMPARAÇÃO DE CARTAS  ----\n");
    printf("\nEscolha o critério de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha);

    printf("--------------\n");
    switch (escolha)
    {
    case 1:
        printf("Critério escolhido: População\n");
        break;
    case 2:
        printf("Critério escolhido: Área\n");
        break;
    case 3:
        printf("Critério escolhido: PIB\n");
        break;
    case 4:
        printf("Critério escolhido: Número de Pontos Turísticos\n");
        break;
    case 5:
        printf("Critério escolhido: Densidade Populacional\n");
        break;
    case 6:
        printf("Critério escolhido: PIB per Capita\n");
        break;
    case 7:
        printf("Critério escolhido: Super Poder\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    if (escolha == 1) {  // População
    printf("Atributo: População\n");
    printf("%s: %lu\n", nomeCidade1, populacao1);
    printf("%s: %lu\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

} else if (escolha == 2) {  // Área
    printf("Atributo: Área\n");
    printf("%s: %.2lf km²\n", nomeCidade1, area1);
    printf("%s: %.2lf km²\n", nomeCidade2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

} else if (escolha == 3) {  // PIB
    printf("Atributo: PIB\n");
    printf("%s: %.2lf bilhões\n", nomeCidade1, pib1);
    printf("%s: %.2lf bilhões\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

} else if (escolha == 4) {  // Pontos turísticos
    printf("Atributo: Número de Pontos Turísticos\n");
    printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
    printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

} else if (escolha == 5) {  // Densidade demográfica (regra invertida)
    printf("Atributo: Densidade Demográfica\n");
    printf("%s: %.2lf habitantes/km²\n", nomeCidade1, densidadePopulacional1);
    printf("%s: %.2lf habitantes/km²\n", nomeCidade2, densidadePopulacional2);

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

} else {
    printf("Opção inválida! Tente novamente.\n");
}
printf("--------------\n");

return 0;

}