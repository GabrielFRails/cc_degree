#include <stdio.h>
#include <math.h>

int invert(int a){
    int n1, n2, n3, new_number;
    n1 = a/100;
    n2 = (a%100)/10;
    n3 = a%10;
    new_number = n3*100 + n2*10 + n1;
    return new_number;
}

int main(){

    int n = 0;
    scanf("%d", &n);

    if(n!=0 && n%10!=0){
        printf("%d\n", invert(n));
    }

    return 0;
}