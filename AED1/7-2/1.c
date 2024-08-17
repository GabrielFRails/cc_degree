#include <stdio.h>
#include <time.h>

void swap(int *v, int i, int j);
void bubbleSort(int *vetor, int tam);

int main(){

    clock_t t;
    t = clock();

    int trocas = 0, vetor[8] = {20, 10, 3, 15, 5, 1, 4, 2};
    int i=0;
   
    bubbleSort(vetor, 8);

    printf("Imprimindo o vetor apos a ordenacao: ");
    for(i=0; i<8; i++) printf("%d ", vetor[i]);

    t = clock() - t;
    double time_taken = (double)t / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %lf\n", time_taken);

    return 0;
}

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubbleSort(int *vetor, int tam){
    int i, j, aux, trocas = 0, verify = 0;

    for (i = tam - 1; i > 0; i--){
        verify = 0;
        for (j = 0; j < i; j++){
            if (vetor[j] > vetor[j + 1]){
            swap(vetor, j, j+1);
            trocas++;
            verify++;
            }
        }
        if(verify == 0){ //verificando que o algoritmo n realizou nenhuma troca
            printf("Na iteracao: %d verificou-se que nao ha necessidade de continuar as comparacoes\n", tam-i);
            printf("Retornando...\n");
            printf("Bubble Sort - Movimentacoes realizadas...: %d\n", trocas);
            return;
        }
    }
    printf("Bubble Sort - Movimentacoes realizadas...: %d\n", trocas);
}