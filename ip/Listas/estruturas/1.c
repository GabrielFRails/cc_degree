#include <stdio.h>
#include <stdlib.h>

typedef struct Fracao{
    int *num;
    int *den;
    
}F ; 

F fracao;

int main(){

    int casos, quantify, i, j, k, equi = 0;
    double divisao[2];
    scanf("%d", &casos);

    for(i=0; i<casos; i++){ //fazendo cada caso de teste
        scanf("%d", &quantify); //lendo quantas frações vamos escrever

        fracao.num = calloc(10, sizeof(int));
        //aqui eu aloco o tanto de memóri necessária para quantify's frações necessárias
        fracao.den = calloc(10, sizeof(int));

        while((scanf("%d/%d", &fracao.num[j], &fracao.den[j]))!=EOF);
            
        printf("Caso de teste %d\n", i+1);
        for(j=0; j<quantify; j++)
            for(k=0; k<quantify; k++){
                if(j!=k){
                    divisao[0] = (double) fracao.num[j]/fracao.den[j];
                    divisao[1] = (double) fracao.num[k]/fracao.den[k];
                }

                if(divisao[0]==divisao[1] && j<k){
                    printf("%d/%d equivalente a %d/%d\n", fracao.num[j], fracao.den[j], fracao.num[k], fracao.den[k]);
                    equi++;
                }

            }

            if(equi==0) printf("Nao ha fracoes equivalentes na sequencia\n");
            
            free(fracao.num);
            free(fracao.den);
            equi = 0;
    }

    return 0;
}