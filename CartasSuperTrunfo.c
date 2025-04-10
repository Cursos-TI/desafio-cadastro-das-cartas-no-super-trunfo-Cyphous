int main() {

    char estado1;                // Letra do Estado da Carta 1
    char codCarta1[4];           // Código da Carta 1 (ex: A01)
    char nomeCidade1[50];        // Nome da Cidade da Carta 1
    int populacao1;
    float area1;
    float pib1;
    int pontoturs1;

    char estado2;                // Letra do Estado da Carta 2
    char codCarta2[4];           // Código da Carta 2 (ex: B02)
    char nomeCidade2[50];        // Nome da Cidade da Carta 2
    int populacao2;
    float area2;
    float pib2;
    int pontoturs2;

    printf("Bem-Vindo ao SUPER TRUNFO - ESTADOS BRASILEIROS!\n");

    // Cadastro da primeira carta
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Informe a letra do Estado (de A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codCarta1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Tamanho da População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoturs1);

    // Cadastro da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Informe a letra do Estado (de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codCarta2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Tamanho da População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontoturs2);

    // Exibição dos dados
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontoturs1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontoturs2);

    return 0;
}

