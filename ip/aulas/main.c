#include <stdio.h>
#include <math.h>
//Funções com vetores como parâmetros
/*
    faça um programa que leia uma quantidade inderteminada de números inteiros
    em um vetor e apresente esse vetor na tela (max 100 valores)
*/

#define N 100

void le_vetor(int * v, int n){ //função que lê uma quantidade fixa de elementos
    int i;
    for(i=0; i<n; i++) scanf("%d", &v[i]);
}

void imprime_vetor(int * v, int n){
    int i;
    for(i=0; i<n; i++) printf("%d, ", &v[i]);
    printf("\n");
}

int main(){

    int v[N];
    int n;
    while(1){
        printf("digite a quantidade de elementos\n");
        scanf("%d", &n);
        if(n<N) break;
        if(n>N) {
            printf("tamanho invalido\n");
            continue;
        }
        le_vetor(v, n);
        imprime_vetor(v, n);
    }

    return 0;
}