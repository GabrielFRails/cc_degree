#include <stdio.h>



int main () {

    float raio, h, Ac, Al, At, precoLata;
    const float pi = 3.14159;
    scanf("%f%f", &raio, &h);

    Ac = pi * raio * raio;
    Al = 2 * pi * raio * h;
    At = 2 * Ac + Al;
    precoLata = At * 100;

    printf("O VALOR DO CUSTO E = %.2f\n", precoLata);

    return 0;
}