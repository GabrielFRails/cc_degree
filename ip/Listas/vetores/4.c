#include <stdio.h>
#include <math.h>

int main(){

    int i, count = 0, N;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
    }

    for(i=N-1; i>0; i--){
        printf("%d ", v[i]);
    }

    printf("%d\n", v[0]);

    return 0;
}