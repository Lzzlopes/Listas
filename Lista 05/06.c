#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

    srand(time(NULL));

    double matriz[4][4];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }      
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }    

    printf("\n Matriz Transposta: \n");

    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
