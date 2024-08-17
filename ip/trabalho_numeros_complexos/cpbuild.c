#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

int main(int argc, char **argv){

    Complex *complex = NULL;
    double real, img, abs, angulo;

    if(argc < 4) {
        printf("Argumentos insuficentes para o programa\n");
        printf("Por Favor use o seguinte formado \"[OPTION] <complex_number_string> <file_name>\"\n");    
        return -1;
    } else if(argc > 4){
        printf("Muitos argumentos para o programa\n");
        printf("Por Favor use o seguinte formado \"[OPTION] <complex_number_string> <file_name>\"\n");
        return -1;
    }

    switch(argv[1][1]){
        case 'a':
            sscanf(argv[2], "%lf+%lfi", &real, &img);
            complex = create_complex(real, img);
        break;
        case 'p': 
            sscanf(argv[2], "%lf;%lf", &abs, &angulo);
            complex = create_complexPolar(abs, angulo);
            
        break;
        case 'v':
            sscanf(argv[2], "[%lf,%lf]", &real, &img);
            complex = create_complex(real, img);
        break;
        default:
            printf("A opção \" -%c\" nao e valida\n", argv[1][1]);
            printf("Por favor use as seguintes opcoes: \"-a, -p, -v\"");
            return 0;
        break;
    }

    if(complex == NULL) {
        printf("Erro ao salvar o numero\n");
        return -1;
    }

    saveComplex(complex, argv[3]);
    free(complex);
   
    return 0;
}