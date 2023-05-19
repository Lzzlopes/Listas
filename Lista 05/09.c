#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

    srand(time(NULL));

    int matriz[3][4], linha[3], coluna[4], soma = 0, mult = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    // soma das linhas da matriz

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
        linha[i] = soma;
    }

    //multiplicação de colunas
    for (int j = 0; j < 4; j++)
    {
        mult = 1;
        for (int i = 0; i < 3; i++)
        {
            mult *= matriz[i][j];
        }
        coluna[j] = mult;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Soma da linha %i: %i\n", i, linha[i]);
    }
    
    for (int j = 0; j < 4; j++)
    {
        printf("Soma da coluna %i: %i\n", j, coluna[j]);
    }
    
    
    
    






    return 0;
}