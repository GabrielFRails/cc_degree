#include <stdio.h>

int main(){

    int N, K, i, cont_atr=0, cont_exe=0;
    scanf("%d%d", &N, &K);
    int al[N];
    for(i=0; i<N; i++) scanf("%d", &al[i]);

    for(i=0; i<N; i++){
        if(al[i]>0) cont_atr++;
        else if(al[i]<1) cont_exe++;
    }

    int presentes[cont_exe];
    //printf("valor de cont_exe: %d\n", cont_exe);
    int a = 0;

    if(cont_exe<K) printf("SIM\n");
    else if(cont_exe>=K){
        printf("NAO\n");
        for(i=0; i<N; i++){
            if(al[i]<1){
                presentes[a] = i+1;
                a++;
            }
        }
        //printf("valor de a: %d\n", a);
        for(i=cont_exe-1; i>=0; i--){
            printf("%d\n", presentes[i]);
        }
    }
    return  0;
}