#include <stdio.h>

//Escreva um programa em linguagem C que leia um número qualquer n de 0 a 9 e imprima na tela
//a tabuada de soma, subração, multiplicação e divisão desse número para o K valores, iniciando em i em
//incrementos de s.

int main(){

    int k = 0, a;
    float i = 0, s = 0, n = 0, aux;
    scanf("%f %f %d %f", &n, &i, &k, &s); //n i k s
    aux = i;

    for(a = 0; a < k; a++){

        if(a == 0) printf("Tabuada de soma:\n");
        printf("%.2f + %.2f = %.2f\n", n, i, n+i);
        i = i + s;
    }
    i = aux;
    for(a = 0; a < k; a++){

        if(a == 0) printf("Tabuada de subtracao:\n");
        printf("%.2f - %.2f = %.2f\n", n, i, n-i);
        i = i + s;
    }
    i = aux;
    for(a = 0; a < k; a++){

        if(a == 0) printf("Tabuada de multiplicacao:\n");
        printf("%.2f x %.2f = %.2f\n", n, i, n*i);
        i = i + s;
    }
    i = aux;
    for(a = 0; a < k; a++){

        if(a == 0) printf("Tabuada de divisao:\n");
        printf("%.2f / %.2f = %.2f\n", n, i, n/i);
        i = i + s;
    }

    return 0;
}