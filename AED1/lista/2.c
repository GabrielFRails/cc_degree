#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int value;
    struct no *prox;
} Lista;

Lista *p, *q, *primeiro = NULL;
int qtd = 0;

void imprimir_lista(int ind);
void inserir_elemento(int num);
void limpa_lista(Lista* prim);

int main(){

    int i, valor;
    printf("Digite o numero de nos: ");
    scanf("%d", &qtd);
    printf("Vamos inicializar a lista...\n");

    for(i=0; i<qtd; i++){
        printf("indice [%d], digite o valor: ", i);
        scanf("%d", &valor);
        inserir_elemento(valor);
    }

    printf("Imprimindo a lista...\n");
    p = primeiro;
    for(i=0; i<qtd; i++){
        imprimir_lista(i);
    }    
    printf("Fim da Lista\n");
    limpa_lista(primeiro);
    return 0;
}

void inserir_elemento(int num){
    p = (Lista *) malloc(sizeof(Lista));
    p->value = num;
    p->prox = NULL;

    if(primeiro == NULL){
        primeiro = p;
    } else {
        q->prox = p;
    }

    q = p;
}

void imprimir_lista(int ind){
    printf("[%d] = %d -> ", ind, p->value);
    p = p->prox;
}

void limpa_lista(Lista* prim){
    if(!prim) return;
    limpa_lista(prim->prox);
    free(prim);
}