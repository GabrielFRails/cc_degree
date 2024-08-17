#include <stdio.h>

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(){

    int trocas = 0, vetor[10], maior = 0;
    int i=0, j=0;

    for(i=0; i<10; i++) vetor[i] = i;

    for(i=0; i<10; i++){
        maior = i;
        for(j=i+1; j<10; j++){
            if(vetor[j] > vetor[maior]) maior = j;
            trocas++;
        }
        swap(vetor, i, maior);
    }
    printf("Imprimindo o vetor ");
    for(i=0; i<10; i++) printf("%d ", vetor[i]);
    printf("\nTrocas realizadas: %d\n", trocas);

    return 0;
}