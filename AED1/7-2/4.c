#include <stdio.h>

void shellSort(int *vetor, int tam);

int main(){

    int trocas = 0, vetor[10] = {12,42,1,6,56,23,52,9,5,24};
    int i=0;

    shellSort(vetor, 10);    

    printf("Imprimindo o vetor apos a ordenacao: ");
    for(i=0; i<10; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void shellSort(int *vetor, int tam){
    int i, j, k, valor, trocas;
    i = j = valor = trocas = 0;
    k = 1;

    while(k < tam)  k = 3 * k+1;
    while(k > 0){
        for(i=k; i < tam; i++){
            valor = vetor[i];
            j = i;
            while(j > k - 1 && valor <= vetor[j-k]){
                vetor[j] = vetor[j-k];
                j -= k;
                trocas++;
            }
            vetor[j] = valor;
        }
        k /= 3;
    }
    printf("Movimentacoes realizadas no shell sort: %d\n", trocas);
}