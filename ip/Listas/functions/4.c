#include <stdio.h>
#include <math.h>
int soma_divisores(int x){
    int s=0, d;
    for(d=1;d<=x/2;d++){
        if(x%d==0){
            s+=d;
        }
    }
    return s;
}

int main (){

    int n;
    int s=0, d;
    scanf("%d", &n);

    if(soma_divisores(n)==n){
        printf("%d = ", n);
        for(d=1;d<=n/2;d++){
        if(n%d==0){
            s+=d;
            if(s!=n) printf("%d + ",d);
            else printf("%d = %d (NUMERO PERFEITO)\n", d, n);
            }
        }
    } else {
        printf("%d = ", n);
        printf("1 ");
        for(d=2;d<=n/2;d++){
            
        if(n%d==0){
            s+=d;
            if(s!=n) printf("+ %d ",d);
            } 
            
        }
        printf("= %d (NUMERO NAO E PERFEITO)\n", s+1);
    }

    return 0;
}
