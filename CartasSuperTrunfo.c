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
   
     // abaixp estao as variáveis separadas para cada atributo das cartas.


       char estado[50];
       char codigodacarta[50];
       char cidade[50];
       float areaemkm;
       float pib;
       int numerodepontosturisticos;

      //abaixo estao as variaveis para a carta dois.

    //   char estadodois[20];
      // char codigodois[20];
   //   char cidadedois[20];
    //   float areadois;
     //  float pibdois;
      // float numerodepontosturisticosdois;
   
       // Exibiçao dos Dados das Cartas:
       // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
      // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
     printf("digite o estado:\n");
     scanf("%s", estado);

     print("digite o codigo da carta:\n");
     scanf("%s", codigodacarta);

     printf("digite a cidade:\n");
     scanf("%s", cidade);

     printf("digite a area:\n");
     scanf("%f", &areaemkm);

     printf("digite o pib:\n");
     scanf("%f", &pib);
   
     printf("digite pontos turisticos:\n");
     scanf("%d", &numerodepontosturisticos);
   
     
     printf("estado: %s\n", estado);
     printf("codigo da carta: %s\n", codigodacarta);
     printf("cidade: %s\n", cidade);
     printf("area em km: %.3f\n",areaemkm);
     printf("pib: %f\n",pib);
     printf("pontos turisticos:%d\n",numerodepontosturisticos);
    
     
   // printf("digite o estado dois:\n");
   //scanf("%s", estadodois);

   //  printf("digite o codigo da carta dois");
   //  scanf("%s",codigodois);

     //printf("digite a cidade dois:\n");
    // scanf("%s", cidadedois);
 
    // printf("digite a area dois:\n");
    // scanf("%f", &areadois);

    // printf("digite o pib dois:\n");
//scanf("%f", &pibdois);

    // printf("digite o numero de pontos turisticos dois:\n");
    // scanf("%d", &numerodepontosturisticosdois);


    // printf("estado dois: %sn", estadodois);
    // printf("codigo da carta dois: %s\n", codigodois);
   //  printf("cidade dois: %s\n", cidadedois);
   //  printf("area dois: %f\n", areadois);
   //  printf("pib dois: %f\n", pibdois);
   //  printf("numero de pontos turisticos dois: %d\n", numerodepontosturisticosdois);

    
    
     return 0;
 }

