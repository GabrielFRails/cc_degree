#include <stdio.h>
#include <stdlib.h>

void acessa_vetor(int *v, int tamanho);

int main(){

    int tamanho_vetor = 0, v = 0, i = 0;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &tamanho_vetor);
    
    acessa_vetor(&v, tamanho_vetor);
    

    printf("Fim do programa\n");
    return 0;
}

void acessa_vetor(int *v, int tamanho){

    int i = 0;
    v =  malloc(sizeof(int) * tamanho);
    if(v==NULL) printf("Não foi possível alocar o espaço desejado");
    else{
        for(i=0; i<tamanho; i++) scanf("%d", &v[i]);
        
        printf("Imprimindo o vetor\n");

        for(i=0; i<tamanho; i++) printf("Posição %d - valor %d\n", i, v[i]);

        free(v);
    }
    
}