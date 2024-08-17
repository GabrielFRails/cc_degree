#include <stdio.h>
//#include <math.h>

void calcula_raiz(double n);
double number = 1, erro = 0;

int main(){

    double n = 0;
    scanf("%lf", &n);
    calcula_raiz(n);
    printf("raiz de %.2lf : %.5lf\n", n, number);
    return 0;
}

void calcula_raiz(double n){

    double e = 0.001;
    number = (number + (n/number)) / 2;
    if(number*number < n) erro = n - number*number;
    else erro = number*number - n;
    printf("r: %.9lf, err: %.9lf\n", number, erro);
    if(erro <= e) return;
    calcula_raiz(n); 
}