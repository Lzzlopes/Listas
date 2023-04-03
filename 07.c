#include <stdio.h>

int main (void){

    float n1, n2, n3, n4, media, ne, mediafim;

    printf("Quais as notas do aluno? \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4);

    if (media >= 7)
    {
        printf("Aluno aprovado");
    }
    else if (5 <= media && media <= 6.9) {
        printf("aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%f", &ne);

        mediafim = ((ne + media) / 2);

        if (mediafim >= 5)
        {
            printf("Aluno aprovado.");
        }
        else
        {
            printf("Aluno reprovado.");
        }
    }
    else 
    printf("Aluno reprovado.");
    return 0;
}