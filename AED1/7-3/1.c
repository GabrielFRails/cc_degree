#include <stdio.h>

void quickSort(int *vet, int began, int tam);
void swap(int *v, int i, int j);

int main(){

    int vetor[10] = {5, 13, 7, 20, 12, 9, 1, 4, 18, 3};
    int i = 0;

    quickSort(vetor, 0, 10);

    printf("\nVetor ao final da ordenação: ");
    for(i=0; i<10; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quickSort(int *vet, int began, int tam){
    int i, j, pivo;
    i = began;
    j = tam - 1;
    pivo = vet[(began + tam) / 2];

    while (i <= j){

        while (vet[i] < pivo && i < tam) 
            i++;
        while (vet[j] > pivo && j > began)
            j--;

        if (i <= j){
            swap(vet, i, j);
            printf("Trocando %d e %d de lugar\n", vet[i], vet[j]);
            i++;
            j--;
        }
    }

    if (j > began){
        quickSort(vet, began, j + 1);
    }
    
    if (i < tam){
        quickSort(vet, i, tam);
    }
}