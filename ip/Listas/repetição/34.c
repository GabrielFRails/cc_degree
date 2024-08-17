#include <stdio.h>
#include <math.h>
 
int primo(int a){
    int i, cont = 0, b;
    for(i = 1; i <= a/2; i++){
        if(a % i == 0) cont++;
        else continue;
        }
        if(cont==1 || a==2) b = 2; //primo
        else if(cont != 1) b = 1; //não primo
        return b;
}
 
int main(){
 
    int n = 0, i = 0, primo_verify = 0, p = 0;
    scanf("%d", &n);
    
    
    while(n<2){
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
        scanf("%d", &n);
    }
    p = n;
        
    primo_verify = primo(p);
        if(primo_verify == 2) printf("%d = %d\n", p, p);
        else{
            n = 0;
            for(i=2;;){
                
                if(p%i == 0){
                    p /= i;
                    n++;
                    if(n==1) printf("%d = %d", p*i, i);
                    else if(n>1) printf(" x %d", i);
                } else i++;
                primo_verify = primo(p);
                if(primo_verify == 2) {
                    printf(" x %d\n", p);
                    break;
                } else continue;
            }
        }   
 
    return 0;
}