#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor_no;
    int posicao;
    struct no * link; //endereço para o próximo nó/elemento da lista
} Lista;

Lista *p, *q, *primeiro = NULL;

void imprimir_lista();
void inserir_elemento(int num, int ind);
void excluir_elemento(int ind);
void limpa_lista(Lista* prim);

int main(){

    int qtd, i, valor, escolha, n;
    qtd = i = valor = escolha = n = 0;

    printf("Digite o numeros de posicoes da lista: ");
    scanf("%d", &qtd);
    printf("Vamos inicializar a lista...\n");

    for(i=0; i<qtd; i++){
        printf("indice [%d], digite o valor: ", i);
        scanf("%d", &valor);
        inserir_elemento(valor, i);
    }

    printf("Essa e a sua lista...\n");
    p = primeiro;
    for(i=0; i<qtd; i++){
        imprimir_lista();
    }

    while(1){
        printf("O que gostaria de fazer em seguida?\n");
        printf("1. Quero ver a lista\n");
        printf("2. Quero deletar um elemento da lista\n");
        printf("3. Quero limpar a lista\n");
        printf("4. Ja deu quero ir embora\n");
        
        scanf("%d", &escolha);
        if(escolha == 4) break;

        switch(escolha){
            case 1: 
                p = primeiro;
                for(i=0; i<qtd; i++){
                    imprimir_lista();
                }
                break;

            case 2:
                p = primeiro;
                for(i=0; i<qtd; i++){
                    imprimir_lista();
                }
                printf("Qual indice deseja excluir? ");
                scanf("%d", &n);
                if(n > qtd){
                    printf("Opcao invalida\n");
                    while(n>qtd){
                        printf("digite uma opcao valida... ");
                        scanf("%d", &n);
                    }
                }
                excluir_elemento(n);
                printf("Done!\n");
                qtd--;
                break;

            case 3:
                limpa_lista(primeiro);
                printf("Done!\n");
                return 0;
            default:
                printf("opcao invalida!\n");
                break;
        }
    }

    return 0;
}

void inserir_elemento(int num, int ind){
    p = (Lista*) malloc(sizeof(Lista));
    p -> valor_no = num;
    p -> posicao = ind;
    p -> link = NULL;

    if(primeiro == NULL){
        primeiro = p;
    } else {
        q -> link = p;
    }

    q = p;
}

void imprimir_lista(){
    printf("[%d] = %d -> ", p->posicao, p->valor_no);
    p = p -> link;
}

void excluir_elemento(int ind){
    p = primeiro;
    while (p != NULL) {
        if(p -> posicao == ind){
            q -> link = p -> link;
            free(p);
            break;
        }
        q = p;
        p = p -> link;
    }
}

void limpa_lista(Lista* prim){
    if(!prim) return;
    limpa_lista(prim->link);
    free(prim);
}