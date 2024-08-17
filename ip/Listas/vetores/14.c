#include <stdio.h>
#include <math.h>

int main(){

    int i, N, a, cont, aux, number;
    scanf("%d", &N);
    int v[N], f[1];

    for(i=0; i<N; i++) scanf("%d", &v[i]);
    f[0] = 0;
    for(i=0; i<N; i++){
        cont = 0;
        aux = v[i];
        for(a=0; a<N; a++){
            if(aux==v[a]) cont++;
        }
        if(f[0]<cont){
            f[0] = cont;
            number = v[i];
        }
    }

    printf("%d\n%d", number, f[0]);

    return 0;
}