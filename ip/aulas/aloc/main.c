#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Alocação dinâmica de matrizes
 */



int main(){

    int nl, nc;
    int l, c;
    int ** M = NULL;

    scanf("%d%d", &nl, &nc);

    M = (int**) malloc(nl*sizeof(int*));

    for(l=0; l<nl; l++) M[l] = (int*) malloc(nc*sizeof(int));

    for(l=0; l<nl; l++)
        for(c=0; c<nc; c++) M[l][c] = l+c;

    for(l=0; l<nl; l++){
        for(c=0; c<nc; c++) printf("%d ", M[l][c]);
            
        printf("\n");
    } 

    return 0;
}