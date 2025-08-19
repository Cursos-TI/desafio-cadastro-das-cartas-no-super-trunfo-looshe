#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declarando variáveis da carta 1
    char codigo_1[4]; 
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Declarando variáveis da carta 2
    char codigo_2[4];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Entrada de dados da carta 1
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo_1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade_1);
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao_1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos_turisticos_1);

    // Entrada de dados da carta 2
    printf("Digite o código da carta 2 (ex: A02): ");
    scanf("%s", codigo_2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade_2);
    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao_2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos_turisticos_2);

    // Saída de dados da carta 1
    printf("\n---- Carta 1 ----\n");
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões\n", pib_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);

    // Saída de dados da carta 2
    printf("\n---- Carta 2 ----\n");
    printf("Código: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    
    return 0;
}
