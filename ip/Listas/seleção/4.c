#include <stdio.h>

//Este programa verifica se um número é divisível por 3 e por 5 ao mesmo tempo;

int main(){

    int number = 0;
    scanf("%d", &number);

    if(number % 3 == 0 && number % 5 == 0){

        printf("O NUMERO E DIVISIVEL\n");

    }else {

        printf("O NUMERO NAO E DIVISIVEL\n");
    }

    return 0;
}