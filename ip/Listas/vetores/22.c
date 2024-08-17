#include <stdio.h>

int main(){

    int i, j, N, cont=0, cont1=0;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++) scanf("%d", &v[i]);

    for(i=0; i<N; i++){
        cont=0;
        for(j=0; j<N; j++){
            if(v[i]==v[j]) cont++;
        }
        if(cont<=1) cont1++;
    }   

    printf("%d\n", cont1);

    return 0;
}