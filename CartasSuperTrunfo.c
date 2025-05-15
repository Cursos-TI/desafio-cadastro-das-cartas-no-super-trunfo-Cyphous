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

    superPoder1 = (float)populacao1 + area1 + pib1 + pontoturs1 + pibcap1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontoturs2 + pibcap2 + (1 / densidade2);

    int opcao;

    // Menu interativo
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação ---\n");
    printf("Carta 1 - %s\n", nomeCidade1);
    printf("Carta 2 - %s\n", nomeCidade2);

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %lu | %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Área:\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bi | %s: %.2f bi\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, pontoturs1, nomeCidade2, pontoturs2);
            if (pontoturs1 > pontoturs2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (pontoturs2 > pontoturs1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade Demográfica (quanto menor, melhor):\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}
