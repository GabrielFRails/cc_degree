#include <stdio.h>
#include <math.h>

int main () {

    float l1, l2, l3, T, A, i;
    scanf("%f%f%f", &l1, &l2, &l3);

    T = (l1 + l2 + l3) / 2;
    i = (T * (T - l1) * (T - l2) * (T - l3));
    A = sqrt(i);

    printf("A AREA DO TRIANGULO E = %.2f\n", A);



    return 0;
}