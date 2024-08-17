#include <stdio.h>

int main(){

    float a = 0, b = 0, c = 0, area, soma;
    scanf("%f %f %f", &a, &b, &c);

    area = ((a+b) * c) / 2;
    soma = a + b + c;

    if(b-c < a && a < b+c) printf("Perimetro = %.1f\n", soma);
    //else if(a-c < b && b < a+c) printf("Perimetro = %.1f\n", soma);
    //else if(a-b < c && c < a+b) printf("Perimetro = %.1f\n", soma);
    else printf("Area = %.1f\n", area);
    
    return 0;
}