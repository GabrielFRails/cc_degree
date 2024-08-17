#include <stdio.h>
#include <stdlib.h>

void le_matriz(int *lin, int *col, int **mat);
void print_matriz(int *lin, int *col, int **mat);

int main(){

    int linha, coluna;
    linha  = coluna = 0;
    printf("Digite o valor da linha e coluna: ");
    scanf("%d %d", &linha, &coluna);

    int **matriz, i;
    matriz = malloc(sizeof(int*) * linha);
    for(i=0; i<linha; i++) matriz[i] = malloc(sizeof(int)*coluna);

    le_matriz(&linha, &coluna, matriz);
    print_matriz(&linha, &coluna, matriz);

    for(i=0; i<linha; i++) free(matriz[i]);
    free(matriz);

    return 0;
}

void le_matriz(int *lin, int *col, int **mat){
    printf("Lendo a matriz\n");
    int i = 0, j=0;
    
    for(i=0; i<(*lin); i++)
        for(j=0; j<(*col); j++) scanf("%d", &mat[i][j]);   
}

void print_matriz(int *lin, int *col, int **mat){
    printf("Imprimindo a matriz\n");
    int i = 0, j = 0;
    for(i=0; i<(*lin); i++){
        for(j=0; j<(*col); j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}