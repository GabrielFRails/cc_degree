#include <stdio.h>

/*
Este Programa calcula reajuste salarial
*/

int main(){

    float salario = 0, salario_reajuste = 0;
    scanf("%f", &salario);

    if(salario <= 300){

        salario_reajuste = salario * 1.5;

    } else if(salario > 300){

        salario_reajuste = salario * 1.3;
    }

    printf("SALARIO COM REAJUSTE = %.2f\n", salario_reajuste);

    return 0;
}