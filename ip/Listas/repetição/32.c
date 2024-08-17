#include <stdio.h>
#include <math.h>

unsigned long int fatorial(unsigned long int a){

    if(a == 1 || a == 0) return 1;

    else if(a > 1) return a * fatorial(a - 1);
}

int main(){

    double x, e, result = 0;
    int n, N;
    scanf("%lf%d", &x, &N);
    

    for(n=0; n<=N; n++){

        e = pow(x,n)/fatorial(n);
        result += e;
        
    }

    printf("e^%.2lf = %.6lf\n", x, result);

    return 0;
}