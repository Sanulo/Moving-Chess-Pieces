#include <stdio.h>

/*
 * As funções towerMovement, queenMovement e bishopMovement simulam os movimentos
 * de peças do xadrez (torre, rainha e bispo) usando recursividade.
 * A recursão é usada como uma forma de repetição onde cada chamada representa
 * um passo, e o processo continua até atingir a condição de parada.
 */
void rookMovement(int remainingMoves) {
    if (remainingMoves == 0) {
        return;
    }
    printf("Direita\n");
    rookMovement(remainingMoves - 1);
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

/*
 * knightMovement representa o movimento fixo do cavalo (em "L"):
 * dois passos para cima e um para a direita.
 * Não usa recursividade porque o movimento é único e fixo,
 * então é melhor usar um loop simples.
 */
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
    int rookMoves = 5;
    int bishopVerticalMoves = 5;
    int bishopHorizontalMoves = 1;
    int queenMoves = 8;

    printf("\nMovimento da Torre:\n");
    rookMovement(rookMoves);

    printf("\nMovimento do Bispo:\n");
    bishopMovement(bishopVerticalMoves, bishopHorizontalMoves);

    printf("\nMovimento da Rainha:\n");
    queenMovement(queenMoves);

    knightMovement();

    return 0;
}
