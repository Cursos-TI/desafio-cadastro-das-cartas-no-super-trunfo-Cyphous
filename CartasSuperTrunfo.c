#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codCarta1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontoturs1;

    // Variáveis da Carta 2
    char estado2, codCarta2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontoturs2;

    // Cálculos
    float densidade1, densidade2, pibcap1, pibcap2;
    float superPoder1, superPoder2;

    // Entrada de dados
    printf("Bem-Vindo ao SUPER TRUNFO - ESTADOS BRASILEIROS!\n");

    // Carta 1
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Informe a letra do Estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codCarta1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Tamanho da População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoturs1);

    // Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Informe a letra do Estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codCarta2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Tamanho da População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoturs2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibcap1 = pib1 / populacao1;
    pibcap2 = pib2 / populacao2;

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    superPoder1 = (float)populacao1 + area1 + pib1 + pontoturs1 + pibcap1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontoturs2 + pibcap2 + (1 / densidade2);

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontoturs1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibcap1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontoturs2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibcap2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoturs1 > pontoturs2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcap1 > pibcap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
