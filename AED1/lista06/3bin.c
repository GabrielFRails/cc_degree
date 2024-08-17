#include <stdio.h>
#include <stdlib.h>

void binarySearch_iterative(int *vector, int vectorSize, int key);

int main(){

    int vetor[] = {2, 22, 22, 35, 40, 51, 80, 99};
    binarySearch_iterative(vetor, 8, 22);

    return 0;
}

void binarySearch_iterative(int *vector, int vectorSize, int key){

    int begin = 0, end = vectorSize - 1, i=0, ind_direita, ind_esquerda, tam = 1;
    int *repetidos;

    while(begin <= end){
        i = begin + (end - begin) / 2;
        if(vector[i] == key){
            repetidos = (int*) malloc(sizeof(int));
            repetidos[0] = i;

            ind_esquerda = i-1;
            ind_direita = i+1;

            while(ind_esquerda >= 0){
                if(vector[ind_esquerda] != key) break;
                else{
                    tam++;
                    repetidos = realloc(repetidos, sizeof(int)*tam);
                    repetidos[tam-1] = ind_esquerda;
                }
                ind_esquerda--;
            }

            while(ind_direita < vectorSize){
                if(vector[ind_direita] != key) break;
                else{
                    tam++;
                    repetidos = realloc(repetidos, sizeof(int)*tam);
                    repetidos[tam-1] = ind_direita;
                }
                ind_direita++;
            }
            break;
        }
        if(vector[i] < key){
            begin = i + 1;
        } else{
            end = i;
        }
    }

    printf("tam %d\n", tam);
    for(i=0; i<tam; i++){
        if(i == tam - 1){
            printf("%d\n", repetidos[i]);
        }
        else{
            printf("%d, ", repetidos[i]);
        }
    }
    free(repetidos);
}