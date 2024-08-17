#include <stdio.h>

void swap(int *v){

    v[2] = v[0];
    v[0] = v[1];
    v[1] = v[2];
}

int main(){

    int vetor[3], i; // posição 2 => auxliar
    for(i=0; i<2; i++) scanf("%d", &vetor[i]);
    vetor[2] = 0;

    printf("Antes da função swap\n");
    for(i=0; i<2; i++) printf("%d ", vetor[i]);

    swap(vetor);
    printf("\nDepois da função swap\n");
    for(i=0; i<2; i++) printf("%d ", vetor[i]);
    printf("\n");
    
    return 0;
}