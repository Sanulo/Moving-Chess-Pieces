#include <stdio.h>

void towerMovement(int remainingMoves) {
    if (remainingMoves == 0) {
        return;
    }
    printf("Direita\n");
    towerMovement(remainingMoves - 1);
}

void queenMovement(int remainingMoves) {
    if (remainingMoves == 0) {
        return;
    }
    printf("Esquerda\n");
    queenMovement(remainingMoves - 1);
}

void bishopMovement(int verticalMoves, int horizontalMoves) {
    if (verticalMoves == 0) {
        return;
    }

    printf("Cima\n");

    for (int i = 0; i < horizontalMoves; i++) {
        printf("Direita\n");
    }

    bishopMovement(verticalMoves - 1, horizontalMoves);
}

void knightMovement() {
    int upMoves = 2;
    int rightMoves = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < upMoves; i++) {
        printf("Cima\n");
    }

    for (int counter = 0; counter < rightMoves; counter++) {
        printf("Direita\n");
    }
}

int main() {
    int towerMoves = 5;
    int bishopVerticalMoves = 5;
    int bishopHorizontalMoves = 1;
    int queenMoves = 8;

    printf("\nMovimento da Torre:\n");
    towerMovement(towerMoves);

    printf("\nMovimento do Bispo:\n");
    bishopMovement(bishopVerticalMoves, bishopHorizontalMoves);

    printf("\nMovimento da Rainha:\n");
    queenMovement(queenMoves);

    knightMovement();

    return 0;
}
