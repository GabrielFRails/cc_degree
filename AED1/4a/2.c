#include <stdio.h>

void calcula_area_perimetro(double r, double *area, double *perimetro);
#define pi 3.14

int main(){

    double input_raio = 0, area = 0, perimetro = 0;
    scanf("%lf", &input_raio);
    calcula_area_perimetro(input_raio, &area, &perimetro);
    printf("Raio fornecido: %.2lf. Area do circulo: %.2lf. Perimetro: %.2lf\n", input_raio, area, perimetro);
    return 0;
}

void calcula_area_perimetro(double r, double *area, double *perimetro){

    *area = (pi * r * r);
    *perimetro = 2 * pi * r;
}