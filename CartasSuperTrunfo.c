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

    printf("Bem-Vindo ao SUPER TRUNFO - ESTADOS BRASILEIROS!\n");

    // Entrada da carta 1
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

    // Entrada da carta 2
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

    // Cálculos adicionais
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibcap1 = pib1 / populacao1;
    pibcap2 = pib2 / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + pontoturs1 + pibcap1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontoturs2 + pibcap2 + (1 / densidade2);

    int op1, op2;
    float valor1_1 = 0, valor1_2 = 0, valor2_1 = 0, valor2_2 = 0;
    char nomeAttr1[30], nomeAttr2[30];

    // Menu de escolha do primeiro atributo
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n> ");
    scanf("%d", &op1);

    // Menu de escolha do segundo atributo (dinâmico)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != op1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("> ");
    scanf("%d", &op2);

    // Atribuindo valores conforme escolhas
    switch(op1) {
        case 1: valor1_1 = populacao1; valor2_1 = populacao2; sprintf(nomeAttr1, "População"); break;
        case 2: valor1_1 = area1; valor2_1 = area2; sprintf(nomeAttr1, "Área"); break;
        case 3: valor1_1 = pib1; valor2_1 = pib2; sprintf(nomeAttr1, "PIB"); break;
        case 4: valor1_1 = pontoturs1; valor2_1 = pontoturs2; sprintf(nomeAttr1, "Pontos Turísticos"); break;
        case 5: valor1_1 = densidade1; valor2_1 = densidade2; sprintf(nomeAttr1, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    switch(op2) {
        case 1: valor1_2 = populacao1; valor2_2 = populacao2; sprintf(nomeAttr2, "População"); break;
        case 2: valor1_2 = area1; valor2_2 = area2; sprintf(nomeAttr2, "Área"); break;
        case 3: valor1_2 = pib1; valor2_2 = pib2; sprintf(nomeAttr2, "PIB"); break;
        case 4: valor1_2 = pontoturs1; valor2_2 = pontoturs2; sprintf(nomeAttr2, "Pontos Turísticos"); break;
        case 5: valor1_2 = densidade1; valor2_2 = densidade2; sprintf(nomeAttr2, "Densidade Demográfica"); break;
        default: printf("Atributo inválido!\n"); return 1;
    }

    // Comparações individuais
    printf("\n--- COMPARAÇÃO INDIVIDUAL ---\n");
    printf("%s:\n%s = %.2f | %s = %.2f\n", nomeAttr1, nomeCidade1, valor1_1, nomeCidade2, valor2_1);
    if (op1 == 5) {
        printf("=> %s venceu!\n", (valor1_1 < valor2_1) ? nomeCidade1 : (valor2_1 < valor1_1) ? nomeCidade2 : "Empate");
    } else {
        printf("=> %s venceu!\n", (valor1_1 > valor2_1) ? nomeCidade1 : (valor2_1 > valor1_1) ? nomeCidade2 : "Empate");
    }

    printf("\n%s:\n%s = %.2f | %s = %.2f\n", nomeAttr2, nomeCidade1, valor1_2, nomeCidade2, valor2_2);
    if (op2 == 5) {
        printf("=> %s venceu!\n", (valor1_2 < valor2_2) ? nomeCidade1 : (valor2_2 < valor1_2) ? nomeCidade2 : "Empate");
    } else {
        printf("=> %s venceu!\n", (valor1_2 > valor2_2) ? nomeCidade1 : (valor2_2 > valor1_2) ? nomeCidade2 : "Empate");
    }

    // Soma final (com ajuste para densidade)
    float soma1 = (op1 == 5 ? (1 / valor1_1) : valor1_1) + (op2 == 5 ? (1 / valor1_2) : valor1_2);
    float soma2 = (op1 == 5 ? (1 / valor2_1) : valor2_1) + (op2 == 5 ? (1 / valor2_2) : valor2_2);

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Soma dos atributos:\n%s = %.2f\n%s = %.2f\n", nomeCidade1, soma1, nomeCidade2, soma2);

    if (soma1 > soma2) {
        printf(">>> %s venceu a rodada!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf(">>> %s venceu a rodada!\n", nomeCidade2);
    } else {
        printf(">>> Empate!\n");
    }

    return 0;
}
