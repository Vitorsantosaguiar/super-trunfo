#include<stdio.h>
 int main() {
    //Este programa serve para criar cartas do super trunfo
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Vamos criar suas cartas!\n");

    // Definindo as variáveis para as cartas
    char estado1, estado2;
    char codigodacarta1[3], codigodacarta2[3];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Solicitando as informações para a carta
    printf("Vamos criar a primeira carta do Super Trunfo!\n");
    printf("Insira os dados abaixo: \n");

    printf("Digite o estado da carta(1 Dígito): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta(Até 3 dígitos): \n");
    scanf(" %s", &codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomedacidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturisticos1);

    printf("Agora vamos criar a segunda carta do Super Trunfo!\n");
    printf("Insira os dados abaixo: \n");

    printf("Digite o estado da carta(1 Dígito): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(Até 3 dígitos): \n");
    scanf(" %s", &codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nomedacidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturisticos2);

    // Exibindo as informações da carta
    printf("\n--- Carta do Super Trunfo nº1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("-----------------------------\n");

        printf("\n--- Carta do Super Trunfo nº2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("-----------------------------\n");
    printf("Obrigado por criar suas cartas do Super Trunfo!\n");
    return 0;


 }
