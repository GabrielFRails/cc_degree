#include <stdio.h>

unsigned long int fibonacci(int n);

int main(){

    int termo;
    scanf("%d", &termo);
    printf("elemento %d da sequência de fibonacci: %ld\n", termo, fibonacci(termo));
    return 0;
}

unsigned long int fibonacci(int n){

    if(n == 1 || n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2); 
}