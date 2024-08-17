#include <stdio.h>

int comparacoesBin = 0;
int comparacoesSeq = 0;

int binarySearch_iterative(int *vector, int vectorSize, int key);
int sequencialSearch(int *vector, int vectorSize, int key);

int main(){

    int vetor[] = {2, 7, 11, 33, 54, 85, 90, 115}, a, b, valor;
    printf("digite o valor que deseja buscar: ");
    scanf("%d", &valor);
    a = binarySearch_iterative(vetor, 8, valor);
    b = sequencialSearch(vetor, 8, valor);

    if(b == -1){
        printf("Valor não encontrado no vetor, mesmo assim...\n");
        printf("Comparacoes Busca Sequencial: %d \nComparacoes Busca Binaria: %d\n", comparacoesSeq, comparacoesBin);
    }else{
        printf("Comparacoes Busca Sequencial: %d \nComparacoes Busca Binaria: %d\n", comparacoesSeq, comparacoesBin);
        printf("Indice seq. %d // bin. %d\n", b, a);
    }

    return 0;
}

int sequencialSearch(int *vector, int vectorSize, int key){

    int i = 0;
    while(i<vectorSize && vector[i] != key){
        i++;
        comparacoesSeq++;
    }
    if(i < vectorSize){
        comparacoesSeq++;
        return i;
    } else{
        return -1; //key don't found
    }
}

int binarySearch_iterative(int *vector, int vectorSize, int key){

    int begin = 0, end = vectorSize - 1, i=0;

    while(begin <= end){
        i = begin + (end - begin) /2;
        //printf("%d + %d /2 = %d\n", begin, end, i);
        if(vector[i] == key){
            comparacoesBin++;
            return i;
        }
        if(vector[i] < key){
            begin = i + 1;
            comparacoesBin++;
        } else{
            end = i;
            comparacoesBin++;
        }
    }

    return -1; // if don't found the key
}