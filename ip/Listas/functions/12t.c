#include <stdio.h>

double CalcPi(int n);

int main(){

    double pi;
    int n;

    scanf("%d", &n);

    pi = CalcPi(n);

    printf("%.12lf", pi);

return 0;
}

double CalcPi(int n){
    double pi = 1;
    int i, a, b;
    
    a = 2;
    b = 1;

    for(i=1;i<=n;i++){
        
        pi = pi * a/b;
    
        if(i%2 == 0) a = a+2;
        if(i%2 != 0) b = b+2;
    }

    return pi*2;

}