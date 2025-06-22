#include <stdio.h>

int main() {
    int towerSteps = 5;
    int bishopSteps = 5;
    int queenSteps = 8;

    int towerCounter;
    int bishopCounter = 1;
    int queenCounter = 1;

    printf("\nMovimento da Torre:\n");
    for (towerCounter = 1; towerCounter <= towerSteps; towerCounter++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    while (bishopCounter <= bishopSteps) {
        printf("Cima Direita\n");
        bishopCounter++;  // incremento para sair do loop
    }

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        queenCounter++;
    } while (queenCounter <= queenSteps);

    return 0;
}
