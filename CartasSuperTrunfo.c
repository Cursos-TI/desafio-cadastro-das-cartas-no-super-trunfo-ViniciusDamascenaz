#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

double pipPerCapta(double pib, int populacao){
    return (double) pib / populacao;
}

float densidadePopulacional(float area, int populacao){
    return (float) populacao / area;
}

int main() {

    int codigoCidade;
    char nomeCidade[50];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
    
    printf("-------CADASTRO DE CARTAS-------\n");
    printf(" \n");
    printf("Digite o Código da cidade: \n");
    scanf("%d", &codigoCidade);
    printf(" \n");
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomeCidade);
    printf(" \n");
    printf("Digite Quantos moradores tem na Cidade: \n");
    scanf(" %d", &populacao);
    printf(" \n");
    printf("Digite a Área da Cidade: \n");
    scanf(" %f", &area);
    printf(" \n");
    printf("Digite o PIB da Cidade: \n");
    scanf(" %lf", &pib);
    printf(" \n");
    printf("Digite Quantos pontos turisticos tem na Cidade: \n");
    scanf(" %d", &pontosTuristicos);

    printf("-----INFORMAÇÕES DA CARTA-----\n");
    printf(" \n");
    printf("Código: %d", codigoCidade);
    printf(" \n");
    printf("Nome: %s", nomeCidade);
    printf(" \n");
    printf("População: %d", populacao);
    printf(" \n");
    printf("Área da Cidade: %.2f", area);
    printf(" \n");
    printf("PIB: %.2lf", pib);
    printf(" \n");
    printf("Quantidade de Pontos Turisticos: %d", pontosTuristicos);
    printf(" \n");
    printf("Densidade Populacional: %f", densidadePopulacional(area, populacao));
    printf(" \n");
    printf("PIP per Capta: %f", pipPerCapta(pib, populacao));


    return 0;
}
