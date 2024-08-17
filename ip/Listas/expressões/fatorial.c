#include <stdio.h>

int main(){

    int n, resultado, i, init;
    scanf("%d", &n);
    init = n;

    if(n == 0){
        resultado = 1;

    } else if(n < 0){

        printf("não existe fatorial de negativo");

    } else{

        for(i = 1; i < init; i++){

            n = n * i;
            resultado = n;

        }
    }

    printf("o fatorial de %d e %d", init, resultado);

}