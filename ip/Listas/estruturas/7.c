#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct PontoA{
    double u, x, y, z;
}PontoA;

PontoA *pA;


int main(){

    int i, j, N;
    float dist = 0, aux;
    scanf("%d", &N);
    pA = (PontoA *) calloc(N, sizeof(PontoA));

    for(i=0; i<N; i++)
        scanf("%lf %lf %lf %lf", &pA[i].u, &pA[i].x, &pA[i].y, &pA[i].z);
    
    for(i=0; i<N-1; i++){
        aux = (pow(pA[i].u-pA[i+1].u, 2)) + (pow(pA[i].x-pA[i+1].x, 2)) + 
        (pow(pA[i].y-pA[i+1].y, 2)) + (pow(pA[i].z-pA[i+1].z, 2));
        dist = sqrt(aux);
        printf("%.2lf\n", dist);
    }

    free(pA);

    return 0;
}