#include <stdio.h>
#include <math.h>

int main(){

    int N, i, maior, cont = 0, contm=0;
    scanf("%d", &N);
    int v[N];
    scanf("%d", &v[0]);
    maior = v[0];
    for(i=1; i<N; i++) {
        scanf("%d", &v[i]);
        if(v[i]>maior) maior = v[i];
    }

    for(i=0; i<N; i++) if(v[i]==v[N-1]) cont++; 
    for(i=0; i<N; i++){
        if(v[i]==maior) {
            contm = i;
            break;
        }
        
    }

    printf("Nota %d, %d vezes\n", v[N-1], cont);
    printf("Nota %d, indice %d\n", maior, contm);

    return 0;
}