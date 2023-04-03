#include <stdio.h>

int main (void){

    int A, B, C;

    scanf("%i %i %i", &A, &B, &C);

    if (A < C && C < B) // no caso de A C B OK
    {
    printf("%i %i %i", A, C, B);
    }

    else if (B < A && A < C )  // no caso de B A C OK
    {
    printf("%i %i %i", B, A, C);
    }
    else if (B < C && C < A) // no caso de B C A OK
    {
    printf("%i %i %i", B, C, A);
    }
    else if (C < A && A < B) // no caso de C A B OK
    {
    printf("%i %i %i", C, A, B);    
    }
    else if (C < B && B < A) // no caso de C B A
    {
    printf("%i %i %i", C, B, A);    
    }
    else     
    printf("%i %i %i", A, B, C);

    return 0;
}