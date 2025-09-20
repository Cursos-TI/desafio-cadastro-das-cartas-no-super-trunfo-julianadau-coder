#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Objetivo: No nível Novato, você deve criar as cartas representando as cidades, utilizando scanf para a entrada de dados e printf para exibir as informações

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades

    char codigocarta1[5] = "C01";
    char estadoC[30] = "Paraná";
    char cidadeC[30] = "Curitiba";
    float areaKm2C = 434.000;
    float pibC = 98003703.899;
    int populacaoC = 1773733;
    int pontoturisticoC = 30;

    char codigocarta2[5] = "D02";
    char estadoD[30] = "Salvador";
    char cidadeD[30] = "Bahia";
    float areaKm2D = 693.000;
    float pibD = 13021439.256;
    int populacaoD = 2886698;
    int pontoturisticoD = 25;

    // Área para a entrada de dados das propriedades das cidades

    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1, codigocarta2);

    printf("Digite o nome do estado:\n");
    scanf("%s", &estadoC, &estadoD);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidadeC, &cidadeD);

    printf("Digite a área em km2:\n");
    scanf("%f", &areaKm2C, &areaKm2D);

    printf("Digite o PIB: \n");
    scanf("%f", &pibC, &pibD);

    printf("Digite a população: \n");
    scanf("%d", &populacaoC, &populacaoD);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontoturisticoC, &pontoturisticoD);

    // Área para a exibição dos dados das cidades cadastradas

    printf("Código: %s - Estado: %s - Cidade: %s", codigocarta1, estadoC, cidadeC);
    printf("Área km2: %.3f - PIB: %.3f", areaKm2C, pibC);
    printf("População: %d - Ponto Turístico: %d", populacaoC, pontoturisticoC);



    



}








