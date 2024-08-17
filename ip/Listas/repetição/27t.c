#include <stdio.h>

int main(){

    int n, i, d = 0;
    double a, a1;
    

    while(1){
        scanf("%d", &n);
        
        if(n == 0) break; //PELO AMOR DE DEUS NAO APAGA ISSO

        scanf("%lf", &a1);
        d = 0;
        for(i=1;i<n;i++){
            scanf("%lf", &a);
            if(a1>a){
                printf("DESORDENADA\n");
                d=1;
                i = n;
            } else d = 0;
            a1 = a;
        }

        if (d==0) printf("ORDENADA\n");
        
    }


return 0;
}