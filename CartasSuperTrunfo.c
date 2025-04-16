#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Exibiçao dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   // Desafio Super Trunfo - Países
   // Tema 1 - Cadastro das Cartas
   
     // abaixo estao as variáveis e os nome para cada atributo da carta 1.

       char estado1[50];
       char codigodacarta1[50];
       char cidade1[50];
       float populacao1;
       float areaemkm1;
       float pib1;
       int numerodepontosturisticos1;

       // abaixo estao as variaveis e os para cada atributo da carta 2.

       char estado2[50];
       char codigodacarta2[50];
       char cidade2[50];
       float populacao2;
       float area2;
       float pib2;
       int numerodepontosturisticos2;


;  // abaixo estao os printf para ser fornecidas as informacoes da carta 1.
  // abaixo estao os scanf para ler os dados fornecidos pelo usuario para a carta 1. 
    
     printf("digite o estado 1:\n");
     scanf("%s", estado1);

     printf("digite o codigo da carta 1:\n");
     scanf("%s", codigodacarta1);

     printf("digite a cidade 1:\n");
     scanf("%s", cidade1);

     printf("digite a populacao 1:\n");
     scanf("%f", &populacao1);

     printf("digite a area 1:\n");
     scanf("%f", &areaemkm1);

     printf("digite o pib 1:\n");
     scanf("%f", &pib1);
   
     printf("digite pontos turisticos 1:\n");
     scanf("%d", &numerodepontosturisticos1);

     // abaixo estao os printf da carta 1 para serem exibidas as informacoes da carta 1 na tela.
   
     printf("__________carta 1__________\n");
     printf("estado 1: %s\n", estado1);
     printf("codigo da carta 1: %s\n", codigodacarta1);
     printf("cidade 1: %s\n", cidade1);
     printf("populacao 1: %f\n", populacao1);
     printf("area em km 1: %.4f\n",areaemkm1);
     printf("pib 1: %f\n",pib1);
     printf("pontos turisticos 1:%d\n",numerodepontosturisticos1);


     // abaixo estao os printf para ser fornecidas as informacoes da carta 2.
    //  abaixo estao os scanf para ler os dados fornecidos pelo usuario para carta 2 .

    printf("digite o estado 2:\n");
    scanf("%s", estado2);

   printf("digite o codigo da carta 2:\n");
   scanf("%s", codigodacarta2);

   printf("digite a cidade 2:\n");
   scanf("%s", cidade2);

   printf("digite a populacao 2:\n");
   scanf("%f", &populacao2);

   printf("digite a area 2:\n");
   scanf("%f", &area2);

   printf("digite o pib 2:\n");
   scanf("%F", &pib2);

   printf("digite o numero de pontos turisticos da cidade 2:\n");
   scanf("%d", &numerodepontosturisticos2);

   // abaixo estao os printf da carta 2 para serem exibidas as informacoes da carta 2 na tela.
   
   printf("__________carta 2__________\n");
   printf("estado 2: %s\n", estado2);
   printf("codigo da carta 2: %s\n", codigodacarta2);
   printf("cidade 2: %s\n", cidade2);
   printf("populacao 2: %f\n", populacao2);
   printf("area 2:%.3f\n", area2);
   printf("pib 2: %f\n", pib2);
   printf("numero de pontos turisticos da cidade 2: %d\n", numerodepontosturisticos2);


   return 0;

}

