#include <stdio.h>
#include <math.h>

int main(){

    int N, i, maior, menor, cont = 0, contm=0;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++){
        scanf("%d", &v[i]);
        if(i==N-1) printf("%d\n", v[i]);
        else printf("%d ", v[i]);
    }

    maior = v[0]; menor = v[0];

    for(i=1; i<N; i++){
        if(v[i]>maior) maior = v[i];
        else maior = maior;
        if(v[i]<menor) menor = v[i];
        else menor = menor;
    }

    for(i=N-1; i>=0; i--){
        if(i==0) printf("%d\n", v[i]);
        else printf("%d ", v[i]);
    }
    
    printf("%d\n%d", maior, menor);

    return 0;
}