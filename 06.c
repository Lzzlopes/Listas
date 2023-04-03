#include <stdio.h>

int main (void){

    int q1, q2, q3, q4, q5, codigo;
    float vt, v1, v2, v3, v4, v5;

    do {
        printf("Escolha um: \n");
        printf("1) Cachorro Quente  | R$12,00 \n");
        printf("2) X-Salada         | R$15,50\n");
        printf("3) X-Bacon          | R$18,00 \n");
        printf ("4) Torrada Simples  | R$8,00 \n");
        printf("5) Refrigerante     | R$4,50\n");
        printf("6) Fechar conta\n");
        scanf ("%i", &codigo);

        switch (codigo)
        {
        case 1:
            printf("quantos voce vai querer?\n");
            scanf("%i", &q1);
            v1 = (q1 * 12);
            break;
        case 2:
            printf("quantos voce vai querer?\n");
            scanf("%i", &q2);
            v2 = (q2 * 15.5);
            break;
        case 3:
            printf("quantos voce vai querer?\n");
            scanf("%i", &q3);
            v3 = (q3 * 18);
            break;
        case 4:
            printf("quantos voce vai querer?\n");
            scanf("%i", &q4);
            v4 = (q4 * 8);
            break;
        case 5:
            printf("quantos voce vai querer?\n");
            scanf("%i", &q5);
            v5 = (q5 * 4.5);
            break;

        default:
            
            break;
        }
        
    } while (codigo != 6);

    vt = (v1 + v2 + v3 + v4 + v5);

    printf("o valor total sera de: R$%.2f", vt);
    return 0;
}