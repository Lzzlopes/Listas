#include <stdio.h>

int main(void) {
  int A, B, mult;

  printf("Escreva dois numeros inteiros:\n ");
  scanf("%i %i", &A, &B);

  mult = (A * B);
  
  if (mult > 0)
  {
    printf("sinal positivo");
  }
  else if (mult < 0)
  {
    printf("sinal negativo");
  }
  else
    printf("sinal nulo");
  return 0;
}