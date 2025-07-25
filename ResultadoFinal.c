#include <stdio.h>
#include <string.h>

int main() {
    printf("=== DESAFIO SUPER TRUNFO - ESTADOS ===\n\n");
    printf("=== NIVEL MESTRE - BATALHA DE CARTAS ===\n\n");
    
    // Variáveis para os atributos das cartas
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float pib_per_capita1, pib_per_capita2;
    float densidade1, densidade2;
    float super_poder1, super_poder2;

    // ========== CADASTRO DA PRIMEIRA CARTA ==========
    printf("\n--- Cadastro da Primeira Carta ---\n");
    
    printf("Instruções:\n");
    printf("1. Use um código com letra (A-H) e número (01-04). Ex: A01, B03\n");
    printf("2. Para nomes com espaços, digite normalmente (ex: São Paulo)\n\n");
    
    printf("Digite o código do Estado (ex: A01, B03): ");
    scanf("%4s", codigo1);
    
    printf("Digite o nome do Estado: ");
    getchar();
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a população deste Estado: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB deste Estado (em milhões de R$): ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos1);

    // Calcula PIB per capita e densidade para a primeira carta
    pib_per_capita1 = (pib1 * 1000000) / populacao1;
    densidade1 = populacao1 / area1;
    // Calcula Super Poder (soma de todos os atributos, com densidade invertida)
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1/densidade1);

    // ========== CADASTRO DA SEGUNDA CARTA ==========
    printf("\n--- Cadastro da Segunda Carta ---\n");
    
    printf("Digite o código do Estado (ex: C02, D04): ");
    scanf("%4s", codigo2);
    
    printf("Digite o nome do Estado: ");
    getchar();
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite a população deste Estado: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB deste Estado (em milhões de R$): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos2);

    // Calcula PIB per capita e densidade para a segunda carta
    pib_per_capita2 = (pib2 * 1000000) / populacao2;
    densidade2 = populacao2 / area2;
    // Calcula Super Poder (soma de todos os atributos, com densidade invertida)
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1/densidade2);

    // ========== EXIBIÇÃO DAS CARTAS CADASTRADAS ==========
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    // Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // ========== COMPARAÇÃO DAS CARTAS ==========
    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");
    
    // População (maior vence)
    printf("\nPopulação: Carta %d venceu (%d)", 
           (populacao1 > populacao2) ? 1 : 2, 
           (populacao1 > populacao2) ? 1 : 0);
    
    // Área (maior vence)
    printf("\nÁrea: Carta %d venceu (%d)", 
           (area1 > area2) ? 1 : 2, 
           (area1 > area2) ? 1 : 0);
    
    // PIB (maior vence)
    printf("\nPIB: Carta %d venceu (%d)", 
           (pib1 > pib2) ? 1 : 2, 
           (pib1 > pib2) ? 1 : 0);
    
    // Pontos Turísticos (maior vence)
    printf("\nPontos Turísticos: Carta %d venceu (%d)", 
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, 
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
    
    // Densidade Populacional (menor vence)
    printf("\nDensidade Populacional: Carta %d venceu (%d)", 
           (densidade1 < densidade2) ? 1 : 2, 
           (densidade1 < densidade2) ? 1 : 0);
    
    // PIB per Capita (maior vence)
    printf("\nPIB per Capita: Carta %d venceu (%d)", 
           (pib_per_capita1 > pib_per_capita2) ? 1 : 2, 
           (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
    
    // Super Poder (maior vence)
    printf("\nSuper Poder: Carta %d venceu (%d)\n", 
           (super_poder1 > super_poder2) ? 1 : 2, 
           (super_poder1 > super_poder2) ? 1 : 0);
    
    return 0;
}
