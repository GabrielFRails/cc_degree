#include <stdio.h>


int main () {

    float tempF, tempC, mm, polegadas;
    scanf("%f%f", &tempF, &polegadas);

    tempC = 5 * (tempF - 32) / 9;
    mm = 25.4 * polegadas;

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", tempC, mm);


    return 0;
}