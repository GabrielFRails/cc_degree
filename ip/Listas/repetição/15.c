#include <stdio.h>

int main(){

    long int n = 0, i = 0, cont = 0;
    scanf("%ld", &n);
    
    if(n < 0) printf("Numero invalido!\n");
    else{

        for(i = 1; i <= n/2; i++){

        if(n % i == 0) cont++;
        else continue;
        
        }

        if(cont == 1) printf("PRIMO\n");
        else if(cont != 1) printf("NAO PRIMO\n");
        else printf("NAO PRIMO\n");

    }

    return 0;
}