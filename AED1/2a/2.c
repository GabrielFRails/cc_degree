#include <stdio.h>
#include <stdlib.h>

int main(){

    int linha, coluna;
    linha  = coluna = 0;
    printf("Digite o valor da linha e coluna: ");
    scanf("%d %d", &linha, &coluna);

    int **matriz, i, j;
    matriz = malloc(sizeof(int*) * linha);

    for(i=0; i<linha; i++) matriz[i] = malloc(sizeof(int)*coluna);

    for(i=0; i<linha; i++)
        for(j=0; j<coluna; j++) scanf("%d", &matriz[i][j]);
    
    /*printf("Imprimindo a matriz\n");

    for(i=0; i<linha; i++)
        for(j=0; j<coluna; j++){
            if(j==coluna-1) printf("%d\n", matriz[i][j]);
            else printf("%d ", matriz[i][j]);
        }*/

    for(i=0; i<linha; i++) free(matriz[i]);
    free(matriz);

    return 0;
}