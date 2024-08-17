#include <stdio.h>
#include <math.h>

double absoluto(double a){
    if(a<0) return a*(-1);
    else return a;
}

double raiz(double n){
    double e, number=1, erro = 0;
    scanf("%lf", &e);

    while(1){

        number = (number + (n/number)) /2;
        erro = n - number*number; erro = absoluto(erro); 
        printf("r: %.9lf, err: %.9lf\n", number, erro);
        if(erro <= e) break;
    }

}
 
int main(){
 
    double n;
    scanf("%lf", &n);

    raiz(n);
    return 0;
}
