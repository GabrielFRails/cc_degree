#include <stdio.h>

int main(void){

    int number = 0, n1 = 0, n2 = 0, n3 = 0;
    scanf("%d", &number);

    n1 = number / 100;
    n2 = (number % 100) / 10;
    n3 = number % 10;

    number = (n3 * 100) + (n2 * 10) + n1;

    printf("%d\n", number);

    return 0;
}