#include <stdio.h>

int main(){
  char estadoUm[1], codigoCartaUm[4], nomeCidadeUm[20];
  int populacaoUm, pontosTuristicosUm;
  float areaUm, pibUm;

  printf("\n----- Cadastro Carta 1 -----\n");

  printf("\nDigite o estado: Uma letra de 'A' a 'H' (representando um dos oito estados) -> ");
  scanf(" %s", estadoUm);

  printf("Digite o código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) -> ");
  scanf(" %s", codigoCartaUm);

  printf("Digite o nome da cidade -> ");
  scanf(" %[^\n]", nomeCidadeUm); // %[^\n] faz com que ao digitar o nome da cidade possa dar um " " espaço.

  printf("Digite a população: O número de habitantes da cidade -> ");
  scanf(" %d", &populacaoUm);

  printf("Digite  área (em km²): A área da cidade em quilômetros quadrados -> ");
  scanf(" %f", &areaUm);

  printf("Digite o PIB: O Produto Interno Bruto da cidade -> ");
  scanf(" %f", &pibUm);

  printf("Digite o número de Pontos Turísticos: A quantidade de pontos turísticos na cidade -> ");
  scanf(" %d", &pontosTuristicosUm);

  printf("\n--------------------------------------------------------------------------\n");

  char estadoDois[1], codigoCartaDois[4], nomeCidadeDois[20];
  int populacaoDois, pontosTuristicosDois;
  float areaDois, pibDois;

  printf("\n----- Cadastro Carta 2 -----\n");

  printf("\nDigite o estado: Uma letra de 'A' a 'H' (representando um dos oito estados) -> ");
  scanf(" %s", estadoDois);

  printf("Digite o código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) -> ");
  scanf(" %s", codigoCartaDois);

  printf("Digite o nome da cidade -> ");
  scanf(" %[^\n]", nomeCidadeDois);

  printf("Digite a população: O número de habitantes da cidade -> ");
  scanf(" %d", &populacaoDois);

  printf("Digite  área (em km²): A área da cidade em quilômetros quadrados -> ");
  scanf(" %f", &areaDois);

  printf("Digite o PIB: O Produto Interno Bruto da cidade -> ");
  scanf(" %f", &pibDois);

  printf("Digite o número de Pontos Turísticos: A quantidade de pontos turísticos na cidade -> ");
  scanf(" %d", &pontosTuristicosDois);

  printf("\n--------------------------------------------------------------------------\n");

  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estadoUm);
  printf("Código: %s\n", codigoCartaUm);
  printf("Nome da Cidade: %s\n", nomeCidadeUm);
  printf("População: %d hab\n", populacaoUm);
  printf("Área: %.2f km²\n", areaUm);
  printf("PIB: %.2f bilhões de reais\n", pibUm);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicosUm);

  printf("\n--------------------------------------------------------------------------\n");

  printf("\nCarta 2:\n");
  printf("Estado: %s\n", estadoDois);
  printf("Código: %s\n", codigoCartaDois);
  printf("Nome da Cidade: %s\n", nomeCidadeDois);
  printf("População: %d hab\n", populacaoDois);
  printf("Área: %.2f km²\n", areaDois);
  printf("PIB: %.2f bilhões de reais\n", pibDois);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicosDois);

  printf("\n--------------------------------------------------------------------------\n");
  return 0;
}