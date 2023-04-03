#include <stdio.h>

int main (void){

    float valor;

    scanf("%f", &valor);

if (0 <= valor && valor <= 25)
{
    printf("o valor pertence ao conjunto (0,25)");
}
else if (25 < valor && valor <= 50)
{
    printf("o valor pertence ao conjunto (25,50]");
}
else if (50 < valor && valor <= 75)
{
    printf("o valor pertence ao conjunto (50,75]");
}
else if (75 < valor && valor <= 100)
{
    printf("o valor pertence ao conjunto (75,100]");
}
else
    {
        printf("Fora de intervalo.");
    }
    return 0;
}