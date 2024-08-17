#include <stdio.h>

void swap(int *v, int i, int j);
void heapify(int *vet, int size_vetor, int i);
void heapSort(int *vet, int size_vetor);

int main(){

    int vetor[9] = {5, 13, 2, 25, 7, 17, 20, 8, 4}, i=0;

    heapSort(vetor, 9);

    for(i=0; i<9; i++){
        if(i == 8)
            printf("%d.\n", vetor[i]);
        else
            printf("%d, ", vetor[i]);
    }

    return 0;
}

void swap(int *v, int i, int j){

    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void heapify(int *vet, int size_vetor, int i){

    int max_value = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < size_vetor && vet[leftChild] > vet[max_value])
        max_value = leftChild;

    if (rightChild < size_vetor && vet[rightChild] > vet[max_value])
        max_value = rightChild;

    if (max_value != i){
        swap(vet, i, max_value);
        printf("Swaping %d and %d in this iteration\n", vet[i], vet[max_value]);
        heapify(vet, size_vetor, max_value);
    }
}

void heapSort(int *vet, int size_vetor){

    for (int i = size_vetor / 2 - 1; i >= 0; i--)
        heapify(vet, size_vetor, i);

    for (int i = size_vetor - 1; i >= 0; i--){
        swap(vet, 0, i);
        printf("Swaping %d and %d in heapSort function\n", vet[0], vet[i]);
        heapify(vet, i, 0);
    }
}