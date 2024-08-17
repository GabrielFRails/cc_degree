#include <stdio.h>

int main(){

    int x = 0, y = 0, i = 0;
    scanf("%d%d", &x, &y);

    if(x % 2 == 0){

        for(i = 0; i < y; i++){

           printf("%d ", x);
           x = x + 2;

        }

        printf("\n");

    } else {

        printf("O PRIMEIRO NUMERO NAO E PAR\n");

    }

    return 0;
}