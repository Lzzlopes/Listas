#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));

    int vet[10], vet2[10];

    for (int i = 0; i < 10; i++)
    {
        do
        {
            vet[i] = rand() % 51;
            printf("Posicao %i: %i\n", i, vet[i]);

        } while ((vet[i] %2 != 0) || (vet[i] < 0)); // repete a geração enquanto o valor for impar e menor que 0

        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0) //se for par divide por 2 se impar multiplica 3 e joga o resultado no vetor 2
        {
            vet2[i] = vet[i] / 2;
        } else {
            vet2[i] = vet[i] * 3;
        }
        printf("posicao %i: %i\n", i, vet2[i]);
    }
    
    return 0;
}
