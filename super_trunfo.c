#include <stdio.h>
#include <string.h>
// Programa para cadastrar e exibir duas cartas do Super Trunfo de Países
// Cada carta contém informações sobre uma cidade em um estado brasileiro
int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[5];  // Ex: A01, tamanho suficiente para 4 caracteres + null terminator
    char nome1[50];   // Nome da cidade, tamanho suficiente para nomes comuns
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado da Carta 1 (uma letra de A a H): ");
    scanf(" %c", &estado1);  // Espaço antes de %c para ignorar whitespace
    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nome1);
    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da Carta 1 em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos1);
    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado da Carta 2 (uma letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", nome2);
    printf("Digite a populacao da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade da Carta 2 em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos2);
    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    return 0;
}
