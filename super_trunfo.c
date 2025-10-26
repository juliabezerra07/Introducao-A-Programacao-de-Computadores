#include <stdio.h>
int main() {
    char estado1 [3], estado2 [3];
    char codigo1 [4], codigo2 [4];
    char cidade1 [51], cidade2 [51];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2 ;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int opcao;

    // CARTA 1
    printf("-- CADASTRO DA CARTA 1 --\n");

    printf("Escolha um estado (ex.: SP): ");
    scanf("%s", &estado1);

    printf("Digite um código (ex.: A1): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao1);

   printf("Digite a área da cidade, em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // CARTA 2
    printf("-- CADASTRO DA CARTA 2 --\n");

    printf("Escolha um estado (ex.: SP): ");
    scanf(" %s", &estado2);

    printf("Digite um código (ex.: A1): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade, em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // COMPARAÇÃO
    printf("-- COMPARAÇÃO DAS CARTAS --\n");
    printf("- Carta 1 -\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("\n");

    printf("- Carta 2 -\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("\n");

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    printf("Escolha um dos atributos para comparar:\n");
    printf("1. Maior população\n");
    printf("2. Maior área\n");
    printf("3. Maior PIB\n");
    printf("4. Mais pontos turísticos\n");
    printf("5. Menor densidade populacional\n");
    printf("6. Maior PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);
    printf("\n");

    switch(opcao) {
    case 1:
        printf("Você escolheu: Maior população\n");
        printf("Carta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        if (populacao1 > populacao2) {
            printf("Carta 1 venceu!\n");
         }
        else if (populacao1 < populacao2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
        break;
    case 2: 
        printf("Você escolheu: Maior área\n");
        printf("Carta 1: %f km²\n", area1);
        printf("Carta 2: %f km²\n", area2);
        if (area1 > area2) {
            printf("Carta 1 venceu!\n");
         }
        else if (area1 < area2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
        break;
    case 3:
        printf("Você escolheu: Maior PIB\n");
        printf("Carta 1: %f bilhões de reais\n", pib1);
        printf("Carta 2: %f bilhões de reais\n", pib2);
        if (pib1 > pib2) {
            printf("Carta 1 venceu!\n");
         }
        else if (pib1 < pib2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
        break;
    case 4:
        printf("Você escolheu: Mais pontos turísticos\n");
        printf("Carta 1: %d\n", pontosTuristicos1);
        printf("Carta 2: %d\n", pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("Carta 1 venceu!\n");
         }
        else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
        break;
    case 5:
    printf("Você escolheu: Menor densidade populacional\n");
        printf("Carta 1: %f hab/km²\n", densidadePopulacional1);
        printf("Carta 2: %f hab/km²\n", densidadePopulacional2);
        if (densidadePopulacional1 > densidadePopulacional2) {
            printf("Carta 1 venceu!\n");
         }
        else if (densidadePopulacional1 < densidadePopulacional2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
        break;
    case 6:
        printf("Você escolheu: Maior PIB per capita\n");
        printf("Carta 1: R$%f\n", pibPerCapita1);
        printf("Carta 2: R$%f\n", pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 venceu!\n");
         }
        else if (pibPerCapita1 < pibPerCapita2) {
            printf("Carta 2 venceu!\n");
         }
        else {
            printf("Empate!");
        }
    default: {
        printf("Opção inválida!");
        break;
    }
    }

    return 0;
    }
