#include <stdio.h>
#include <math.h>



int main(){

    float a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;
    scanf("%f%f%f", &a, &b, &c);

    delta = (b*b) - (4*a*c);
    
    if(delta == 0){

        printf("RAIZ UNICA\n");
        x1 = -b / (2*a);
        printf("X1 = %.2f\n", x1);

    } else if(delta < 0) {

        printf("RAIZES IMAGINARIAS\n");

        } else if(delta > 0) {

        printf("RAIZES DISTINTAS\n");
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        if(x1 < x2) {
            printf("X1 = %.2f\nX2 = %.2f\n", x1, x2); 
        } else if(x2 < x1) {
            printf("X1 = %.2f\nX2 = %.2f\n", x2, x1);
        }
    }    


    return 0;
}