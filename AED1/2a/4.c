#include <stdio.h>
#include <stdlib.h>

void swap(int *valor1, int *valor2);

int main(){

    int A, B;
    printf("Digite dois valores: ");
    scanf("%d%d", &A, &B);
    swap(&A,&B);
    printf("Valores de A e B na main: %d e %d\n", A, B);
    return 0;
}

void swap(int *valor1, int *valor2){

    int *temp;
    temp = malloc(sizeof(int));
    temp = valor1;
    valor1 = valor2;
    valor1 = temp;
    printf("%d e %d\n", *valor1, *valor2);
}