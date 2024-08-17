#include <stdio.h>

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void shellsort(int *vetor, int tam);

int main(){

    int trocas = 0, vetor[6] = {31,41,59,26,41,56};
    int i=0;

    shellsort(vetor, 6);

    for(i=0; i<6; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void shellsort(int *vetor, int tam){
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