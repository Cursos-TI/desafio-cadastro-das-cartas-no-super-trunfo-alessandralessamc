#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

//🏆 Nível Mestre: Comparação e Super Poder
//No nível Mestre, você implementará a comparação entre duas cartas e o cálculo do "Super Poder".

//🆕 Diferença em relação ao Nível Aventureiro:

//Comparação de Cartas: O usuário poderá comparar as duas cartas.
//Super Poder: Soma de todos os atributos (inclusive os calculados), com a densidade populacional invertida antes da soma (1/densidade). Tipo: float.
//⚙️ Funcionalidades do Sistema:

//Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
//Para Densidade Populacional, vence a carta com o menor valor.
//Para os demais atributos (e o Super Poder), vence a carta com o maior valor.
//📥 Entrada e 📤 Saída de Dados:

//Mesma entrada dos níveis anteriores, mas a População agora é unsigned long int.
//A saída mostrará o resultado da comparação para cada atributo e o Super Poder.
//Observação: Preste atenção à conversão de tipos ao calcular o Super Poder!

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

//*   **Novos Atributos:**
//    *   Densidade Populacional: População / Área (`float`)
    float dens1, dens2;

//    *   PIB per Capita: PIB / População (`float`)
    float ppc1, ppc2;
    
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
    
  //    *  Cálculo da Densidade Populacional: População / Área (`float`)
    dens1 = pop1 / area1;

  //    *  Cálculo do PIB per Capita: PIB / População (`float`)
    ppc1 = ( pib1 * 1000000000 ) / pop1;

    float inversoDensidade1 = 1.0 / dens1;
    float floatPt1 = (float)pt1;
    float floatPop1 = (float)pop1;

    // Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, 
    // número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    // Armazene o Super Poder como float.
    float SuperPower1 = inversoDensidade1 + area1 + pib1 + floatPop1 + floatPt1;    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Carta 1
    printf("\nCarta 1:\n");                                  // Imprime título da carta 
    printf("Estado: %s\n", estado1);                         // Imprime o Estado
    printf("Código: %s\n", cod1);                            // Imprime o Código
    printf("Nome da Cidade: %s\n", cidade1);                 // Imprime a Cidade   
    printf("População: %d\n", pop1);                         // Imprime a População 
    printf("Área: %.2f km²\n", area1);                       // Imprime a Área
    printf("PIB: %.2f bilhões de reais\n", pib1);            // Imprime o PIB
    printf("Número de Pontos Turísticos: %d\n", pt1);        // Imprime o número de Pontos Turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", dens1); // Imprime a Densidade Populacional
    printf("PIB per Capita: %.2f reais\n", ppc1);            // Imprime o PIB per Capita
    printf("Super Poder: %.2f\n", SuperPower1);              // Imprime o Super Poder

  //    *  Cálculo da Densidade Populacional: População / Área (`float`) - Carta 2
    dens2 = pop2 / area2;

  //    *  Cálculo do PIB per Capita: PIB / População (`float`) - Carta 2
    ppc2 = ( pib2 * 1000000000 ) / pop2;

    float inversoDensidade2 = 1.0 / dens2;
    float floatPt2 = (float)pt2;
    float floatPop2 = (float)pop2;

    float SuperPower2 = inversoDensidade2 + area2 + pib2 + floatPop2 + floatPt2;  
    
    // Carta 2
    printf("\nCarta 2:\n");                                  // Imprime título da carta 
    printf("Estado: %s\n", estado2);                         // Imprime o Estado
    printf("Código: %s\n", cod2);                            // Imprime o Código
    printf("Nome da Cidade: %s\n", cidade2);                 // Imprime a Cidade   
    printf("População: %d\n", pop2);                         // Imprime a População 
    printf("Área: %.2f km²\n", area2);                       // Imprime a Área
    printf("PIB: %.2f bilhões de reais\n", pib2);            // Imprime o PIB
    printf("Número de Pontos Turísticos: %d\n", pt2);        // Imprime o número de Pontos Turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", dens2); // Imprime a Densidade Populacional
    printf("PIB per Capita: %.2f reais\n", ppc2);            // Imprime o PIB per Capita
    printf("Super Poder: %.2f\n", SuperPower2);              // Imprime o Super Poder

    // *** Rotinas de comparação ***

    // Comparação de Cartas:
    printf("\nComparação de Cartas:\n");           
        

    // Comparação de Populações
    if(pop1 > pop2)
    {
      printf("População: Carta 1 venceu (1)\n");   
    }
    else
    {
      printf("População: Carta 2 venceu (0)\n");  
    }                      

    // Comparação de Areas
    if(area1 > area2)
    {
      printf("Área: Carta 1 venceu (1)\n");   
    }
    else
    {
      printf("Área: Carta 2 venceu (0)\n");  
    }                           

    // Comparação de PIBs
    if(pib1 > pib2)
    {
      printf("PIB: Carta 1 venceu (1)\n");  
    }
    else
    {
      printf("PIB: Carta 2 venceu (0)\n");  
    }  

    // Comparação de números de Pontos Turísticos
    if(pt1 > pt2)
    {
      printf("Pontos Turísticos: Carta 1 venceu (1)\n");    
    }
    else
    {
      printf("Pontos Turísticos: Carta 2 venceu (0)\n");   
    }

    // Comparação de Densidades Populacionais
    if(dens1 > dens2)
    {
      printf("Densidade Populacional: Carta 1 venceu (1)\n");    
    }
    else
    {
      printf("Densidade Populacional: Carta 2 venceu (0)\n");     
    }

    // Comparação de PIBs per Capita
    if(ppc1 > ppc2)
    {
      printf("PIB per Capita: Carta 1 venceu (1)\n");      
    }
    else
    {
      printf("PIB per Capita: Carta 2 venceu (0)\n"); 
    }

    // Comparação de Super Poderes
    if(SuperPower1 > SuperPower2)
    {
      printf("Super Poder: Carta 1 venceu (1)\n");           
    }
    else
    {
      printf("Super Poder: Carta 2 venceu (0)\n\n");  
    }

    return 0;
}
