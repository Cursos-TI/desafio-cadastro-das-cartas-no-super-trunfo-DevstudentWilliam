#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Main Function for the Super Trunfo Game
int main() {
    // Variaveis da Carta 1
    char estado1[20];
    char codigo1[20];
    char nomeDaCidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    
    // Variaveis da Carta 2
    char estado2[20];
    char codigo2[20];
    char nomeDaCidade2[20];
    unsigned long int populacao2;  
    float area2;    
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    
    // Variaveis para comparação
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos;
    int resultadoDensidade, resultadoPibPerCapita, resultadoSuperPoder;
    
    // Cadastro da Carta 1
    printf("Bem-vindo ao Super Trunfo!\n\n");
    printf("Cadastro da Carta 1:\n\n");
    printf("Informe o Estado (Letra de A a H):\n");
    scanf(" %s", estado1);
    printf("Informe o Código da Carta (3 dígitos, ex: A01):\n");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade:\n");
    scanf(" %s", nomeDaCidade1);
    printf("Informe a População:\n");
    scanf("%lu", &populacao1);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    
    // Calculando atributos derivados da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    
    // Exibindo Carta 1
    printf("\n===Carta 1===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.6f bilhões por habitante\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n\n");
    printf("Informe o Estado (Letra de A a H):\n");
    scanf(" %s", estado2);
    printf("Informe o Código da Carta (3 dígitos, ex: B02):\n");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade:\n");
    scanf(" %s", nomeDaCidade2);
    printf("Informe a População:\n");
    scanf("%lu", &populacao2);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);
    
    // Calculando atributos derivados da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibindo Carta 2
    printf("\n===Carta 2===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.6f bilhões por habitante\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações entre as cartas
    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");
    
    // População (maior vence)
    resultadoPopulacao = (populacao1 > populacao2) ? 1 : 0;
    printf("População: Carta 1 (%lu) vs Carta 2 (%lu) - Resultado: %d\n", 
           populacao1, populacao2, resultadoPopulacao);
    
    // Área (maior vence)
    resultadoArea = (area1 > area2) ? 1 : 0;
    printf("Área: Carta 1 (%.2f) vs Carta 2 (%.2f) - Resultado: %d\n", 
           area1, area2, resultadoArea);
    
    // PIB (maior vence)
    resultadoPib = (pib1 > pib2) ? 1 : 0;
    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) - Resultado: %d\n", 
           pib1, pib2, resultadoPib);
    
    // Pontos Turísticos (maior vence)
    resultadoPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
    printf("Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) - Resultado: %d\n", 
           pontosTuristicos1, pontosTuristicos2, resultadoPontosTuristicos);
    
    // Densidade Populacional (menor vence)
    resultadoDensidade = (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0;
    printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) - Resultado: %d\n", 
           densidadePopulacional1, densidadePopulacional2, resultadoDensidade);
    
    // PIB per capita (maior vence)
    resultadoPibPerCapita = (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
    printf("PIB per capita: Carta 1 (%.6f) vs Carta 2 (%.6f) - Resultado: %d\n", 
           pibPerCapita1, pibPerCapita2, resultadoPibPerCapita);
    
    // Super Poder (maior vence)
    resultadoSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;
    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) - Resultado: %d\n", 
           superPoder1, superPoder2, resultadoSuperPoder);

    printf("\n=== LEGENDA ===\n");
    printf("1 = Carta 1 venceu\n");
    printf("0 = Carta 2 venceu\n");

    return 0;
}