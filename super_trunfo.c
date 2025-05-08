#include <stdio.h>

int main() {
    // Declaração de variáveis

    // CARTA 1
    char estado1, codigo1[3], nome1[20];
    int populacao1, pontos1;
    float area1, pib1;

    // CARTA 2
    char estado2, codigo2[3], nome2[20];
    int populacao2, pontos2;
    float area2, pib2;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao SUPER TRUNFO!\n\n");

    // CARTA 1
    printf("Insira os dados da carta 1.\n\n");

    // ESTADO
    printf("Digite o Estado (uma letra): ");
    while ((getchar()) != '\n'); // limpa buffer
    scanf("%c", &estado1);

    // CÓDIGO
    printf("Digite o código (ex: SP): ");
    scanf("%s", codigo1);

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    while ((getchar()) != '\n'); // limpa buffer
    fgets(nome1, sizeof(nome1), stdin);

    // POPULAÇÃO
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    // ÁREA
    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    // PONTOS TURÍSTICOS
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // CARTA 2
    printf("\nInsira os dados da carta 2.\n\n");

    // ESTADO
    printf("Digite o Estado (uma letra): ");
    while ((getchar()) != '\n'); // limpa buffer
    scanf("%c", &estado2);

    // CÓDIGO
    printf("Digite o código (ex: RJ): ");
    scanf("%s", codigo2);

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    while ((getchar()) != '\n'); // limpa buffer
    fgets(nome2, sizeof(nome2), stdin);

    // POPULAÇÃO
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    // ÁREA
    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    // PONTOS TURÍSTICOS
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibindo os dados ao usuário:

    // CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s", nome1); // já inclui \n
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    // CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s", nome2); // já inclui \n
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    return 0;
}
