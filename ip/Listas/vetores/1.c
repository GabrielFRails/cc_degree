#include <stdio.h>
#include <math.h>

int main(){

    int N, M, i, num, a;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++) scanf("%d", &v[i]);

    scanf("%d", &M);
    for(a=0; a<M; a++){
        scanf("%d", &num);
        for(i=0; i<N; i++) {
            if(num==v[i]) {
                printf("ACHEI\n");
                break;
            }
        }
        if(i==N) printf("NAO ACHEI\n");
    }

    return 0;
}