#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (utilizando a estrutura de repetição for)
    printf("Movimento da Torre:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n"); // A Torre se move cinco casas para a direita
    }
    printf("\n");

    // Simulação do movimento do Bispo (utilizando a estrutura de repetição while)
    printf("Movimento do Bispo:\n");
    int casasBispo = 5;
    int movimentoBispo = 1;
    while (movimentoBispo <= casasBispo) {
        printf("Cima, Direita\n"); // O Bispo se move cinco casas na diagonal para cima e à direita
        movimentoBispo++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (utilizando a estrutura de repetição do-while)
    printf("Movimento da Rainha:\n");
    int casasRainha = 8;
    int movimentoRainha = 1;
    do {
        printf("Esquerda\n"); // A Rainha se move oito casas para a esquerda
        movimentoRainha++;
    } while (movimentoRainha <= casasRainha);
    printf("\n");

    return 0;
}
