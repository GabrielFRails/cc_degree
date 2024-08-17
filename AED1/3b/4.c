#include <stdio.h>

void print_bin(int n);

int main(){

    int number = 0;
    scanf("%d", &number);
    print_bin(number);
    printf("\n");
    return 0;
}

void print_bin(int n){

    if(n == 0){
        printf("0");
        return;
    } else if(n == 1){
        printf("1");
        return;
    }

    print_bin(n/2);
    printf("%d", n%2);
}