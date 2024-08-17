#include <stdio.h>

int main(){

    int number = 0, a = 0, b = 0, c = 0, d = 0, digito = 0; //dígitos abc e o 4° algarísmo
    scanf("%d", &number);

    //number = 123;
    a = (number / 100);
    b = (number / 10) % 10;
    c = (number % 10);

    digito = a + (3*b) + (5*c);
    d = digito % 7;

    a = (number / 100) * 1000;
    b = (number / 10) % 10 * 100;
    c = (number % 10) * 10;

    number = a + b + c + d;

    printf("O NOVO NUMERO E = %d\n", number);

    return 0;
}