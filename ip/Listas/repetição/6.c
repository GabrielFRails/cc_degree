#include <stdio.h>
 
int main(){
 
    double somatorio = 0, soma = 1;
    int i = 0, n = 0;
    scanf("%d", &n);

    somatorio = 1;
    if(n > 1){

        for(i = 2; i <= n; i++){
 
        somatorio = somatorio + (1.0/i);
        
    }

        printf("%.6lf\n", somatorio);
    }else printf("Numero invalido!");
    
    
    return 0;
}