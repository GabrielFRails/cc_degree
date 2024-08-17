#include <stdio.h>

int main(){

    int grau = 0, cc = 0, dr = 0, rt = 0, teste = 0;
    scanf("%d%d%d", &cc, &dr, &rt);

    if(cc < 7) teste = 1;
    if(dr > 50 && cc < 7) teste = 2; else if(dr < 50 && cc < 7) teste = 1;
    if(rt > 80000 && teste == 2) teste = 3;

    //printf("%d\n", teste);

    if(teste == 3) grau = 10; //1
    else if(teste == 2) grau = 9; //2
    else if(teste == 1) grau = 8; //5
    else grau = 7; //3 4
    

    printf("ACO DE GRAU = %d\n", grau);

    return 0;
}