#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//int idade;     // Declara uma variável inteira chamada "idade"
//float altura;   // Declara uma variável de ponto flutuante chamada "altura"
//double salario; // Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
//char opcao;    // Declara uma variável de caractere chamada "opcao"

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Estado: (A a H) - char
    char estado1[2]; 
    char estado2[2];
    
    //Código: (Ex: A01) - char[] (string)
    char cod1[4];          //3 posições + nulo
    char cod2[4];          //3 posições + nulo
    
    //Cidade: (Nome) - char[] (string)
    char cidade1[50];
    char cidade2[50];

    //População: (Número de habitantes) - int
    int pop1, pop2; 
    
    //Área: (em km²) - float
    float area1, area2;
    
    //PIB: (em bilhões) - float
    float pib1;
    float pib2;
    
    //Pontos Turísticos: (Quantidade) - int    
    int pt1, pt2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%c", estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", cod1);

    printf("Digite a Cidade da Carta 1: \n");
    __fpurge(stdin);
    scanf("%49[^\n]", cidade1);

    printf("Digite a População da Carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a Área da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &pt1);

    // Carta 2
    printf("\nDigite o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", cod2);

    printf("Digite a Cidade da Carta 2: \n");
    __fpurge(stdin);
    scanf("%49[^\n]", cidade2);

    printf("Digite a População da Carta 2: \n");
    scanf("%d", &pop2);

    printf("Digite a Área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &pt2);
    
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Carta 1
    printf("\nCarta 1:\n");                              // Imprime título da carta 
    printf("Estado: %s\n", estado1);                     // Imprime o Estado
    printf("Código: %s\n", cod1);                        // Imprime o Código
    printf("Nome da Cidade: %s\n", cidade1);             // Imprime a Cidade   
    printf("População: %d\n", pop1);                     // Imprime a População 
    printf("Área: %.2f km²\n", area1);                   // Imprime a Área
    printf("PIB: %.2f bilhões de reais\n", pib1);        // Imprime o PIB
    printf("Número de Pontos Turísticos: %d\n", pt1);    // Imprime o número de Pontos Turísticos
    
    // Carta 2
    printf("\nCarta 2:\n");                              // Imprime título da carta 
    printf("Estado: %s\n", estado2);                     // Imprime o Estado
    printf("Código: %s\n", cod2);                        // Imprime o Código
    printf("Nome da Cidade: %s\n", cidade2);             // Imprime a Cidade   
    printf("População: %d\n", pop2);                     // Imprime a População 
    printf("Área: %.2f km²\n", area2);                   // Imprime a Área
    printf("PIB: %.2f bilhões de reais\n", pib2);        // Imprime o PIB
    printf("Número de Pontos Turísticos: %d\n\n", pt2);  // Imprime o número de Pontos Turísticos
    
    return 0;
}
