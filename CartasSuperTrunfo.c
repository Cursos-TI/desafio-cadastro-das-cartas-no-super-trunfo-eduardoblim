#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int carta = 1;
    char codigo[20]= "c01";
    char estado[10] = "ceara";
    char cidade[20] = "fortaleza";
    int populacao = 2.428708;
    float areaemkm = 312.441;
    float pib = 73.000000000;
    int pontosturisticos=15;
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
   // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     printf("carta:%d\n", carta);
     printf("codigo: %s\n", codigo);
     printf("estado: %s\n", estado);
     printf("cidade: %s\n", cidade);
     printf ("populacao: %d\n", populacao);
     printf("area em km: %.3f\n", areaemkm);
     printf("pib: %.9f\n", pib);
     printf("pontos turisticos: %d\n", pontosturisticos);



     return 0;

}

