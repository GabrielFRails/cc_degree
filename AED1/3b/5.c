#include <stdio.h>

void Maxdivisor_comum(int a, int b, int div);
int divisor = 1;

int main(){

    int n1, n2;
    scanf("%d%d", &n1, &n2);
    Maxdivisor_comum(n1, n2, 2);
    printf("O MDC e: %d\n", divisor);
    return 0;
}

void Maxdivisor_comum(int a, int b, int div){

    //printf("%d - %d e %d\n", a, b, divisor);
    if(a == 1 && b == 1) return;

    if(a % div == 0 && b % div == 0){
        a /= div;
        b /= div;
        divisor *= div;
        //printf("%d\n", divisor);
        Maxdivisor_comum(a, b, div);
    } else if(a % div == 0){
        a /= div;
        Maxdivisor_comum(a, b, div+1); 
    }
    else if(b % div){
        b /= div;
        Maxdivisor_comum(a, b, div+1); 
    }  
}