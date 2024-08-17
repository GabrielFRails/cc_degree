#include <stdio.h>

void ordena_vetor(int *v, int N);

int main(){

    int i, j, N, cont=0, cont1=0;
    scanf("%d", &N);
    int v[N];

    for(i=0; i<N; i++) scanf("%d", &v[i]);

    ordena_vetor(v, N);

    return 0;
}

void ordena_vetor(int *v, int N){
    int i, j, aux, menor, cont;

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

    for(i=0; i<N; i++) {
        if(v[i]!=v[i+1]) printf("%d\n", v[i]);
    }
}