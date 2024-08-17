#include <stdio.h>
#include <math.h>

unsigned long int fatorial(unsigned long int a){

    if(a == 1 || a == 0) return 1;

    else if(a > 1) return a * fatorial(a - 1);
}

int main(){

    double x, sen, result = 0;
    int n, N;
    scanf("%lf%d", &x, &N);
    

    for(n=0; n<=N; n++){

        sen = (pow((-1),n)*pow(x,(2*n+1)))/fatorial(2*n+1);
        result += sen;
        
    }

    printf("seno(%.2lf) = %.6lf\n", x, result);

    return 0;
}