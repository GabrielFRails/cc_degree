#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int indice;
    union {
        int number;
    }
    element;
    struct no * link;
} lista;

lista *next, *previous, *first;

void inserir(int num, int ind);
void pesquisaSequencial_listaDinamica(int num);
void imprime();

int main(){

    int valor, vector[] = {2, 22, 30, 50, 51, 67, 83, 99}, i=0;
    printf("digite o valor que deseja buscar: ");
    scanf("%d", &valor);

    for(i=0; i<8; i++){
        inserir(vector[i], i);
    }

    next = first;
    printf("imprimindo a lista\n");
    for(i=0; i<8; i++){
        imprime();
    }
    printf("Fim da lista\nBuscando o elemento %d na lista...\n", valor);
    pesquisaSequencial_listaDinamica(valor);

    return 0;
}

void imprime(){
    printf("List[%d] = %d -> ", next->indice, next->element.number);
    next = next -> link;
}

void pesquisaSequencial_listaDinamica(int num){
    next = first;
    while (next != NULL) {
        if (next -> element.number == num) {
            previous -> link = next -> link;
            printf("Achei o elemento %d no indice: %d\n", next->element.number, next->indice);
            free(next);
        }
        previous = next;
        next = next -> link;
    }

    //printf("Valor: %d nao encontrado no vetor :(\n", num);
}

void inserir(int num, int ind){
    next = (lista * ) malloc(sizeof(lista));
    next -> indice = ind;
    next -> element.number = num;
    next -> link = NULL;

    if (first == NULL) {
        first = next;
    } else {
        previous -> link = next;
    }
    previous = next;
}