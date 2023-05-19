#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 int main() {
    int matriz[10][15];
    int somaLinha, somaColuna;
    int i, j;

    srand(time(NULL));

     // Preenchendo a matriz com números inteiros aleatórios
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            matriz[i][j] = rand() % 100; 
        }   
    }

     // Calculando a soma dos elementos de cada linha e verificando se é par ou ímpar
    for (i = 0; i < 10; i++) {
        somaLinha = 0;
        for (j = 0; j < 15; j++) {
            somaLinha += matriz[i][j];
        }
        printf("Soma dos elementos da linha %d: %d ", i+1, somaLinha);
        if (somaLinha % 2 == 0) {
            printf("(par)\n");
        } else {
            printf("(impar)\n");
        }
    }

     // Calculando a soma dos elementos de cada coluna e verificando se é par ou ímpar
    for (j = 0; j < 15; j++) {
        somaColuna = 0;
        for (i = 0; i < 10; i++) {
            somaColuna += matriz[i][j];
        }
        printf("Soma dos elementos da coluna %d: %d ", j+1, somaColuna);
        if (somaColuna % 2 == 0) {
            printf("(par)\n");
        } else {
            printf("(ímpar)\n");
        }
    }
    return 0;
}