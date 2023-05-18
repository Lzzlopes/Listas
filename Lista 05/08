#include <stdio.h> 

int main() 
{ 
    int i, j, matriz[4][4];
    char opcao;

    printf("Digite os elementos da matriz quadrada de ordem 4: \n"); 
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            scanf("%d", &matriz[i][j]); 
        }
    }

    do
    {
    printf("Escolha uma opcao:\n a) Imprimir todos os elementos da matriz\n b) Somar os quadrados de todos os elementos da primeira coluna\n c) Somar todos os elementos da terceira linha\n d) Somar os elementos da diagonal principal\n e) Somar todos os elementos de indice par da segunda linha\n f) Sair");
    scanf(" %s", &opcao);

    if (opcao == 'a')
    {
        printf("\nTodos os elementos da matriz: \n"); 
        for (i = 0; i < 4; i++) 
        { 
            for (j = 0; j < 4; j++)
            {
                printf("%i\t", matriz[i][j]);
            } 
        printf("\n"); 
        }
    }
    if (opcao == 'b')
    {
        int soma_quadrados = 0; 
        for (i = 0; i < 4; i++){
            soma_quadrados += matriz[i][0] * matriz[i][0];} 
        printf("\nSoma dos quadrados dos elementos da primeira coluna = %d \n", soma_quadrados); 
    }

    if (opcao == 'c')
    {
        int soma_terceira_linha = 0; 
        for (i = 0; i < 4; i++) {
            soma_terceira_linha += matriz[2][i];}
        printf("Soma dos elementos da terceira linha = %d \n", soma_terceira_linha); 
        }
    else if(opcao == 'd')
        {
        int soma_diagonal = 0; 
        for (i = 0; i < 4; i++) {
            soma_diagonal += matriz[i][i]; }
        printf("Soma dos elementos da diagonal principal = %d \n", soma_diagonal); }
    else if (opcao =='e')
        {
            int soma_par_segunda_linha = 0; 
            for (i = 0; i < 4; i += 2) 
                soma_par_segunda_linha += matriz[1][i]; 
            printf("Soma dos elementos de índice par da segunda linha = %d \n", soma_par_segunda_linha);
        }
    } while (opcao != 'f');
    
    return 0;
}
