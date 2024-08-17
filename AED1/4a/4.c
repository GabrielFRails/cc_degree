#include <stdio.h>
#include <stdlib.h>

/*
    Esse programa cria uma matriz alocada dinamicamente e cada índice
    tem como valor a soma de sua "coordenada";
*/

#define Y 2 //linhas da matriz
#define X 2 //colunas da matriz

int main(int argc, char *argv[]){

    int **A;
    int i, j;
    A = (int **)malloc(Y * sizeof(int *)); //alocando quantas linhas a matriz terá

    for (i = 0; i < Y; i++)
        A[i] = (int *)malloc(X * sizeof(int)); //alocando cada uma das linhas com um vetor de tamanho X, ou seja as colunas

    for (i = 0; i < Y; i++)
        for (j = 0; j < X; j++)
            A[i][j] = i + j; //setando o valor de cada índice como a soma das coordenadas

    for (i = 0; i < Y; i++)
        for (j = 0; j < X; j++)
            printf("%d \t", A[i][j]); //printando os valores

    /*
        Em seguida temos o processo de liberação de memória, sempre indo do mais interior para
        o mais exterior.
    */
       
    for (i = 0; i < Y; i++)
        free(A[i]); 

    free(A);
    return 0;
 }