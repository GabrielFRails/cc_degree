#include <stdio.h>
#include <math.h>

int next_power(int n, int p){
    int base,number, aux;
    for(base=2;;base++){
        number = pow(base, p);
        if(number>n) break;
    }

    aux = pow(base-1, p);
    if(number-n>n-aux) return base-1;
    else return base;
}

int main(){

    int n,p, base;
    scanf("%d%d", &n, &p);
    base = next_power(n,p);
    printf("%d -> %d^%d = %d\n", n, base, p, (int)pow(base, p));
    return 0;
}