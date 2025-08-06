#include <stdio.h>
#include <string.h>

// Função para exibir menu e retornar o atributo escolhido
int escolherAtributo(int jaEscolhido) {
    int opcao;
    do {
        printf("\nEscolha um atributo para comparar:\n");
        if (jaEscolhido != 1) printf("1 - População\n");
        if (jaEscolhido != 2) printf("2 - Área por KM²\n");
        if (jaEscolhido != 3) printf("3 - PIB\n");
        if (jaEscolhido != 4) printf("4 - Pontos Turísticos\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao);
    } while (opcao < 1 || opcao > 4 || opcao == jaEscolhido);
    return opcao;
}

// Função para obter valor do atributo de acordo com o número
float obterValor(int atributo, int populacao, float km, float pib, int turistas) {
    switch (atributo) {
        case 1: return (float)populacao;
        case 2: return km;
        case 3: return pib;
        case 4: return (float)turistas;
        default: return 0;
    }
}

int main() {
    // Dados da Carta 1 - Fortaleza
    char nome1[20] = "Fortaleza";
    int populacao1 = 2617718;
    float areaKm1 = 313.8;
    float pib1 = 73.4;
    int turistas1 = 15;

    // Dados da Carta 2 - Rio de Janeiro
    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 16055174;
    float areaKm2 = 1200.0;
    float pib2 = 949.301;
    int turistas2 = 16;

    // Mostrar cartas
    printf("===== Carta 1 =====\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea por KM²: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\n",
        nome1, populacao1, areaKm1, pib1, turistas1);

    printf("\n===== Carta 2 =====\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea por KM²: %.2f\nPIB: %.2f bilhões\nPontos Turísticos: %d\n",
        nome2, populacao2, areaKm2, pib2, turistas2);

    // Escolha dos dois atributos
    int atributo1 = escolherAtributo(0);
    int atributo2 = escolherAtributo(atributo1);

    // Obter valores
    float valor1_carta1 = obterValor(atributo1, populacao1, areaKm1, pib1, turistas1);
    float valor1_carta2 = obterValor(atributo1, populacao2, areaKm2, pib2, turistas2);
    float valor2_carta1 = obterValor(atributo2, populacao1, areaKm1, pib1, turistas1);
    float valor2_carta2 = obterValor(atributo2, populacao2, areaKm2, pib2, turistas2);

    // Mostrar valores dos atributos
    printf("\nComparação dos atributos:\n");
    printf("Atributo 1 - Carta 1: %.2f | Carta 2: %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2 - Carta 1: %.2f | Carta 2: %.2f\n", valor2_carta1, valor2_carta2);

    // Soma
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Comparação final
    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\n%s venceu a rodada!\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}