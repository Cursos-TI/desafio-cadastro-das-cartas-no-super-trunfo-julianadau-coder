#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Objetivo: No nível Novato, você deve criar as cartas representando as cidades, utilizando scanf para a entrada de dados e printf para exibir as informações

int main(){
    
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char codigocarta1[5] = "C01";
    char estadoC[30] = "Parana";
    char cidadeC[30] = "Curitiba";
    float areaKm2C = 432.000;
    float pibC = 13021439.256;
    int populacaoC = 1773733;
    int pontoturisticoC = 30;

    char codigocarta2[5] = "D02";
    char estadoD[30] = "Bahia";
    char cidadeD[30] = "Salvador";
    float areaKm2D = 693.000;
    float pibD = 2413250.367;
    int populacaoD = 2886698;
    int pontoturisticoD = 25;

    // Área para a entrada de dados das propriedades das cidades

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigocarta1);
    printf("Digite o código da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome do estado da carta 1:\n");
    scanf("%s", estadoC);
    printf("Digite o nome do estado da carta 2:\n");
    scanf("%s", estadoD);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidadeC);
    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidadeD);

    printf("Digite a área em km2 da carta 1:\n");
    scanf("%f", &areaKm2C);
    printf("Digite a área em km2 da carta 2:\n");
    scanf("%f", &areaKm2D);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pibC);
    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pibD);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacaoC);
    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacaoD);

    printf("Digite a quantidade de pontos turísticos da carta 1: \n");
    scanf("%d", &pontoturisticoC);
    printf("Digite a quantidade de pontos turísticos da carta 2: \n");
    scanf("%d", &pontoturisticoD);

    // Área para a exibição dos dados das cidades cadastradas

    printf("Código: %s - Estado: %s - Cidade: %s\n", codigocarta1, estadoC, cidadeC);
    printf("Área km2: %.3f - PIB: %.3f\n", areaKm2C, pibC);
    printf("População: %d - Ponto Turístico: %d\n", populacaoC, pontoturisticoC);

    printf("Código: %s - Estado: %s - Cidade: %s\n", codigocarta2, estadoD, cidadeD);
    printf("Área km2: %.3f - PIB: %.3f\n", areaKm2D, pibD);
    printf("População: %d - Ponto Turístico: %d\n", populacaoD, pontoturisticoD);


    return 0;

}