#include <stdio.h>

int main (void){

    int ddd;

    printf("escreva um ddd.");
    scanf("%i", &ddd);

    switch (ddd)
    {
    case 61:
        printf("esse ddd pertence a: Brasilia.");
        break;
    case 71:
        printf("esse ddd pertence a: Salvador.");
        break;
    case 11:
        printf("esse ddd pertence a: Sao Paulo.");
        break;
    case 21:
        printf("esse ddd pertence a: Rio de Janeiro.");
        break;
    case 32:
        printf("esse ddd pertence a: Juiz de Fora.");
        break;
    case 19:
        printf("esse ddd pertence a: Campinas.");
        break;
    case 27:
        printf("esse ddd pertence a: Vitoria.");
        break;
    case 31:
        printf("esse ddd pertence a: Belo horizonte.");
        break;

    default:
        printf("ddd nao cadastrado.");
        break;
    }

    return 0;
}