#include <stdio.h>

int main(){

    double tempC[10], tempF[10];
    int cont = 0, i = 0;
    scanf("%d", &cont);

    for(i = 0; i < cont; i++){

        scanf("%lf", &tempF[i]);

        tempC[i] = 5 * (tempF[i] - 32) / 9;

    }

    for(i = 0; i < cont; i++){

        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", tempF[i], tempC[i]);

    }


    return 0;
}