//Escreva um programa que verifica se uma string é um palíndromo, ou seja, é a mesma quando lida de trás para frente ou de frente para trás.

#include <stdio.h>
#include <string.h>

int main () 
{
    char vetn[100];
    int i, j, tamanho, flag = 1;
    scanf("%s", vetn);

    tamanho = strlen(vetn) - 1;

    for(i = 0, j = tamanho; i < tamanho/2; i++, j--) { // comparação da string do começo ao meio com os carac do final ao meio
        if (vetn[i] != vetn[j]) {
            flag = 0;
            break;
        }  
    }
    if(flag)
    {
        printf("%s e um palindromo", vetn);
    } else {
        printf("%s nao e um palindromo", vetn);
    }

    return 0;
}
