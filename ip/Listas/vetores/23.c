#include <stdio.h>
#include <string.h>

#define N 11

int main(){

    int cpf[N], i, b1, b2, cases, cont = 0;
    scanf("%d", &cases);

    while(cont<cases){
        for(i=0; i<N; i++) scanf("%d", &cpf[i]);

        b1 = cpf[0];
        for(i=1; i<9; i++) b1 += cpf[i] * (i+1);
        b1 %= 11;
        if(b1==10) b1 = 0;

        b2 = cpf[0] * 9;
        for(i=1; i<9; i++) b2 += cpf[i] * (9-i);
        b2 %= 11;
        if(b2==10) b2 = 0;

        if(b1 == cpf[9] && b2 == cpf[10]) printf("CPF valido\n");
        else printf("CPF invalido\n");

        cont++;
       
    }
    
    return 0;
}