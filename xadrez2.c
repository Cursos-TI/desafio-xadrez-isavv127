#include <stdio.h>

int main() {

    // torre se move 5 casas para a direita (FOR)
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

     // bispo se move 5 casa na diagon pra cima e para direita (while)
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5) {
        printf("Cima Direita\n");
        b++;
    }

    // rainha se move 8 casas para a esquerda (do while)
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

     printf("\n");

    // cavalo se move 2 para baixo e 1 para a esquerda (um for pra baixo e um while pra esquerda)

    int movimentobaixo = 2;    
    int movimentoEsquerda = 1;

    //pra baixo 2
    
    for (int c = 1; c <= movimentobaixo; c++) {
        printf("Baixo\n");
    }

    //pra esquerda 1

    int e = 1;
    while (e <= movimentoEsquerda) {
        printf("Esquerda\n");
        e++;
    }

    return 0;
}
