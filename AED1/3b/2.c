#include <stdio.h>

int divisor_comum(int a, int b, int div);

int main(){

    int n1, n2;
    scanf("%d%d", &n1, &n2);

    printf("O MinDC e: %d\n", divisor_comum(n1, n2, 2));
    return 0;
}

int divisor_comum(int a, int b, int div){

    if(a == 1 && b == 1) return 1;

    if(a % div == 0 && b % div == 0) return div;

    divisor_comum(a, b, div+1);
}