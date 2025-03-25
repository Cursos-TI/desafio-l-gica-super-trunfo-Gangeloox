#include <stdio.h>

    int main() {

    // Carta 1:
    char estado1;
    char codigo1[4];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;
    float densidade1;
    float capita1;
    float inverso1;
    float super1;
    

    // Carta 2:
    
    char estado2;
    char codigo2[4];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    float densidade2;
    float capita2;
    float inverso2;
    float super2;;

    //   Entrada Carta 1

    printf("**** Super Trunfo *****\n");
    printf("*** Carta 1:\n");
    printf("Digite aqui uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &turistico1);
    densidade1 = (populacao1 / area1);
    capita1 = (pib1 / populacao1);
    inverso1 = ( 1 / densidade1 );
    super1 = ( populacao1 + area1 + pib1 + turistico1 + capita1 + inverso1 );

    // Entrada Carta 2

    printf("\n*** Carta 2: \n");
    printf("Digite aqui uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado2);
    printf("Digite aqui a letra do estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Digite aqui o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite aqui a população desta cidade: ");
    scanf("%d", &populacao2);
    printf("Digite aqui a área desta cidade: ");
    scanf("%f", &area2);
    printf("Digite aqui o PIB desta cidade: ");
    scanf("%f", &pib2);
    printf("Digite aqui quantos pontos turísticos tem esta cidade: ");
    scanf("%d", &turistico2);
    densidade2 = (populacao2 / area2);
    capita2 = (pib2 / populacao2);
    inverso2 = ( 1 / densidade2 );
    super2 = ( populacao2 + area2 + pib2 + turistico2 + capita2 + inverso2 );

    //   SAÍDA
    printf("\n**** Resultados **** \n");
    printf("\n*** Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n*** Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", super2);

    printf("\n**** Comparando as Cartas: ****\n");
    printf("População: Carta %d venceu - (%d)\n", 2 - (populacao1 > populacao2), populacao1 > populacao2);
    printf("Área: Carta %d venceu - (%d)\n", 2  - (area1 > area2), (area1 > area2));
    printf("PIB: Carta %d venceu - (%d)\n", 2 - (pib1 > pib2), pib1 > pib2);
    printf("Número de Pontos Turísticos: Carta %d venceu - (%d)\n", 2 -  (turistico1 > turistico2), turistico1 > turistico2);
    printf("Densidade Populacional: Carta %d venceu - (%d)\n", 2 - (densidade1 < densidade2), densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu - (%d)\n", 2 - (capita1 > capita2), capita1 > capita2);
    printf("Super Poder: Carta %d venceu - (%d)\n", 2 - (super1 > super2), super1 > super2);

    // Exibição dos Resultados

    printf("\n*** Exibição da Comparação ***\n");
    printf("\nCarta 1 - %s: %d\n", nome1, populacao1);
    printf("Carta 2 - %s: %d\n", nome2, populacao2);
    if ( populacao1 > populacao2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %.2f\n", nome1, area1);
    printf("Carta 2 - %s: %.2f\n", nome2, area2);
    if ( nome1 > nome2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %.2f\n", nome1, pib1);
    printf("Carta 2 - %s: %.2f\n", nome2, pib2);
    if ( pib1 > pib2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %d\n", nome1, turistico1);
    printf("Carta 2 - %s: %d\n", nome2, turistico2);
    if ( turistico1 > turistico2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %.2f\n", nome1, inverso1);
    printf("Carta 2 - %s: %.2f\n", nome2, inverso2);
    if ( inverso1 > inverso2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %.2f\n", nome1, capita1);
    printf("Carta 2 - %s: %.2f\n", nome2, capita2);
    if ( capita1 > capita2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }


    printf("\nCarta 1 - %s: %.2f\n", nome1, super1);
    printf("Carta 2 - %s: %.2f\n", nome2, super2);
    if ( super1 > super2){
    printf("Resultado: Carta 1 (%s) venceu.\n", nome1);
    } else {
    printf("Resultado: Carta 2 (%s) venceu.\n", nome2);
    }




}