#include <stdio.h>

int main() {
    // Dados sobre o Rio de Janeiro
    char estado_rj[] = "Rio de Janeiro";
    char codigo_rj[] = "a01";
    long long populacao_rj = 6748000;  // População aproximada
    float tamanho_km2_rj = 1200.27;    // Área em km²
    double pib_rj = 382.04;            // PIB em bilhões de reais
    int num_pontos_turisticos_rj = 5;  // Número de pontos turísticos

    // Exibição dos dados do Rio de Janeiro
    printf("--- Dados do Rio de Janeiro ---\n");
    printf("Código: %s\n", codigo_rj);
    printf("Estado: %s\n", estado_rj);
    printf("População: %lld habitantes\n", populacao_rj);
    printf("Tamanho: %.2f km²\n", tamanho_km2_rj);
    printf("PIB: R$ %.2f bilhões\n", pib_rj);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos_rj);

    printf("\n"); // Adiciona uma linha em branco para separar os dados

    // Dados sobre São Paulo
    char estado_sp[] = "São Paulo";
    char codigo_sp[] = "a02";
    long long populacao_sp = 11452000;  // População aproximada
    float tamanho_km2_sp = 1521.0;     // Área em km²
    double pib_sp = 3500.0;             // PIB em bilhões de reais 
    int num_pontos_turisticos_sp = 50;  // Número de pontos turísticos

    // Exibição dos dados de São Paulo
    printf("--- Dados de São Paulo ---\n");
    printf("Código: %s\n", codigo_sp);
    printf("Estado: %s\n", estado_sp);
    printf("População: %lld habitantes\n", populacao_sp);
    printf("Tamanho: %.2f km²\n", tamanho_km2_sp);
    printf("PIB: R$ %.2f bilhões\n", pib_sp);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos_sp);

    return 0; 
}