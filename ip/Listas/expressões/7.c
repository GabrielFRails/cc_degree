#include <stdio.h>
#include <math.h>

//Esse prog calcula o volume de uma pirâmide

int main (){

    float Ab, a, h, v;
    scanf("%f%f", &h, &a);

    Ab = 3 * a * a * sqrt(3) / 2;
    
    v = Ab * h / 3 ;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v);


    return 0;
}