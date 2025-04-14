#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // abaixp estao as variáveis separadas para cada atributo das cartas.
    char estado[50];
    char cidade[50];
    float areakm;
    float pib;
    int pontosturisticos;
    int carta;
    // Exibiçao dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf("digite o estado:\n");
     scanf("%s", estado);

     printf("digite a cidade:\n");
     scanf("%s", cidade);

     printf("digite a area em km:\n");
     scanf("%f", &areakm);

     printf("digite o pib:\n");
     scanf("%f", &pib);

     printf("digite pontos turisticos:\n");
     scanf("%d", &pontosturisticos);

     printf("estado: %s\n", estado);
     printf("cidade: %s\n", cidade);
     printf("area em km: %.3f\n",areakm);
     printf("pib: %f\n",pib);
     printf("pontos turisticos: %d\n",pontosturisticos);


     return 0;

}

