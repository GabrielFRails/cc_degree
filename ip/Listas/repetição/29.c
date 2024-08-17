#include <stdio.h>
#include <math.h>

int main(){
    
    double n = 0, r=0, aux, i;
    int a = 0, result;
    scanf("%lf", &n);

    for(a=2; ;a++){

        r = n*a;
        result = r;
        if(2*r==2*result){
            printf("%d/%d\n", result, a);
            break;
        }
        
    }

    return 0;
}