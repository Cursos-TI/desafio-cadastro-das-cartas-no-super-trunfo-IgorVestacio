#include <stdio.h>

int main() {
   
   // Carta 1: Construção

   // Definindo Variáveis da Carta 1
   char estado1, nomeCidade1[51], codigoCarta1[4];
   int populacao1, pontosTuristicos1;
   float area1, pib1;

   // Coletando Informações e Construindo a Carta 1
   printf("\n-Cadastro da Carta 1\n");

   printf("Digite o estado da cidade (A-H): \n");
   scanf(" %c", &estado1);
   
   printf("Digite o código da cidade (ex: A01): \n");
   scanf("%3s", codigoCarta1);
   
   printf("Digite o nome da cidade: \n");
   scanf("%50s", nomeCidade1);
   
   printf("Digite a população da cidade:\n");
   scanf("%d", &populacao1);
   
   printf("Digite a área da cidade (em Km²): \n");
   scanf("%f", &area1);
   
   printf("Digite o PIB da cidade (em bilhões de reais): \n");
   scanf("%f", &pib1);
   
   printf("Digite o número de pontos turísticos da cidade: \n");
   scanf("%d", &pontosTuristicos1);

   // Carta 2: Construção

   // Definindo Variáveis da Carta 2
   char estado2, nomeCidade2[51], codigoCarta2[4];
   int populacao2, pontosTuristicos2;
   float area2, pib2;

   // Coletando Informações e Construindo a Carta 2
   printf("\n-Cadastro da Carta 2\n");
   printf("Digite o estado da cidade (A-H): \n");
   scanf(" %c", &estado2);
   
   printf("Digite o código da cidade (ex: B02): \n");
   scanf("%3s", codigoCarta2);
   
   printf("Digite o nome da cidade: \n");
   scanf("%50s", nomeCidade2);
   
   printf("Digite a população da cidade:\n");
   scanf("%d", &populacao2);
   
   printf("Digite a área da cidade (em Km²): \n");
   scanf("%f", &area2);
   
   printf("Digite o PIB da cidade (em bilhões de reais): \n");
   scanf("%f", &pib2);
   
   printf("Digite o número de pontos turísticos da cidade: \n");
   scanf("%d", &pontosTuristicos2);

   // Imprimindo Carta 1 Completa no Console
   printf("\n\n === Carta 1 === \n");
   printf("Estado: %c \n", estado1);
   printf("Código: %s \n", codigoCarta1);
   printf("Nome da Cidade: %s \n", nomeCidade1);
   printf("População: %d pessoas\n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f bilhões de reais \n", pib1);
   printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
   
   // Imprimindo Carta 2 Completa no Console
   printf("\n === Carta 2 === \n");
   printf("Estado: %c \n", estado2);
   printf("Código: %s \n", codigoCarta2);
   printf("Nome da Cidade: %s \n", nomeCidade2);
   printf("População: %d pessoas\n", populacao2);
   printf("Área: %.2f km² \n", area2);
   printf("PIB: %.2f bilhões de reais \n", pib2);
   printf("Número de Pontos Turísticos: %d \n\n", pontosTuristicos2);
   
   return 0;
}
