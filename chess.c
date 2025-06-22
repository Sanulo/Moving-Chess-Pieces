#include <stdio.h>

int main()
{
    int towerMoves = 5;
    int bishopMoves = 5;
    int queenMoves = 8;

    int towerCounter;
    int bishopCounter = 1;
    int queenCounter = 1;

    printf("\nMovimento da Torre:\n");
    for (towerCounter = 1; towerCounter <= towerMoves; towerCounter++)
    {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    while (bishopCounter <= bishopMoves)
    {
        printf("Cima Direita\n");
        bishopCounter++;
    }

    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        queenCounter++;
    } while (queenCounter <= queenMoves);

    printf("\nMovimento do Cavalo:\n");
    int knightDownMoves = 2;
    int knightLeftMoves = 1;
    int knightMoveComplete = 1;
    int knightCounter;

        while (knightMoveComplete--)
    {
        for (knightCounter = 0; knightCounter < knightDownMoves; knightCounter++)
        {
            printf("Baixo\n");
        }
        for (knightCounter = 0; knightCounter < knightLeftMoves; knightCounter++)
        {
            printf("Esquerda\n");
        }
    }

    return 0;
}
