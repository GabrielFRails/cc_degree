#include <stdio.h>

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(){

    int trocas = 0, vetor[8] = {10, 20, 3, 15, 5, 1, 4, 2}, maior = 0;
    int i=0, j=0, k = 0;

    printf("Vetor inicial: ");
    for(i=0; i<8; i++) printf("%d ", vetor[i]);
    printf("\n\n");

    for(i=0; i<8; i++){
        j = i;
        while(j>0 && vetor[j-1] > vetor[j]){
            swap(vetor, j-1, j);
            j--;
            trocas++;
        }   
    }
    printf("Imprimindo o vetor apos a ordenacao: ");
    for(i=0; i<8; i++) printf("%d ", vetor[i]);
    printf("\nTrocas realizadas: %d\n", trocas);

    return 0;
}