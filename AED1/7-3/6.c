#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char *frase, int i, int j);
void heapify(char *frase, int size_frase, int i);
void heapSort(char *frase, int size_frase);

int main(){

    char frase[24] = "Ordenando com heap Sort";
    printf("Antes: %s\n", frase);
    heapSort(frase, 23);

    printf("Depois: %s\n", frase);
    return 0;
}

void swap(char *frase, int i, int j){
    //printf("Antes da swap %c e %c\n", i, j);
    char temp = frase[i];
    frase[i] = frase[j];
    frase[j] = temp;
    //printf("Depois %c e %c\n", i, j);
}

void heapify(char *frase, int size_frase, int i){

    int max_value = i;
    int leftChild = 2 * i;
    int rightChild = 2 * i + 1;

    if (leftChild < size_frase && (int)tolower(frase[leftChild]) < (int)tolower(frase[max_value]))
        max_value = leftChild;

    if (rightChild < size_frase && (int)tolower(frase[rightChild]) < (int)tolower(frase[max_value]))
        max_value = rightChild;

    if (max_value != i){
        swap(frase, i, max_value);
        //printf("Swaping %d and %d in this iteration\n", frase[i], frase[max_value]);
        heapify(frase, size_frase, max_value);
    }
}

void heapSort(char *frase, int size_frase){

    for (int i = size_frase / 2 - 1; i >= 0; i--)
        heapify(frase, size_frase, i);

    for (int i = size_frase - 1; i >= 0; i--){
        swap(frase, 0, i);
        heapify(frase, i, 0);
    }
}