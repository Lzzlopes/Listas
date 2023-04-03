#include <stdio.h>

int main (void){

    int N, A, B;

    printf("Quantos minutos faltam para o fim do expediente? \n");
    scanf("%i", &N);

    printf("Quantos minutos demora para terminar cada presente?\n");
    scanf("%i %i", &A, &B);



    if (A + B < N)
    {
        printf("farei hoje!");
    }
    else
    {
        printf("Deixa para amanha!");
    }
    
    return 0;
}