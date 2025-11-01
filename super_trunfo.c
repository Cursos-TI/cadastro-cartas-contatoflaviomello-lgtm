#include <stdio.h>
#include <string.h>
#include <locale.h>
// Programa para cadastrar e exibir duas cartas do Super Trunfo de Pa�ses
// Cada carta cont�m informa��es sobre uma cidade em um estado brasileiro, incluindo c�lculos de densidade populacional e PIB per capita

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    // Vari�veis para a Carta 1
    char estado1;
    char codigo1[5];  // Ex: A01, tamanho suficiente para 4 caracteres + null terminator
    char nome1[50];   // Nome da cidade, tamanho suficiente para nomes comuns
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;  // Nova vari�vel para densidade populacional
    float pib_per_capita1;  // Nova vari�vel para PIB per capita
    
    // Vari�veis para a Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;  // Nova vari�vel para densidade populacional
    float pib_per_capita2;  // Nova vari�vel para PIB per capita
    
    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado da Carta 1 (uma letra de A a H): ");
    scanf(" %c", &estado1);  // Espa�o antes de %c para ignorar whitespace
    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nome1);
    printf("Digite a populacao da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade da Carta 1 em km�: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da Carta 1 (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontos1);
    
    // C�lculo para a Carta 1
    densidade1 = (float)populacao1 / area1;  // C�lculo da densidade populacional
    pib_per_capita1 = pib1 / (float)populacao1;  // C�lculo do PIB per capita (em bilh�es de reais por pessoa)
    
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
    printf("Digite a area da cidade da Carta 2 em km�: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da Carta 2 (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontos2);
    
    // C�lculo para a Carta 2
    densidade2 = (float)populacao2 / area2;  // C�lculo da densidade populacional
    pib_per_capita2 = pib2 / (float)populacao2;  // C�lculo do PIB per capita (em bilh�es de reais por pessoa)
    
    // Exibi��o dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade1);  // Exibi��o da densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);  // Exibi��o do PIB per capita
    
    // Exibi��o dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km�\n", densidade2);  // Exibi��o da densidade populacional
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);  // Exibi��o do PIB per capita
    
    return 0;
}
