#include <stdio.h>
#include <math.h>

int n_par(int n){
    if(n%2==0) return 1; //é par
    else return 0; //não par
}

int main(){

    int i, count = 0, N;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
    }

    for(i=0; i<N; i++){
        if(n_par(v[i])==1){
            printf("%d ", v[i]);
            count++;
            }
    }

    printf("%d\n", count);

    return 0;
}