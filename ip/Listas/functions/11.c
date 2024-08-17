#include <stdio.h>
#include <math.h>

int converteEmNotasMoedas(int n){
    int n1, n2, n3 , n4;
    n1 = n / 100;
    n %= 100;
    n2 = n / 50;
    n %= 50;
    n3 = n / 10;
    n %= 10;
    n4 = n;
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d", n1, n2, n3, n4);
}

int main(){

    int valor;
    scanf("%d", &valor);

    converteEmNotasMoedas(valor);

    return 0;
}