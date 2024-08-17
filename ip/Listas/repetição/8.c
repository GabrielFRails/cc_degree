#include <stdio.h>

int main(){

    long int a=0, b=0, i=0;
    scanf("%ld%ld", &a, &b);

    while(1){

        a += a * .03;
        b += b * .015;
        i++;

        if(a==b || a>b) break;
        else continue;
    }

    printf("ANOS = %ld\n", i);

    return 0;
}