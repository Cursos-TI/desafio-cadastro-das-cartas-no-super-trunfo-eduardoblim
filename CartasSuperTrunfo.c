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

       char estado1;
       char codigodacarta1[50];
       char cidade1[50];
       int populacao1;
       float area1;
       float pib1;
       int numerodepontosturisticos1;
       float densidadepopulacional1;
       float pibpercapita1;
       float inversodensidadepopulacional1;
       long double superpoder1;

       // abaixo estao as variaveis e os nome para cada atributo da carta 2.

       char estado2;
       char codigodacarta2[50];
       char cidade2[50];
       int populacao2;
       float area2;
       float pib2;
       int numerodepontosturisticos2;
       float densidadepopulacional2;
       float pibpercapita2;
       float inversodensidadepopulacional2;
       long double superpoder2;
       int atributocomparacao;

      
;  // abaixo estao os printf para ser digitados os dados da carta 1.
  // abaixo estao os scanf para ler os dados fornecidos pelo usuario para a carta 1. 
    
     printf("carta 1! \n");

     printf("informe um estado de A a H !: \n");
     scanf(" %c", &estado1);

     printf("digite a letra de um estado seguinte de um numero exe:(A01,B03): \n");
     scanf(" %s", codigodacarta1);

     printf("digite o nome da cidade 1:\n");
     scanf(" %s", cidade1);

     printf("digite a populacao 1:\n");
     scanf(" %d", &populacao1);

     printf("digite a area 1:\n");
     scanf(" %f", &area1);

     printf("digite o pib 1:\n");
     scanf(" %f", &pib1);
   
     printf("digite pontos turisticos 1:\n");
     scanf(" %d", &numerodepontosturisticos1);

     //calculo da carta 1.

     densidadepopulacional1 = (float) (populacao1 / area1);

     pibpercapita1 = (float) (pib1 / populacao1);



     inversodensidadepopulacional1 = (densidadepopulacional1 > 0)?(1/densidadepopulacional1): 0;


     superpoder1 = populacao1 + area1 + pib1 + (float)numerodepontosturisticos1 + 
     pibpercapita1 + inversodensidadepopulacional1;



     // abaixo estao os printf para ser digitado os dados da carta 2.
    //  abaixo estao os scanf para ler os dados fornecidos pelo usuario para carta 2 .

   printf("carta 2! \n");

   printf("informe um estado de A a H !: \n");
   scanf(" %c", &estado2);

   printf("digite a letra de um estado seguido de um numero exe:(A01,B03): \n" );
   scanf(" %s", codigodacarta2);

   printf("digite a cidade 2:\n");
   scanf(" %s", cidade2);

   printf("digite a populacao 2:\n");
   scanf(" %d", &populacao2);

   printf("digite a area 2:\n");
   scanf(" %f", &area2);

   printf("digite o pib 2:\n");
   scanf(" %f", &pib2);

   printf("digite o numero de pontos turisticos da cidade 2:\n");
   scanf(" %d", &numerodepontosturisticos2);

   // calculo da carta 2.

   densidadepopulacional2 = (float) (populacao2 / area2);

   pibpercapita2 = (float) (pib2 / populacao2);


   inversodensidadepopulacional2 = (densidadepopulacional2 > 0)? (1/densidadepopulacional2): 0;


   superpoder2 = populacao2 + area2 + pib2 + (float)numerodepontosturisticos2 +
   pibpercapita2 + inversodensidadepopulacional2;

  
   // abaixo estao os printf da carta 1 para serem exibidas os dados da carta 1 na tela.
   
  printf("\n dados da carta 1 \n");

   printf("estado: %c\n", estado1);

   printf("codigo da carta: %s\n", codigodacarta1);

   printf("cidade: %s\n", cidade1);

   printf("populacao: %d\n", populacao1);

   printf("area em km: %.2f\n",area1);

   printf("pib: %.2f\n",pib1);

   printf("numero de pontos turusticos da cidade 1: %d\n", numerodepontosturisticos1);
   
   printf("a densidade populacional e: %.2f hab/km²\n", densidadepopulacional1);

   printf("o pib per capita e: %.2f reais\n", pibpercapita1);

   printf("super poder: %.3Lf pontos\n", superpoder1);



  // abaixo estao os printf da carta 2 para serem exibidos os dados da carta 2 na tela.
 
   printf("\n dados da carta 2 \n");

   printf("estado: %c\n", estado2);

   printf("codigo da carta: %s\n", codigodacarta2);

   printf("cidade: %s\n", cidade2);

   printf("populacao: %d\n", populacao2);

   printf("area: %.2f\n", area2);

   printf("pib: %.2f\n", pib2);

   printf("numero de pontos turisticos da cidade: %d\n", numerodepontosturisticos2);

   printf("a densidade populacional e: %.2f hab/km²\n", densidadepopulacional2);

   printf("o pib per capita e: %.2f reais\n", pibpercapita2);

   printf("super poder: %3.Lf pontos\n", superpoder2);




   // logica de combate entre carta1 e carta2;

   printf("escolha uma atributo para ser comparado:\n");

   printf("1. populacao\n");
   printf("2. area\n");
   printf("3. pontosturisticos\n");
   printf("4. densidadepopulacional\n");
   printf("5. pibpercapita\n");
   printf("6. superpoder\n");

   
   scanf(" %d", &atributocomparacao);

   switch (atributocomparacao) {

    case 1:
          printf("populacao\n");
          if (populacao1 > populacao2)
          printf("a carta 1 tem maior populacao!\n");
          else if (populacao2 > populacao1)
          printf("a carta 2 tem maior populacao!\n");
          else{
           printf("as duas cartas tem a mesmo populacao!\n");
    }

   }
   
              
   switch (atributocomparacao) {
   
    case 2:
          printf("area\n");
          if (area1 > area2)
          printf("a carta 1 tem maior area!\n");
          else if (area2 > area1)
          printf("a carta 2 tem maior arae!\n");
          else{
          printf("as duas cartas tem a mesma area!\n");
          }
        
        
}

switch (atributocomparacao) {
   
  case 3:
        printf("numero de pontos turisticos\n");
        if (numerodepontosturisticos1 > numerodepontosturisticos2)
        printf("a carta 1 tem maior pontos turisticos!\n");
        else if (numerodepontosturisticos2 > numerodepontosturisticos1)
        printf("a carta 2 tem mais pontos turisticos!\n");
        else{
        printf("as duas cartas tem o mesmo numero de pontos turisticos!\n");
        }
        
}


switch (atributocomparacao) {
   
  case 4:
        printf("densidade populacional\n");
        if (densidadepopulacional1 > densidadepopulacional2)
        printf("a carta 1 tem maior densidade populacional!\n");
        else if (densidadepopulacional2 > densidadepopulacional1)
        printf("a carta 2 tem maior densidadepopulacional!\n");
        else{
        printf("as duas cartas tem a mesma densidade populacional!\n");
        }
      
      
}


switch (atributocomparacao) {
   
  case 5:
        printf("pib percapita\n");
        if (pibpercapita1 > pibpercapita2)
        printf("a carta 1 tem maior pib percapita!\n");
        else if (pibpercapita2 > pibpercapita1)
        printf("a carta 2 tem maior pibpercapita!\n");
        else{
        printf("as duas cartas tem o mesmo pibpercapita!\n");
        }
      
      
}


   switch (atributocomparacao) {
   
    case 6:
          printf("super poder\n");
          if (superpoder1 > superpoder2)
          printf("a carta 1 tem maior super poder!\n");
          else if (superpoder2 > superpoder1)
          printf("a carta 2 tem maior super poder!\n");
          else{
          printf("as duas cartas tem o mesmo super poder!\n");
          }
        
        
}
   


   return 0;

}

 