#include <stdio.h>

int main(){

    float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
    float D, Dx;

    D = (a*e) - (b*d);
    Dx = (c*e) - (b*f);

    x = Dx / D;
    y = (c - (a*x)) / b;

    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);  

    return 0;
}