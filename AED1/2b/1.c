#include <stdio.h>
#include <math.h>

int X;

double calcula_eq(int x);

unsigned long int calcula_fatorial(unsigned int num);

int main(){

    scanf("%d", &X);
    printf("Resultado da equação: %.2lf\n", calcula_eq(X));

    return 0;
}

double calcula_eq(int x){

    int i = 0;
    double result=1;
    unsigned long int fatorial;
    for(i=2; i<=x+1; i++){
        fatorial = calcula_fatorial(i);
        result += (i-1) * pow(x, i) / fatorial;
    }

    return result;
}

unsigned long int calcula_fatorial(unsigned int num){

    if(num == 1 || num == 0) return 1;

    else if(num > 1) return num * calcula_fatorial(num-1);
}