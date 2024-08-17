/*
    Esse programa calcula o maior valor de um vetor
    primeiro temos um input com o tamanho do vetor e em seguida os valores do vetor
*/


#include <stdio.h>

int maior_valor(int size, int*v);

int main(){

    int tamanho = 0, i;
    scanf("%d", &tamanho);
    int v[tamanho];
    for(i=0; i<tamanho; i++) scanf("%d", &v[i]);
    printf("maior valor do vetor: %d\n", maior_valor(tamanho, v));
    return 0;
}

int maior_valor(int size, int *v){

    int valor = 0;
    if(size == 1) valor = v[0];
    else{
        valor = maior_valor(size-1, v);
        if(valor < v[size-1]) valor = v[size-1];
    }
    return valor;
}