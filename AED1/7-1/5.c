#include <stdio.h>

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int main(){

    int trocas = 0, vetor[6] = {31,41,59,26,41,56};
    int i=0, j=0, k = 0;

    printf("Vetor inicial: ");
    for(i=0; i<6; i++) printf("%d ", vetor[i]);
    printf("\n\n");

    for(i=0; i<6; i++){
        j = i;
        while(j>0 && vetor[j-1] < vetor[j]){
            printf("Trocando %d e %d de lugar\n", vetor[j-1], vetor[j]);
            swap(vetor, j-1, j);
            printf("Vetor na iteracao %d: ", i+1);
            for(k=0; k<6; k++) printf("%d ", vetor[k]);
            printf("\n");
            j--;
            trocas++;
        }   
    }
    printf("Imprimindo o vetor em ordem descrescente: ");
    for(i=0; i<6; i++) printf("%d ", vetor[i]);
    printf("\nTrocas realizadas: %d\n", trocas);

    return 0;
}