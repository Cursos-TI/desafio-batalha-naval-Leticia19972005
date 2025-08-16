#include <stdio.h>

#define linha 10
#define coluna 10

int main () {
   int tabuleiro [linha] [coluna] = {0};
   int cone [3] [5] = {{0,0,5,0,0}, {0,5,5,5,0},{5,5,5,5,5}};
   int cruz [3] [5] = {{0,0,6,0,0},{6,6,6,6,6},{0,0,6,0,0}};
   int octaedro [3] [3] ={{0,7,0},{7,7,7},{0,7,0}};
   int il, ic;

    for ( int i = 0; i < 3; i++)
    {
        il = 3;
        ic = 5;
        for ( int j = 0; j < 5; j++)
        {
            if (il + i< linha && ic + j < coluna ){
            tabuleiro[il+i] [ic+j] = cone[i][j];
            }
        }
        
    }

    for (int i = 0; i < 3; i++){
        il = 0;
        ic = 3;
        for (int j = 0; j < 5; j++){
            if (il + i< linha && ic + j < coluna ){
            tabuleiro[il+i] [ic+j] = cruz[i][j];
            }
        }
    }
    
    for (int i = 0; i < 3; i++){
        il = 7;
        ic = 1;
        for (int j = 0; j < 3; j++){
            if (il + i< linha && ic + j < coluna ){
            tabuleiro[il+i] [ic+j] = octaedro[i][j];
            }
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i == 2 && j < 5 && j > 1) {
                tabuleiro[i][j]= 3;
            }
            else if (i <= 6 && i >= 4 && j ==3) {
                tabuleiro[i][j]= 3;
            }
            else if (i>=6 && j>=7){
            tabuleiro[i][i+1]= 3;
            }
            else if (i<=9 && i>6 && j>=0 && j<3){
            tabuleiro[i][i-1]= 3;
            }
         printf("%d ", tabuleiro[i][j]);
        } 
        printf("\n");
    }

    return 0;
}

