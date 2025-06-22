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
        bishopCounter++;
    }

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        queenCounter++;
    } while (queenCounter <= queenSteps);

    
    printf("\nMovimento do Cavalo:\n");
    int horseDownMoves = 2;
    int horseLeftMoves = 1;
    int horseMoveComplete = 1;
    int horseCounter; 

    while (horseMoveComplete--) {
        for (horseCounter = 0; horseCounter < horseDownMoves; horseCounter++) {
            printf("Baixo\n");
        }
        for (horseCounter = 0; horseCounter < horseLeftMoves; horseCounter++) {
            printf("Esquerda\n");
        }
    }

    return 0;
}
