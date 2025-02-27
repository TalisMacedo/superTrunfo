#include <stdio.h>

int main(){

    // Declaração das variáveis para armazenar os dados da Carta 1
    char estadoUm[1], codigoCartaUm[4], nomeCidadeUm[20];
    int pontosTuristicosUm;
    unsigned long int populacaoUm; // Alterado para unsigned long int
    float areaUm, pibUm, densidadeUm, pibPerCapitaUm, superPoderUm;
    
    // Cabeçalho para o cadastro da Carta 1
    printf("\n----- Cadastro Carta 1 -----\n");
    
    printf("\nDigite o estado: Uma letra de 'A' a 'H' (representando um dos oito estados) -> ");
    scanf(" %s", estadoUm);
    
    printf("Digite o código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) -> ");
    scanf(" %s", codigoCartaUm);
    
    printf("Digite o nome da cidade -> ");
    scanf(" %[^\n]", nomeCidadeUm); // %[^\n] faz com que ao digitar o nome da cidade possa dar um " " espaço.
    
    printf("Digite a população: O número de habitantes da cidade -> ");
    scanf(" %lu", &populacaoUm);
    
    printf("Digite  área (em km²): A área da cidade em quilômetros quadrados -> ");
    scanf(" %f", &areaUm);
    
    printf("Digite o PIB: O Produto Interno Bruto da cidade -> ");
    scanf(" %f", &pibUm);
    
    printf("Digite o número de Pontos Turísticos: A quantidade de pontos turísticos na cidade -> ");
    scanf(" %d", &pontosTuristicosUm);
    
    // Calcula a densidade populacional (habitantes por km²)
    densidadeUm = (float) populacaoUm / areaUm;
    // Calcula o PIB per capita (PIB por habitante)
    pibPerCapitaUm = (pibUm * 1000000000) / (float) populacaoUm;

    // Cálculo do Super Poder da Carta 1 (soma de todos os atributos numéricos)
    superPoderUm = (float)populacaoUm + areaUm + pibUm + pontosTuristicosUm + pibPerCapitaUm + (1 / densidadeUm);
    
    printf("\n--------------------------------------------------------------------------\n");
    
    // Declaração das variáveis para armazenar os dados da Carta 2
    char estadoDois[1], codigoCartaDois[4], nomeCidadeDois[20];
    int pontosTuristicosDois;
    unsigned long int populacaoDois; // Alterado para unsigned long int
    float areaDois, pibDois, densidadeDois, pibPerCapitaDois, superPoderDois;
    
    // Cabeçalho para o cadastro da Carta 2
    printf("\n----- Cadastro Carta 2 -----\n");
    
    printf("\nDigite o estado: Uma letra de 'A' a 'H' (representando um dos oito estados) -> ");
    scanf(" %s", estadoDois);
    
    printf("Digite o código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) -> ");
    scanf(" %s", codigoCartaDois);
    
    printf("Digite o nome da cidade -> ");
    scanf(" %[^\n]", nomeCidadeDois);
    
    printf("Digite a população: O número de habitantes da cidade -> ");
    scanf(" %lu", &populacaoDois);
    
    printf("Digite  área (em km²): A área da cidade em quilômetros quadrados -> ");
    scanf(" %f", &areaDois);
    
    printf("Digite o PIB: O Produto Interno Bruto da cidade -> ");
    scanf(" %f", &pibDois);
    
    printf("Digite o número de Pontos Turísticos: A quantidade de pontos turísticos na cidade -> ");
    scanf(" %d", &pontosTuristicosDois);
    
    densidadeDois = (float) populacaoDois / areaDois;
    pibPerCapitaDois = (pibDois * 1000000000) / (float) populacaoDois;

    // Cálculo do Super Poder da Carta 2 (soma de todos os atributos numéricos)
    superPoderDois = (float)populacaoDois + areaDois + pibDois + pontosTuristicosDois + pibPerCapitaDois + (1 / densidadeDois);
    
    printf("\n--------------------------------------------------------------------------\n");
    
    // Exibe os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoUm);
    printf("Código: %s\n", codigoCartaUm);
    printf("Nome da Cidade: %s\n", nomeCidadeUm);
    printf("População: %lu hab\n", populacaoUm);
    printf("Área: %.2f km²\n", areaUm);
    printf("PIB: %.2f bilhões de reais\n", pibUm);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosUm);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeUm);
    printf("PIB per Capita: %.2f reais", pibPerCapitaUm);
    
    printf("\n--------------------------------------------------------------------------\n");
    
    // Exibe os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoDois);
    printf("Código: %s\n", codigoCartaDois);
    printf("Nome da Cidade: %s\n", nomeCidadeDois);
    printf("População: %lu hab\n", populacaoDois);
    printf("Área: %.2f km²\n", areaDois);
    printf("PIB: %.2f bilhões de reais\n", pibDois);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosDois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDois);
    printf("PIB per Capita: %.2f reais", pibPerCapitaDois);
    
    printf("\n--------------------------------------------------------------------------\n");
    

    printf("\nComparação de Cartas:\n");

    // Compara os atributos e exibe o resultado
    printf("População: Carta %d venceu (%d)\n", populacaoUm > populacaoDois ? 1 : 2, populacaoUm > populacaoDois);
    printf("Área: Carta %d venceu (%d)\n", areaUm > areaDois ? 1 : 2, areaUm > areaDois);
    printf("PIB: Carta %d venceu (%d)\n", pibUm > pibDois ? 1 : 2, pibUm > pibDois);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicosUm > pontosTuristicosDois ? 1 : 2, pontosTuristicosUm > pontosTuristicosDois);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadeUm < densidadeDois ? 1 : 2, densidadeUm < densidadeDois); // Menor densidade vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapitaUm > pibPerCapitaDois ? 1 : 2, pibPerCapitaUm > pibPerCapitaDois);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoderUm > superPoderDois ? 1 : 2, superPoderUm > superPoderDois);

    return 0;
}