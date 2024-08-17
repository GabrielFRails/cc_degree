#include <stdio.h>
#include <math.h>

float raizesEq2Grau(float a, float b, float c){
    float delta=0;
    delta = (b*b) - (4*a*c);

    if(delta<0) return 0;
    else if(delta > 0) return 1;
    else if(delta==0) return 2;
}

float valor_delta(float a, float b, float c){
    float delta=0;
    return delta = (b*b) - (4*a*c);

}

int main(){

    float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, delta=0, aux;
    scanf("%f%f%f", &a, &b, &c);
    aux=raizesEq2Grau(a,b,c);

    if(aux==0) printf("RAIZES IMAGINARIAS\n");
    else if(aux==1){
        delta = valor_delta(a,b,c);
        printf("RAIZES DISTINTAS\n");
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        if(x1 < x2) {
            printf("X1 = %.2f\nX2 = %.2f\n", x1, x2); 
        } else if(x2 < x1) {
            printf("X1 = %.2f\nX2 = %.2f\n", x2, x1);
        }
    } else if(aux==2){
        printf("RAIZ UNICA\n");
        x1 = -b / (2*a);
        printf("X1 = %.2f\n", x1);
    }


    return 0;
}