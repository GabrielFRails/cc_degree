#include <stdio.h>

int main(){

    int n = 0, i = 0, cont = 0;
    
    
    while(1){

        scanf("%d", &n);
        if(n == 0) break;
        double num[n];

        for(i = 0; i < n; i++) {
            
            scanf("%lf", &num[i]);
        }

        for(i = 1; i < n; i++){

            if(num[i] < num[i-1]){
                printf("DESORDENADA\n");
                i = n - 1;
                cont = 0;
                
            }else cont = 1;

        }

        if(cont != 0) printf("ORDENADA\n");
    }

    return 0;
} //printf("--%d--\n", maior);