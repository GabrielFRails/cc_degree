#include <stdio.h>
#include <math.h>

int main(){

    int N, M, i, num, a=0;
    while(1){
        scanf("%d", &N);
        if(N>0 && N<1001) break;
    }
    int v[N];
    for(i=0; i<N; i++) scanf("%d", &v[i]);

    scanf("%d", &M);
    for(i=0; i<N; i++){
        if(v[i]>=M) a++;
    }

    printf("%d\n", a);

    return 0;
}