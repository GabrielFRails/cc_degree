#include <stdio.h>

void le_vetor(float *V, int tamanho);

int main(){

    int size = 0, i = 0;
    scanf("%d", &size);
    
    float A[size], B[size], C[size], D[size], E[size];

    for(i=0; i<size; i++) A[i] = B[i] = C[i] = D[i] = E[i] = (i+1) * (i+1);

    le_vetor(A, size);
    le_vetor(B, size);
    le_vetor(C, size);
    le_vetor(D, size);
    le_vetor(E, size);

    return 0;
}

void le_vetor(float *V, int tamanho){

    int i = 0;

    for(i=0; i<tamanho; i++) printf("%.2f ", V[i]);
    printf("\n");
}