#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int vet[1001], num, flag = 0, cont = 0;

    for (int i = 0; i < 1001; i++)
    {
        vet[i] = rand() % 101;
        printf("%i: %i\n", i, vet[i]);
    }

    scanf("%i", &num);

    for (int i = 0; i < 1001; i++)
    {
        if (vet[i] == num)
        {
            cont ++;
            if (cont ++)
            {
                printf("Foi encontrado o vetor nas posicoes: %i\n", i);
            } else{
                printf("O valor nao foi encontrado no vetor");
            }
        }
    }
    return 0;
}
