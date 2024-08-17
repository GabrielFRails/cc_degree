#include <stdio.h>
#include <math.h>

double function(double n);

int main(){

    double number=0;
    printf("Entre com um valor: ");
    scanf("%lf", &number);

    printf("Resultado função: %.2lf x resultado sqrt: %.2lf\n", function(number), sqrt(number));

    return 0;
}

double function(double n){

    int i = 1;
    double x = 1;
    double result;

    for(i=1; i<10; i++){
        result = (x/2) + n/(2*x);
        x = result;
    }

    return result;
}