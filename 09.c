#include <stdio.h>

int main (void){

    int nota; 

    printf("Digite a nota: ");
    scanf("%i", &nota);


    if (nota == 0)
    {
        printf("E");
    }
    else if (1 <= nota && nota <= 35)
    {
        printf("D");
    }
    else if (36 <= nota && nota <= 60)
    {
        printf("C");
    }
    else if (61 <= nota && nota <= 85)
    {
        printf("B");
    }
    else if (86 <= nota && nota <= 100)
    {
        printf("A");
    }
    else
        printf("Entrada incorreta.");
    







    return 0;
}