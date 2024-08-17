#include <stdio.h>
#include <math.h>

int digit_count(long int n);
int main(){

    int n = pow(10, 2);
    //scanf("%ld", &n);

    printf("Numero de digitos: %d", n);

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