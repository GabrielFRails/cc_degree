#include <stdio.h>
#include <time.h>

void swap(unsigned long int *v, int i, int j);
void bubbleSort(unsigned long int *vetor, int tam);
void shellSort(unsigned long int *vetor, int tam);

int main(){

    clock_t t_bublle, t_shell;
    
    t_shell = clock();

    int trocas = 0, i = 0;
    unsigned long int v1[5000], v2[5000];
   
    for(i=0; i<5000; i++){
        v1[i] = v2[i] = i+1;
    }

    t_bublle = clock();
    bubbleSort(v1, 5000);

    t_bublle = clock() - t_bublle;
    double time_takenBubble = (double)t_bublle / CLOCKS_PER_SEC;
    printf("Tempo demorado com Bubble sort: %lf segundos\n\n", time_takenBubble);

    t_shell = clock();
    shellSort(v2, 5000);

    t_shell = clock() - t_shell;
    double time_takenShell = (double)t_shell / CLOCKS_PER_SEC;
    printf("Tempo demorado com SHell sort: %lf segundos\n", time_takenShell);

    return 0;
}

void swap(unsigned long int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubbleSort(unsigned long int *vetor, int tam){
    int i, j, aux, trocas = 0, verify = 0;

    for (i = tam - 1; i > 0; i--){
        verify = 0;
        for (j = 0; j < i; j++){
            if (vetor[j] < vetor[j + 1]){
            swap(vetor, j, j+1);
            trocas++;
            verify++;
            }
        }
        if(verify == 0){
            printf("Bubble Sort - Movimentacoes realizadas...: %d\n", trocas);
            return;
        }
        //bubbleSort(vetor, 8);
    } 
    printf("Bubble Sort - Movimentacoes realizadas...: %d\n", trocas);
}

void shellSort(unsigned long int *vetor, int tam){
    int i, j, k, valor, trocas;
    i = j = valor = trocas = 0;
    k = 1;

    while(k < tam)  k = 3 * k+1;
    while(k > 0){
        for(i=k; i < tam; i++){
            valor = vetor[i];
            j = i;
            while(j > k - 1 && vetor[i] >= vetor[j-k]){ //para decrescente <=
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