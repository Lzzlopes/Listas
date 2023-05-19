#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    float matriz[5][5];
    float diagonal[5];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 10000;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%.2f ", matriz[i][j]);
            if (i == j) {  // diagonal principal
                diagonal[i] = matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("Diagonal principal:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", diagonal[i]);
    }
    return 0;
}
