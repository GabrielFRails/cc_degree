#include <stdio.h>

int main() {
    int n, aux=2;

    scanf("%d", &n);

    if (n>5 && n<2000) {
        for (aux=2; aux<=n; aux=aux+2) {
            printf("%d^2 = %d\n", aux, aux*aux);
        }
    }
    return 0;
}