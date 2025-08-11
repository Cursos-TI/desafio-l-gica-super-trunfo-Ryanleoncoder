/// Descrição do projeto : Este código é uma implementação simples de um jogo de cartas chamado "Super Trunfo" em C.
// nivel logica aventureiro

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

    int venceu_populacao = populacao1 > populacao2 ? 1 : 0;
    int venceu_area = area1 > area2 ? 1 : 0;
    int venceu_pib = pib1 > pib2 ? 1 : 0;
    int venceu_pontos = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    int venceu_densidade = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0; // menor vence
    int venceu_pibpercapita = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
    int venceu_superpoder = superPoder1 > superPoder2 ? 1 : 0;

    // Impressão dos resultados
    printf("\n--- Resultados das Comparações Diretas (1=C1 Venceu/0=C1 Perdeu ou Empatou) ---\n");
    printf("População: %d\n", venceu_populacao);
    printf("Área: %d\n", venceu_area);
    printf("PIB: %d\n", venceu_pib);
    printf("Pontos Turísticos: %d\n", venceu_pontos);
    printf("Densidade Populacional (menor vence): %d\n", venceu_densidade);
    printf("PIB per capita: %d\n", venceu_pibpercapita);
    printf("Super Poder: %d\n", venceu_superpoder);
    printf("------------------------------------------\n");
    
    

       
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

    switch (escolha) {
    case 1: // População
        printf("Critério escolhido: População\n");
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
        break;

    case 2: // Área
        printf("Critério escolhido: Área\n");
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
        break;

    case 3: // PIB
        printf("Critério escolhido: PIB\n");
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
        break;

    case 4: // Número de Pontos Turísticos
        printf("Critério escolhido: Número de Pontos Turísticos\n");
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
        break;

    case 5: // Densidade Demográfica (regra invertida: menor vence)
        printf("Critério escolhido: Densidade Demográfica\n");
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
        break;

    case 6: // PIB per Capita
        printf("Critério escolhido: PIB per Capita\n");
        printf("Atributo: PIB per Capita\n");
        printf("%s: %.2lf\n", nomeCidade1, pibPerCapita1);
        printf("%s: %.2lf\n", nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 7: // Super Poder
        printf("Critério escolhido: Super Poder\n");
        printf("Atributo: Super Poder\n");
        printf("%s: %.2lf\n", nomeCidade1, superPoder1);
        printf("%s: %.2lf\n", nomeCidade2, superPoder2);
        if (superPoder1 > superPoder2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (superPoder2 > superPoder1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
 }
    printf("--------------\n");

    int atributo1 = 0, atributo2 = 0;
    double valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    // Escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO critério de comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n7. Super Poder\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (não pode repetir o primeiro)
    do {
        printf("\nEscolha o SEGUNDO critério de comparação (diferente do primeiro):\n");
        printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n7. Super Poder\n");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
        }
    } while (atributo2 == atributo1);

    // Pega os valores dos atributos para cada carta usando switch
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTuristicos1; valor1_c2 = pontosTuristicos2; break;
        case 5: valor1_c1 = densidadePopulacional1; valor1_c2 = densidadePopulacional2; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; break;
        case 7: valor1_c1 = superPoder1; valor1_c2 = superPoder2; break;
    }
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTuristicos1; valor2_c2 = pontosTuristicos2; break;
        case 5: valor2_c1 = densidadePopulacional1; valor2_c2 = densidadePopulacional2; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; break;
        case 7: valor2_c1 = superPoder1; valor2_c2 = superPoder2; break;
    }

    // Regra: densidade populacional (5) menor vence, demais maior vence
    int res1 = (atributo1 == 5) ? (valor1_c1 < valor1_c2 ? 1 : (valor1_c1 > valor1_c2 ? 2 : 0))
                                : (valor1_c1 > valor1_c2 ? 1 : (valor1_c1 < valor1_c2 ? 2 : 0));
    int res2 = (atributo2 == 5) ? (valor2_c1 < valor2_c2 ? 1 : (valor2_c1 > valor2_c2 ? 2 : 0))
                                : (valor2_c1 > valor2_c2 ? 1 : (valor2_c1 < valor2_c2 ? 2 : 0));

    // Soma dos atributos
    double soma1 = valor1_c1 + valor2_c1;
    double soma2 = valor1_c2 + valor2_c2;

    // Exibição clara do resultado
    printf("\nComparação dos atributos:\n");
    printf("%s: %.2lf e %.2lf (soma: %.2lf)\n", nomeCidade1, valor1_c1, valor2_c1, soma1);
    printf("%s: %.2lf e %.2lf (soma: %.2lf)\n", nomeCidade2, valor1_c2, valor2_c2, soma2);

    printf("\nResultado individual dos atributos:\n");
    printf("Atributo 1: %s\n", res1 == 1 ? nomeCidade1 : res1 == 2 ? nomeCidade2 : "Empate");
    printf("Atributo 2: %s\n", res2 == 1 ? nomeCidade1 : res2 == 2 ? nomeCidade2 : "Empate");

    printf("\nResultado final da rodada:\n");
    if (soma1 > soma2)
        printf("Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    else
        printf("Empate!\n");

    printf("--------------\n");

 return 0;

}