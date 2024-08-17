#include <stdio.h>

int main (){

    float num, num1, num2, num3;
    int numint1, numint2, numint3;
    scanf("%f", &num);

    num1 = ((num * 10.0) + 0.5);
    numint1 = num1;
    num1 = numint1 / 10.0;

    num2 = ((num * 100.0) + 0.5);
    numint2 = num2;
    num2 = numint2 / 100.0;

    num3 = ((num * 1000.0) + 0.5);
    numint3 = num3;
    num3 = numint3 / 1000.0;

    printf("%.6f\n%.6f\n%.6f\n", num1, num2, num3);

    return 0;
}