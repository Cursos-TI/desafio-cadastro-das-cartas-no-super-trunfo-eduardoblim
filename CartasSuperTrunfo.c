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
       float populacao;
       float areaemkm;
       float pib;
       int numerodepontosturisticos;

   
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
   
     
     printf("estado: %s\n", estado);
     printf("codigo da carta: %s\n", codigodacarta);
     printf("cidade: %s\n", cidade);
     printf("populacao: %f\n", populacao);
     printf("area em km: %.4f\n",areaemkm);
     printf("pib: %f\n",pib);
     printf("pontos turisticos:%d\n",numerodepontosturisticos);
    

     return 0;
 }

