#include <stdio.h>

int main (void){

    int D;

    printf("Qual foi a distancia do lancamento?\n");
    scanf("%i", &D);

    if (0 <= D && D <= 800)
    {
        printf("a cesta valeu 1 ponto");
    }
    else if (800 < D && D <= 1400)
    {
        printf("a cesta valeu 2 pontos");
    }
    else if (1400 < D && D <= 2000)
    {
        printf("a cesta valeu 3 pontos ");
    }
    else
    printf("a cesta nao valeu pontos pelo lancamento ser de fora da quadra.");
    





    return 0;
}