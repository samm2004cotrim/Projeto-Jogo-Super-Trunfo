#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    printf("Desafio Cartas Super Trunfo\n");
    
    // Variáveis para os atributos
    char codigo[5]; // A01, B03, etc.
    char nome[50];  // Aumentei o tamanho para nomes mais longos
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    printf("Instrução: Escolha um País de sua preferência e digite o nome de um Estado.\n");
    printf("Use uma letra de 'A' a 'H' seguida de um número de 01 a 04 (ex: A01, B03)\n");
    
    printf("Digite o código do Estado (ex: A01, B03): ");
    scanf("%s", codigo);
    
    printf("Digite o nome do Estado: ");
    scanf("%s", nome);
    printf("Digite a população deste Estado: ");
    scanf("%d", &populacao);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB deste Estado (em milhões): ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos);

    printf("Perfeito! Agora Escolha outro País de sua preferência e digite o nome de um estado para começar a fazer a comparação de suas cartas a carta que tiver números mais altos vencerá a rodada.\n");
    printf("Use uma letra de 'A' a 'H' seguida de um número de 01 a 04 (ex: A01, B03)\n");
    
    printf("Digite o código do Estado (ex: A01, B03): ");
    scanf("%s", codigo);
    
    printf("Digite o nome do Estado: ");
    scanf("%s", nome);
    printf("Digite a população deste Estado: ");
    scanf("%d", &populacao);
    
    printf("Digite a área deste Estado (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB deste Estado (em milhões): ");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos do Estado: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\nCarta Cadastrada número 1:\n");
    printf("Código: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\nCarta Cadastrada número 2:\n");
    printf("Código: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    return 0;
}