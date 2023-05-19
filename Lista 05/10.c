#include <stdio.h>

int main (){

    // Declaração da matriz de salários
    float salarios[3][6];

    // Variáveis auxiliares
    int i, j;
    float total_loja, media_loja;
    int contador_funcionarios;

    // Preencher a matriz de salários por leitura do teclado
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("Informe o salario do funcionario da loja %d, funcionario %d:", i+1, j+1);
            scanf("%f", &salarios[i][j]);
        }
    }

    // Imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("O salario do funcionario da loja %d, funcionario %d e R$ %.2f.\n", i+1, j+1, salarios[i][j]);
        }
    }

    // Imprimir o total pago em salários por loja
    for (i = 0; i < 3; i++) {
        total_loja = 0;
        for (j = 0; j < 6; j++) {
            total_loja += salarios[i][j];
        }
        printf("A loja %d pagou um total de R$ %.2f em salarios.\n", i+1, total_loja);
    }

    // Informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja
    contador_funcionarios = 0;
    for (j = 0; j < 6; j++) {
        if (salarios[0][j] > 2000) {
            contador_funcionarios++;
        }
    }
    printf("Na primeira loja ha %d funcionarios com salario superior a R$ 2.000,00.\n", contador_funcionarios);

    // Informar a média salarial da segunda loja
    media_loja = 0;
    for (j = 0; j < 6; j++) {
        media_loja += salarios[1][j];
    }
    media_loja /= 6;
    printf("A media salarial da segunda loja e R$ %.2f.\n", media_loja);

    return 0;
}