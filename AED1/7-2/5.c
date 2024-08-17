#include <stdio.h>

void shellSort(int *vetor, int tam);

int main(){

    int trocas = 0, vetor[100];
    int i=0;

    for(i=0; i<100; i++){

        vetor[i] = 100 - i;
    }
   
    shellSort(vetor, 100);

    printf("Imprimindo o vetor apos a ordenacao: ");
    for(i=0; i<100; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void shellSort(int *vetor, int tam){
    int i, j, k, trocas;
    i = j = trocas = 0;
    k = 1;

    while(k < tam)  k = 3 * k+1;
    while(k > 0){
        for(i=k; i < tam; i++){
            j = i;
            while(j > k - 1 && vetor[i] >= vetor[j-k]){
                vetor[j] = vetor[j-k];
                j -= k;
                trocas++;
            }
            vetor[j] = vetor[i];
        }
        k /= 3;
    }
    printf("Movimentacoes realizadas no shell sort: %d\n", trocas);
}