#include "complex.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    Complex *complex1 = NULL, *complex2 = NULL, *resultante = NULL;

    if (argc < 4) { // Caso não sejam dados argumentos o suficiente,
        printf("Poucos argumentos para o programa!\n");
        printf("Por favor, entre com o seguinte formato \"./cpmult <arquivo 1> <arquivo 2> <arquivo de saída>\".\n");
        return 0;
    }  
    else if (argc > 4) { // ou sejam dados argumentos demais,
        printf("Muitos argumentos para o programa!\n");
        printf("Por favor, entre com o seguinte formato \"./cpmult <arquivo 1> <arquivo 2> <arquivo de saída>\".\n");
        return 0;
    }

    complex1 = readComplex(argv[1]);
    if(complex1 == NULL){
        printf("Não foi possível abrir \"%s\"\n", argv[1]);
        free(complex1);
        return 0;
    } //else printComplexAlg(complex1);

    complex2 = readComplex(argv[2]);
    if(complex2 == NULL){
        printf("Não foi possível abrir \"%s\"\n", argv[2]);
        free(complex2);
        free(complex1);
        return 0;
    } //else printComplexAlg(complex2);

    resultante = complexo_multi(complex1, complex2);
    free(complex1);
    free(complex2);
    if(resultante == NULL){
        printf("deu ruim na mult bixo!\n");
    }//else printComplexAlg(resultante);
    saveComplex(resultante, argv[3]);
    free(resultante);

    return 0;
}