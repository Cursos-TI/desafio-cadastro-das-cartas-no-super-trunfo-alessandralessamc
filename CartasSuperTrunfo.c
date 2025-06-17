#include <stdio.h>

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
    char estado1;
    char estado2;
    
    //Código: (Ex: A01) - char[] (string)
    char[3] cod1;
    char[3] cod2;
    
    //Cidade: (Nome) - char[] (string)
    char[50] cidade1;
    char[50] cidade2;
    
    //População: (Número de habitantes) - int
    int pop1; 
    int pop2; 
    
    //Área: (em km²) - float
    float area1;
    float area2;
    
    //PIB: (em bilhões) - float
    float pib1;
    float pib2;
    
    //Pontos Turísticos: (Quantidade) - int    
    int pt1;
    int pt2;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o Estado da Carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", &cod1);

    printf("Digite a Cidade da Carta 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a População da Carta 1: \n");
    scanf("%d", &pop1);

    printf("Digite a Área da Carta 1: \n");
    scanf("%d", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%d", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &pt1);
    
    return 0;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Carta 1\n");                         //Imprime título da carta 
    printf("Estado: %c\n", estado1);             // Imprime o Estado
    printf("Código: %s\n", cod1);               // Imprime o Código
    printf("Cidade: %s\n", cidade1);            // Imprime a Cidade   
    printf("População: %d\n", pop1);            // Imprime a População 
    printf("Área: %d\n", area1);                // Imprime a Área
    printf("PIB: %d\n", pib1);                  // Imprime o PIB
    printf("Pontos Turísticos: %d\n", pt1);     // Imprime o número de Pontos Turísticos
    
    
    return 0;
}
