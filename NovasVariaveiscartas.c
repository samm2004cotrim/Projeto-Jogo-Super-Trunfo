#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main() {
    printf("=== DESAFIO SUPER TRUNFO - ESTADOS ===\n\n");
    
    // Variáveis para os atributos das cartas
    char codigo1[5], codigo2[5]; // Códigos como A01, B02, etc.
    char nome1[50], nome2[50];   // Nomes dos estados (aceita espaços)
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2; // Novas variáveis
    float densidade1, densidade2;           // Novas variáveis

    // ========== CADASTRO DA PRIMEIRA CARTA ==========
    printf("\n--- Cadastro da Primeira Carta ---\n");
    
    printf("Instruções:\n");
    printf("1. Use um código com letra (A-H) e número (01-04). Ex: A01, B03\n");
    printf("2. Para nomes com espaços, digite normalmente (ex: São Paulo)\n\n");
    
    printf("Digite o código do Estado (ex: A01, B03): ");
    scanf("%4s", codigo1); // Limita a 4 caracteres para evitar overflow
    
    printf("Digite o nome do Estado: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a população deste Estado: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB deste Estado (em milhões de R$): ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos1);

    // Calcula PIB per capita e densidade para a primeira carta
    pib_per_capita1 = (pib1 * 1000000) / populacao1; // PIB em milhões, convertendo para unidades
    densidade1 = populacao1 / area1;

    // ========== CADASTRO DA SEGUNDA CARTA ==========
    printf("\n--- Cadastro da Segunda Carta ---\n");
    
    printf("Digite o código do Estado (ex: C02, D04): ");
    scanf("%4s", codigo2);
    
    printf("Digite o nome do Estado: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a população deste Estado: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB deste Estado (em milhões de R$): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos2);

    // Calcula PIB per capita e densidade para a segunda carta
    pib_per_capita2 = (pib2 * 1000000) / populacao2;
    densidade2 = populacao2 / area2;

    // ========== EXIBIÇÃO DAS CARTAS CADASTRADAS ==========
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    // Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    
    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  
    return 0;
}
