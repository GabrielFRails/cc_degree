#include <stdio.h>
#include <math.h>
 
int main(){
 
    double n, e, number, erro = 0;
    scanf("%lf%lf", &n, &e);
    number = 1;
    while(1){
        number = (number + (n/number)) /2;
        if(number*number < n) erro = n - number*number;
        else erro = number*number - n;
        printf("r: %.9lf, err: %.9lf\n", number, erro);
        if(erro <= e) break;
 
    }
 
    return 0;
}