#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int value;
    int indice;
    struct no *prox;
} Lista;

Lista *p, *q, *primeiro = NULL;
int qtd = 0, indice;

void imprimir_lista();
void inserir_elemento(int num, int ind);
void limpa_lista(Lista* prim);
void excluir_elemento(int valor);
void att_indices(int ind);

int main(){

    int i, valor;
    printf("Digite o numero de nos: ");
    scanf("%d", &qtd);
    printf("Vamos inicializar a lista...\n");

    for(i=0; i<qtd; i++){
        printf("indice [%d], digite o valor: ", i);
        scanf("%d", &valor);
        inserir_elemento(valor, i);
    }

    printf("Imprimindo a lista... Qual valor será removido?\n");
    p = primeiro;
    for(i=0; i<qtd; i++){
        imprimir_lista();
    }
    printf("Fim da Lista\n");
    scanf("%d", &valor);
    excluir_elemento(valor);
    qtd--;
    p = primeiro;
    for(i=0; i<qtd; i++){
        att_indices(indice);
    }
    

    p = primeiro;
    for(i=0; i<qtd; i++){
        imprimir_lista();
    }

    limpa_lista(primeiro);
    return 0;
}

void inserir_elemento(int num, int ind){
    p = (Lista *) malloc(sizeof(Lista));
    p->value = num;
    p->indice = ind;
    p->prox = NULL;

    if(primeiro == NULL){
        primeiro = p;
    } else {
        q->prox = p;
    }

    q = p;
}

void imprimir_lista(){
    printf("[%d] = %d -> ", p->indice, p->value);
    p = p->prox;
}

void limpa_lista(Lista* prim){
    if(!prim) return;
    limpa_lista(prim->prox);
    free(prim);
}

void excluir_elemento(int valor){
    p = primeiro;
    while (p != NULL) {
        if(p -> value == valor){
            indice = p->indice;
            q -> prox = p -> prox;
            free(p);
            break;
        }
        q = p;
        p = p -> prox;
    }
}

void att_indices(int ind){
    int v = p->indice;
    if(p->indice > ind) p->indice = v-1;
    p = p->prox; 
}