#include <stdio.h>

int main() {

    // torre se move 5 casas para a direita (FOR)
    printf("\nMovimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

     // bispo se move 5 casa na diagon pra cima e para direita (while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // rainha se move 8 casas para a esquerda (do while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
