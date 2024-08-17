//Aula de Matrizes

#include <stdio.h>

#define ROWS 2
#define COLUMNS 3

void imprime_mat(int (*p)[COLUMNS], int L){
    int r, c;
    for(r=0; r<ROWS; r++){
        for(c=0; c<COLUMNS; c++) {
            printf("%d ", p[r][c]);
        }
        printf("\n");
    }
}

int main(){

    int A[ROWS][COLUMNS]; //linhas e colunas
    int r, c;
    int (*p)[COLUMNS]; //declarar sempre com o valor de colunas
    p = A;
    // Leitura
    for(r=0; r<ROWS; r++){
        for(c=0; c<COLUMNS; c++) scanf("%d", &A[r][c]);
    }
    //impressão
    for(r=0; r<ROWS; r++){
        for(c=0; c<COLUMNS; c++) {
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("agora imprimindo com a function\n");
    imprime_mat(p, ROWS);

    return 0;
}