#include <stdio.h>

int main() {

    int tabuleiro [10] [10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
    };

    tabuleiro [2][4] = 3;
    tabuleiro [2][5] = 3;
    tabuleiro [2][6] = 3; //navio 1 horizontal

    tabuleiro [5][4] = 3;
    tabuleiro [6][4] = 3;
    tabuleiro [7][4] = 3; // navio 2 vertical

    int i,j;
    
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("|%d|", tabuleiro[i][j]);
        }
         printf("\n");
    }

    return 0;
}