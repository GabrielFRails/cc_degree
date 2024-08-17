#include <stdio.h>
#include <stdlib.h>

typedef struct Fracao{
    int num;
    int den;
    
}Fracao ; 

Fracao *fracao, *fracao1;

int main(){

    int casos , i, j, k = 1, l, equi = 0, cont = 0;
    double divisao[2];
    char buff = ' ';
    scanf("%d", &casos);

    for(i=1; i<=casos; i++){ //fazendo cada caso de teste

        fracao = (Fracao *) calloc(k, sizeof(Fracao));

        while(buff != '\n'){
            scanf("%d%*c%d%c", &fracao[k-1].num, &fracao[k-1].den, &buff);
            k++;
            fracao1 = (Fracao*) realloc(fracao, k*sizeof(Fracao));
            fracao = fracao1;
        }
        buff = 0;
        printf("Caso de teste %d\n", i);
        for(j=0; j<k-2; j++){
            for(l=j+1; l<k-1; l++){
                if(j!=k){
                    divisao[0] = (double) fracao[j].num/fracao[j].den;
                    divisao[1] = (double) fracao[l].num/fracao[l].den;
                }
                if(divisao[0]==divisao[1] && j<k){
                    printf("%.d/%.d equivalente a %.d/%.d\n", fracao[j].num, fracao[j].den, fracao[l].num, fracao[l].den);
                    equi++;
                }

            }
        }

        if(equi==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        equi = 0;
        free(fracao);
    }

    return 0;
}