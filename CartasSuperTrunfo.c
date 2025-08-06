#include <stdio.h>

int main() {
    
    char letra1 = 'C';
    char codigo1[5] = "C01";
    char nome1[20] = "Fortaleza";
    int numero1 = 2617718;
    float km1 = 313.8;
    float pib1 = 73.4;
    int turista1 = 15;

    printf("Carta 1:\n");
    printf("Estado: %c\n", letra1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", numero1);
    printf("Área por KM: %.2f\n", km1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turista1);

    printf("\n"); 
    
    char letra2 = 'R';
    char codigo2[5] = "R02";
    char nome2[50] = "Rio de Janeiro";
    int numero2 = 16055174;
    float km2 = 1200.0;
    float pib2 = 949.301;
    int turista2 = 16;

    printf("Carta 2:\n");
    printf("Estado: %c\n", letra2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", numero2);
    printf("Área por KM: %.2f\n", km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turista2);

    return 0;