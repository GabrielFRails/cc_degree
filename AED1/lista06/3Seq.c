#include <stdio.h>
#include <stdlib.h>

void sequencialSearch(int *vector, int vectorSize, int key);

int main(){

    int vetor[] = {2, 22, 30, 51, 51, 51, 83, 99}, a, b;
    //binarySearch_iterative(vetor, 8, valor);
    sequencialSearch(vetor, 8, 51);

    return 0;
}

void sequencialSearch(int *vector, int vectorSize, int key){

    int i = 0, *repetidos, tam = 1;
    while(i<vectorSize){
        if(vector[i] == key){
            if(tam == 1){
                repetidos = (int*) malloc(sizeof(int) * tam);
                repetidos[tam-1] = i;
                tam++;
            } else{
                repetidos = realloc(repetidos, sizeof(int)*tam);
                repetidos[tam-1] = i;
                tam++;
            }
        }
        i++;
    }
    
    tam -= 1;
    for(i=0; i<tam; i++){
        if(i == tam -1){
            printf("%d\n", repetidos[i]);
        }
        else{
            printf("%d, ", repetidos[i]);
        }
    }
    free(repetidos);
}