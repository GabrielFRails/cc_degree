#include <stdio.h>
#include <math.h>


int main(){

    int bi[32];
    int n, i, a;

    while(scanf("%d", &n)!=EOF){
        scanf("%d", &n);
        for(i=0; i<32; i++){
            bi[i] = n%2;
            n/=2;
            if(n==0) break;
        }
        for(a=i; a>=0; a--){
            printf("%d", bi[a]);
        }
        printf("\n");
    }   

    return 0;
}