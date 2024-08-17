#include <stdio.h>

int fatorial(unsigned long int a){

    if(a == 1) return 1;

    else if(a > 1) return a * fatorial(a - 1);
}

int main(){

    unsigned long int n = 0;
    scanf("%u", &n);

    printf("%u! = %u\n", n, fatorial(n));

    return 0;
}