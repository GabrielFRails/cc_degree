#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    union {
        char caracter;
    }
    elemento;
    struct no * link;
} lista;

lista * p, * q, * prim;
int qtd = 0;

void imprime();
void inserir(int num);
void excluir(int num);

void limpar_lista(){
    p = prim;
    q = p;
    for(int i=1; i<=qtd; i++){
        free(p);
        p = q->link;
        q = p;
    }
}

int main() {
    prim = NULL;
    printf("Informe a quantidade de no\'s(elementos): ");
    scanf("%u", &qtd);

    for (int i = 1; i <= qtd; i++) {
        inserir(64 + i);
    }
    printf("\n");
    p = prim;

    for (int i = 1; i <= qtd; i++) {
        imprime();
    }

    printf("fim da lista\n\n");
    //limpar_lista();
    excluir(65);
    return 0;
}

void inserir(int num){
    p = (lista * ) malloc(sizeof(lista));
    p -> info = num;
    p -> elemento.caracter = num;
    p -> link = NULL;

    if (prim == NULL) {
        prim = p;
    } else {
        q -> link = p;
    }
    q = p;
}

void imprime(){
    printf("%d(%c) -> ", p -> info, p -> elemento.caracter);
    p = p -> link;
}

void excluir(int num){
    p = prim;
    while (p != NULL) {
        if (p -> info == num) {
            q -> link = p -> link;
            free(p);
            break;
        }
        q = p;
        p = p -> link;
    }
}