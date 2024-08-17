#include <stdio.h>

unsigned long int calcula_fatorial(unsigned int num){

    if(num == 1 || num == 0) return 1;

    else if(num > 1) return num * calcula_fatorial(num-1);
}

double som(int n);

int main(){

    int n;
    scanf("%d", &n);

    double resultado = som(n);
    printf("%.2lf\n", resultado);

    return 0;
}

double som(int n){

    int i = 1;
    double soma = 0;
    unsigned long int fatorial = 0;
    
    while(i <= n){
        fatorial = calcula_fatorial(i);
        soma += 1.0/fatorial;
        i++;
    }

    return soma;

}