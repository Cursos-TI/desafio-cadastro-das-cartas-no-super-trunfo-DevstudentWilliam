#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

// Main Function for the Super Trunfo Game
int main() {
    // Variaveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeDaCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Variaveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;    
    float pib2;
    int pontosTuristicos2;

// Instrucoes para o usuario

//Cadastro da Carta 1
   
printf("Bem-vindo ao Super Trunfo!\n\n");

printf("Cadastro da Carta 1:\n\n");

printf("Informe o Estado (Letra de A a H):\n");
scanf(" %c", &estado1);

printf("Informe o Código da Carta (3 dígitos, ex: A01):\n");
scanf("%3s", codigo1);

printf("Informe o Nome da Cidade:\n");
scanf(" %49[^\n]", nomeDaCidade1);

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
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeDaCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);

printf("\n");

// Instrucoes para o usuario

//Cadastro da Carta 2

printf("Cadastro da Carta 2:\n");

printf("Informe o Estado (Letra de A a H):\n");
scanf(" %c", &estado2);

printf("Informe o Código da Carta (3 dígitos, ex: B02):\n");
scanf("%3s", codigo2);

printf("Informe o Nome da Cidade:\n");
scanf(" %49[^\n]", nomeDaCidade2);

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
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeDaCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
}