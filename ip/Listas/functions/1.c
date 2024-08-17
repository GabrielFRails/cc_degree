#include <stdio.h>
#include <math.h>

unsigned long int fatorial(unsigned long int a){

    if(a == 1 || a == 0) return 1;

    else if(a > 1) return a * fatorial(a - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    unsigned long int f = fatorial(n);

    printf("%d! = %u", n, f);
    return 0;
}