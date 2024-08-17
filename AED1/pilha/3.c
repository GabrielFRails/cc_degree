#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int number;
    struct no *link;
} Pilha;

Pilha *p, *q, *topo;
int qtd = 0;


void excluir_elementoPilha(int info);
void printar_pilha();

int main(){

    int i = 0, tombo;
    p = NULL;
    q = NULL;
    topo = NULL;

    printf("Quantidade de elementos da pilha: ");
    scanf("%d", &qtd);

    printf("Digite os números: ");
    for(i=0; i<qtd; i++){
        scanf("%d", &tombo);
        p = (Pilha*) malloc(sizeof(Pilha));
        p->number = tombo;
        p->link = q;
        topo = p;
        q = p;
    }
    printar_pilha();
    printf("Qual elemento deseja exluir? ");
    scanf("%d", &tombo);
    excluir_elementoPilha(tombo);
    printf("Done");
    return 0;
}

void excluir_elementoPilha(int info){
    p = topo;
    while (p != NULL) {
        if(p -> number == info){
            q -> link = p -> link;
            free(p);
            break;
        }
        q = p;
        p = p -> link;
    }
    printar_pilha();
}

void printar_pilha(){
    p = topo;
    printf("Printando a Pilha...\n");
    while(p!=NULL){
        printf("[%d] -> ", p->number);
        p = p->link;
    }
    printf("Fim da Pilha\n");
}
