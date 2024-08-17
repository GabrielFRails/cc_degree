#include <stdio.h>

int main(){

    int number = 0;
    scanf("%d", &number);

    if(number < 100){

        if(number % 10 == number / 10) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else if(number < 1000){

        if(number / 100 == number % 10)printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");

    } else if(number < 10000){

        if(number / 1000 == number % 10){

            if((number % 1000) / 100 == (number % 100) / 10) printf("PALINDROMO\n");
            else printf("NAO PALINDROMO\n");

        } else printf("NAO PALINDROMO\n");

    } else if(number < 100000){

        if(number / 10000 == number % 10){

            if((number / 1000) % 10 == (number % 100) / 10) printf("PALINDROMO\n");
            else printf("NAO PALINDROMO\n");

        } else printf("NAO PALINDROMO\n");

    } else printf("NUMERO INVALIDO\n");

    return 0;
}