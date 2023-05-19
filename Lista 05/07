#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int matriz[5][5], num, i, j, flag=0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    scanf("%i", &num);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j%num == 0)
            {
                flag+=1;
            }
        }
        if (i%num == 0)
        {
            flag+=1;
        }
    }
    
    printf("O numero de multiplos do valor digitado presentes na matriz sao: %i", flag);

    return 0;
}
