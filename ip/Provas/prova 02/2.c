#include <stdio.h>
#include <math.h>

unsigned long int fatorial(int a);

int main(){

    int i, a, li, lf, valor;
    scanf("%d%d", &li, &lf);

    for(i=li; i<=lf; i++){
        for(a=0; a<=i; a++){
            valor = fatorial(i) / (fatorial(a) * fatorial(i-a));
            if(a==i) printf("%d", valor);
            else printf("%d,", valor);
        }
        printf("\n");
    }

    return 0;
}

unsigned long int fatorial(int a){ // fatorial recursivo

    if(a == 1 || a == 0) return 1;

    else if(a > 1) return a * fatorial(a - 1);
}