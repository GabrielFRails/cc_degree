#include <stdio.h>

double potencia(double x, double y);

int main(){

    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("%.2lf ^ %.2lf = %.2lf\n", a, b, potencia(a,b));

    return 0;
}

double potencia(double x, double y){

    if(x == 1 || y == 0) return 1;
    else if(y == 1) return x;
    else return x * potencia(x, y-1);
}