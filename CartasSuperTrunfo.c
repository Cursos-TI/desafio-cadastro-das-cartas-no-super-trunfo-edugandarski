#include <stdio.h>

int main() {
    char estado1[5], estado2[5];
    char codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int populacao1, polulacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, PIBperCapita1, PIBperCapita2;
 
    //carta 1 declaração das variaveis//
    printf("***Cartas Super Trunfo países***\n");
    printf("Carta A1, Carta A2 :\n");
    printf("Digite o Codigo Da Primeira Cidade : (ex  A01, A02 ): ");

    scanf("%s", &codigo1);
    printf("digite o Estado: (ex ES) ");
    scanf("%s", &estado1);
    printf("Digite sua Cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite á área em km²: ");
    scanf("%f", &area1);
    printf("Digite Seu Pib (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //caculos carta 1
    densidade1 = (float)populacao1 / area1;
    PIBperCapita1 = pib1 / populacao1;
    //exibir dados 
    printf("======================================\n");
    printf("\nCidade 1 codigo:%s\n", codigo1);
    printf("Seu Estado é:%s \n", &estado1);
    printf("Sua Cidade é:%s\n", cidade1);
    printf("Numero Habitantes:%d\n", populacao1);
    printf("Sua Área em km²:%.2f\n", area1);
    printf("Seu Pib é:%.2f\n", pib1);
    printf("Número de pontos turísticos:%d\n", pontosTuristicos1);
    printf("densidade_populaçional:%.2f km²\n", densidade1);
    printf("PIBperCapita:%.2f\n", PIBperCapita1);


    printf("======================================\n");

    //carta 2 declaração das variaveis/
    printf("Digite o Codigo Da Segunda Cidade : (ex  A01, A02 ): ");
    
    scanf("%s", codigo2);
    printf("digite o Estado: (ex ES) ");
    scanf("%s", &estado2);
    printf("Digite sua Cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a Populacao: ");
    scanf("%d", &polulacao2);
    printf("Digite á área em km²: ");
    scanf("%f", &area2);
    printf("Digite Seu Pib (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //caculos carta 2
    densidade1 = (float)polulacao2 / area2;
    PIBperCapita1 = pib2 / polulacao2;
    
    //exibir dados 
    printf("======================================\n");
    printf("\nCidade 2 codigo:%s\n", codigo2);
    printf("Seu Estado é:%s \n", estado2);
    printf("Sua Cidade é:%s\n", cidade2);
    printf("Numero Habitantes:%d\n", polulacao2);
    printf("Sua Área em km²:%.2f\n", area2);
    printf("Seu Pib é:%.2f\n", pib2);
    printf("Número de pontos turísticos:%d\n", pontosTuristicos2);
    printf("densidade_populaçional:%.2f km²\n", densidade2);
    printf("PIBperCapita:%.2f\n", PIBperCapita2);
    printf("======================================\n");

 return 0;
} 
