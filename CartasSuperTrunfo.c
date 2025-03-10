#include <stdio.h>

int main() {
    //Declaração de variáveis carta 1
    char estado1[20]; 
    char codigo1[5]; 
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Declaração de variáveis carta 2
    char estado2[20];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //Lendo os valores da carta 1
    printf("Carta 1 \n");

    printf("Estado1: \n", estado1);
    scanf("%s", estado1);

    printf("Código1: \n", codigo1);
    scanf("%s", codigo1);

    printf("Nome da Cidade1: \n", cidade1);
    scanf("%s", cidade1);

    printf("População1: \n", populacao1);
    scanf("%d", &populacao1);

    printf("Área1: \n", area1);
    scanf("%f", &area1);

    printf("PIB1: \n", pib1);
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos1: \n", pontos1);
    scanf("%d", &pontos1);


//Lendo os valores da carta 2
    printf("Carta 2 \n");

    printf("Estado2: \n", estado2);
    scanf("%s", estado2);

    printf("Código2: \n", codigo2);
    scanf("%s", codigo2);

    printf("Nome da Cidade2: \n", cidade2);
    scanf("%s", cidade2);

    printf("População2: \n", populacao2);
    scanf("%d", &populacao2);

    printf("Área2: \n", area2);
    scanf("%f", &area2);

    printf("PIB2: \n", pib2);
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos2: \n", pontos2);
    scanf("%d", &pontos2);

//Imprimindo os valores da carta 1
    printf("Carta 1 \n");
    printf("Estado1: %s\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade1: %s\n", cidade1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.2f km²\n", area1);
    printf("PIB1: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos1: %d\n", pontos1);

//Imprimindo os valores da carta 2
    printf("Carta 2 \n");
    printf("Estado2: %s\n", estado2);
    printf("Código2: %s\n", codigo2);
    printf("Nome da Cidade2: %s\n", cidade2);
    printf("População2: %d\n", populacao2);
    printf("Área2: %.2f km²\n", area2);
    printf("PIB2: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos2: %d\n", pontos2);

    return 0;
}
