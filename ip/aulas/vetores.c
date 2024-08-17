#include <stdio.h>
#include <math.h>

#define n 10

int main(){

    //Declaração de Vetores
    int v[n];
    int i=0, a; //a -> valor ue vamos buscar no vetor
    int *pi = v;

    //printf("O tamanho de v: %d\n", sizeof(v)); //vendo o tamanho em bytes do vetor
    printf("Entre com %d numeros do vetor\n", n); 

    //alocando valores nas posições do vetor via terminal
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    printf("Digite um numero para verificacao\n");  
    scanf("%d", &a);

    //imprimindo o vetor
    for(i=0; i<n; i++){
        if(a==v[i]){
            printf("O numero %d foi encontrado na posicao %d\n", a, i);
            break;
        }
    }

    if(i==n) printf("O numero nao foi encontrado no vetor\n");

    printf("\n");
    
    return 0;
}