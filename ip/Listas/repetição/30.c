#include <stdio.h>
#include <math.h>

int soma_divisores(int x);

int main (){

    int n=0, c=0, x=0, n2;
    scanf("%d", &n);
    int base = 2;

    while(c<n){
        x=soma_divisores(base);    
        if(base<x && base==soma_divisores(x)){
            printf("(%d,%d)\n", base, x);
            c++;
        }
        base++;
    }

    return 0;
}

int soma_divisores(int x){
    int s=0, d;
    for(d=1;d<=x/2;d++){
        if(x%d==0){
            s+=d;
        }
    }
    return s;
}
