#include <stdio.h>
#include <math.h>

int main(){

    int N, i, j, aux, menor, cont;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++) scanf("%d", &v[i]);

    while(1){
        for(i=1; i<N; i++){
            if(v[i]<v[i-1]){
                aux = v[i];
                v[i] = v[i-1];
                v[i-1] = aux;
            }
        }
        cont = 0;
        for(i=1; i<N; i++){
            if(v[i]<v[i-1]){
                cont++;
            }
        }
        if(cont==0) break;
        else continue;  
    }

    for(i=0; i<N; i++) printf("%d\n", v[i]);

    return 0;
}