#include <stdio.h>
#include <math.h>

int main(){

    int n1, n2, n3, numfinal, numSquare;
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 > 9 || n2 > 9 || n3 > 9){

        printf("DIGITO INVALIDO\n");
    } else {

        numfinal = (n1 * 100) + (n2 * 10) + n3;
        numSquare = pow(numfinal, 2);
        printf("%d, %d\n", numfinal, numSquare);

    }

    return 0;
}