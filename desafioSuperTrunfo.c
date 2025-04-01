#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado_carta1;              // Letra do estado (A a H)
    char codigo_carta1[4];           // Código da carta (ex: A01)
    char nome_cidade_carta1[50];     // Nome da cidade (máximo 50 caracteres)
    int populacao_carta1;            // População da cidade
    float area_carta1;               // Área em km²
    float pib_carta1;                // PIB em bilhões de reais
    int pontos_turisticos_carta1;    // Número de pontos turísticos

    // Declaração das variáveis para a segunda carta
    char estado_carta2;              // Letra do estado (A a H)
    char codigo_carta2[4];           // Código da carta (ex: B02)
    char nome_cidade_carta2[50];     // Nome da cidade (máximo 50 caracteres)
    int populacao_carta2;            // População da cidade
    float area_carta2;               // Área em km²
    float pib_carta2;                // PIB em bilhões de reais
    int pontos_turisticos_carta2;    // Número de pontos turísticos

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado da primeira carta (A a H): ");
    scanf(" %c", &estado_carta1);  // Lê a letra do estado

    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo_carta1);  // Lê o código da carta

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nome_cidade_carta1);  // Lê o nome da cidade (inclui espaços)

    printf("Digite a populacao da primeira carta: ");
    scanf("%d", &populacao_carta1);  // Lê a população

    printf("Digite a area da primeira carta (em km2): ");
    scanf("%f", &area_carta1);  // Lê a área

    printf("Digite o PIB da primeira carta (em bilhoes de reais): ");
    scanf("%f", &pib_carta1);  // Lê o PIB

    printf("Digite o numero de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_turisticos_carta1);  // Lê o número de pontos turísticos

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado da segunda carta (A a H): ");
    scanf(" %c", &estado_carta2);  // Lê a letra do estado

    printf("Digite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo_carta2);  // Lê o código da carta

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nome_cidade_carta2);  // Lê o nome da cidade (inclui espaços)

    printf("Digite a populacao da segunda carta: ");
    scanf("%d", &populacao_carta2);  // Lê a população

    printf("Digite a area da segunda carta (em km2): ");
    scanf("%f", &area_carta2);  // Lê a área

    printf("Digite o PIB da segunda carta (em bilhoes de reais): ");
    scanf("%f", &pib_carta2);  // Lê o PIB

    printf("Digite o numero de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_turisticos_carta2);  // Lê o número de pontos turísticos

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);

    return 0;
}