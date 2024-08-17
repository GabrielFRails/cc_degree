#include <stdio.h>
#include <math.h>

int digit_count(long int n); //função para saber quantos dígitos tem um número

int main(){

    int i, a, n1, n2, soma, N, pot;

    while(1){
        scanf("%d %d", &n1, &n2);
        if(n1==0 && n2==0) break;
        
        soma = n1 + n2;
        //printf("valor da soma: %d\n", soma);
        N = digit_count(soma);
        //printf("digitos soma: %d\n", N);
        a = N;
        int v[1];

        for(i=0; i<a; i++){
            if(N==3) pot = 100;
            else pot = pow(10, N-1);
            //printf("valor da pot: %d\n", pot);
            v[0] = soma / pot;
            soma = soma % pot;
            //printf("valor de [0]: %d e novo valor de soma: %d\n", v[0], soma);
            N--;
            if(v[0]!=0) printf("%d", v[0]);
        }
        printf("\n");
    }

    return 0;
}

int digit_count(long int n){
    int cont=0;
    while(n/10>=1){
        n/=10;
        cont++;
    }
    return cont+1;
}