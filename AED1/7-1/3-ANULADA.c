#include <stdio.h>
#include <stdlib.h>

//Estrutura base do nó.
struct node {
    int nData;
    struct node *pLink;
}; 
 
int main(){

    struct node *pNode = (struct node*) malloc(sizeof(struct node*) * 10);
    int i=0, j=0, menor=0, trocas = 0, temp = 0;

    for(i=0; i<10; i++) pNode[i].nData = 10*i - 6;
    for(i=0; i<9; i++) pNode[i].pLink = &(pNode[i+1]);
    pNode[9].pLink = NULL;

    for(i=0; i<10; i++){
        menor = i;
        for(j=i+1; j<10; j++){
            if(pNode[j].nData < pNode[i].nData) menor = j;
            trocas++;
        }
        temp = pNode[i].nData;
        pNode[i].nData = pNode[menor].nData;
        pNode[menor].nData = temp;
    }

    free(pNode);
  return 0;
}

//Criando os nos e associando os dados.
    /*pNode1 = (struct node*) malloc(sizeof(struct node*));
    pNode1->nData = 10;
     
    pNode2 = (struct node*) malloc(sizeof(struct node*));
    pNode2->nData = 20;
     
    pNode3 = (struct node*) malloc(sizeof(struct node*));
    pNode3->nData = 30;*/

     
    //Conectando os nós
    /*pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;  
    pNode3->pLink = NULL;*/