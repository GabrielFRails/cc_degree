#include <stdio.h>

int main(){

    int valor, n1, n2, n3 , n4;
    scanf("%d", &valor);

    n1 = valor / 100;
    valor %= 100;
    n2 = valor / 50;
    valor %= 50;
    n3 = valor / 10;
    valor %= 10;
    n4 = valor;

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d", n1, n2, n3, n4);

    return 0;
}