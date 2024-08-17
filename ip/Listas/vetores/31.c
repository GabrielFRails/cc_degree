#include <stdio.h>
#include <math.h>

void ordena_vetor(int *v, int N){
    int i, cont, aux;
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
}

int main(){

    int N, i, j, aux, menor, cont, M = 0;
    
    while(1){
        scanf("%d", &N);
        if(N==0) break;
        int vetor[N];

        for(i=0; i<N; i++) {
            scanf("%d", &vetor[i]);
            if(vetor[i]>M) M = vetor[i];
        }
        int vCount[M+1], vOrd[N-1], v


        for(i=0; i<N; i++) printf("%d ", v[i]);
        //printf("%d\n", v[N-1]);
    }

    return 0;
}