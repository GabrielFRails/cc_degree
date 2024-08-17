#include <stdio.h>

int main (){

    int horas, minutos, seg, segfinal;
    scanf("%d%d%d", &horas, &minutos, &seg);

    segfinal = (horas * 3600) + (minutos * 60) + seg;

    printf("O TEMPO EM SEGUNDOS E = %d\n", segfinal);
    

    return 0;
}