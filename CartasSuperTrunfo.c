#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Main Function for the Super Trunfo Game
int main() {
// Variaveis da Carta 1
    char estado1 [20];
    char codigo1 [20];
    char nomeDaCidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    //    float densidade1; // Densidade populacional (População / Área)
      
    
//Variaveis da Carta 2
    char estado2 [20];
    char codigo2 [20];
    char nomeDaCidade2 [20];
    int populacao2;
    float area2;    
    float pib2;
    int pontosTuristicos2;
    // float densidade2; // Densidade populacional (População / Área)

// Instrucoes para o usuario

//Cadastro da Carta 1
    
    printf("Bem-vindo ao Super Trunfo!\n\n");
    printf("Cadastro da Carta 1:\n\n");
    printf("Informe o Estado (Letra de A a H):\n");
    scanf(" %s", estado1);
    printf("Informe o Código da Carta (3 dígitos, ex: A01):\n");
    scanf("%s", codigo1);
    printf("Informe o Nome da Cidade:\n");
    scanf(" %s", nomeDaCidade1);
    printf("Informe a População:\n");
    scanf("%d", &populacao1);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);
    

// Exibindo Cartas de forma Organizada (Carta 1)
   
    printf("\n===Carta 1===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao1 / area1); // Calculando a densidade populacional
    printf("pib per capita: %.2f bilhões por habitante\n", pib1 / populacao1); // PIB per capita

// Instrucoes para o usuario

//Cadastro da Carta 2

    printf("\n");

    printf("Cadastro da Carta 2:\n\n");
    printf("Informe o Estado (Letra de A a H):\n");
    scanf(" %s", estado2);
    printf("Informe o Código da Carta (3 dígitos, ex: B02):\n");
    scanf("%s", codigo2);
    printf("Informe o Nome da Cidade:\n");
    scanf(" %s", nomeDaCidade2);
    printf("Informe a População:\n");
    scanf("%d", &populacao2);
    printf("Informe a Área (em km²):\n");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);
  

// Exibindo Cartas de forma Organizada (Carta 2)

    printf("\n===Carta 2===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float)populacao2 / area2); // Calculando a densidade populacional
    printf("pib per capita: %.2f bilhões por habitante\n", pib2 / populacao2); // PIB per capita

return 0;

}