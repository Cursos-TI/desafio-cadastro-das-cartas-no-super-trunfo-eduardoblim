#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // abaixp estao as variáveis separadas para cada atributo das cartas.
    // Exibiçao dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   // Desafio Super Trunfo - Países
   // Tema 1 - Cadastro das Cartas
   // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
   // Siga os comentários para implementar cada parte do desafio.
   //Teste larissa
   
     // abaixo estao as variáveis separadas para cada atributo da carta 1.


       char estado[50];
       char codigodacarta[50];
       char cidade[50];
       float populacao;
       float areaemkm;
       float pib;
       int numerodepontosturisticos;

       char estado2[50];
       char codigodacarta2[50];
       char cidade2[50];
       float populacao2;
       float area2;
       float pib2;
       int numerodepontosturisticosdacidade2;


;  
    
     printf("digite o estado:\n");
     scanf("%s", estado);

     printf("digite o codigo da carta:\n");
     scanf("%s", codigodacarta);

     printf("digite a cidade:\n");
     scanf("%s", cidade);

     printf("digite a populacao:\n");
     scanf("%f", &populacao);

     printf("digite a area:\n");
     scanf("%f", &areaemkm);

     printf("digite o pib:\n");
     scanf("%f", &pib);
   
     printf("digite pontos turisticos:\n");
     scanf("%d", &numerodepontosturisticos);
   
     printf("__________carta 1__________\n");
     printf("estado: %s\n", estado);
     printf("codigo da carta: %s\n", codigodacarta);
     printf("cidade: %s\n", cidade);
     printf("populacao: %f\n", populacao);
     printf("area em km: %.4f\n",areaemkm);
     printf("pib: %f\n",pib);
     printf("pontos turisticos:%d\n",numerodepontosturisticos);

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
   scanf("%F",& pib2);

   printf("digite o numero de pontos turisticos da cidade 2:\n");
   scanf("%d", &numerodepontosturisticosdacidade2);

   printf("__________carta 2__________\n");
   printf("estado 2: %s\n", estado2);
   printf("codigo da carta 2: %s\n", codigodacarta2);
   printf("cidade 2: %s\n", cidade2);
   printf("populacao 2: %f\n", populacao2);
   printf("area 2:%.3f\n", area2);
   printf("pib 2: %f\n", pib2);
   printf("numero de pontos turisticos da cidade 2: %d\n", numerodepontosturisticosdacidade2);


   return 0;

}

