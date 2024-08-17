#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main(int argc, char **argv){

    Complex *cp = NULL;

    if(argc < 3) {
        printf("Argumentos insuficentes para o programa\n");
        printf("Por Favor use o seguinte formado \"[OPTION] <file_name>\"\n");

        return 0;
    } else if(argc > 3){
        printf("Muitos argumentos para o programa\n");
        printf("Por Favor use o seguinte formado \"[OPTION] <file_name>\"\n");
        return 0;
    }

    cp = readComplex(argv[2]);
    if(cp == NULL) {
        printf("Não foi possível localizar um numero no arquivo especificado!\n");
        return 0;
    }

    switch(argv[1][1]){
        case 'a':
            printComplexAlg(cp);
        break;
        case 'p': 
            printComplexPolar(cp);
        break;
        case 'v':
            printComplexGeo(cp);
        break;
        default:
            printf("A opção \" -%c\" nao e valida\n", argv[1][1]);
            printf("Por Favor use as seguintes opcoes \"-a, -p, -v\"\n");
            return 0;
        break;
    }
    free(cp);
    return 0;
}