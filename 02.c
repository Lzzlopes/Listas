#include <stdio.h>

int main (void){

  int A, B;

  printf("escreva dois numeros inteiros");
  scanf("%i %i", &A, &B);

  if (A % B == 0 || B % A == 0)
  {
    printf("os numeros %i e %i sao multiplos", A, B);
  }
  else
    printf("os numeros %i e %i nao sao multiplos", A, B);
  
  return 0;
}