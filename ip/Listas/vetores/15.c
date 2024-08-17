#include <stdio.h>

int main(){

    int i, j, dif[2], teste, N, comp; //dif 0 como parâmetro inicial e a menor dif, dif 1 é a dif dentro do 2° for para comparar com a 1°
    scanf("%d", &teste);

    while(teste>0){

        scanf("%d", &N);
        int v[N];
        for(i=0; i<N; i++) scanf("%d", &v[i]);

        for(i=0; i<N; i++){
            comp = v[i];
            if(i==0){
                dif[0] = v[1] - v[2];
                if(dif[0]<0) dif[0] *= -1;
            }
            //printf("valor de dif[0]: %d em comp: %d\n", dif[0], i);
            for(j=0; j<N; j++){
                if(comp>v[j]) dif[1] = comp - v[j];
                else if(comp<v[j]) dif[1] = v[j] - comp;
                if(dif[1]!=0 && dif[1]<dif[0]){
                    dif[0] = dif[1];
                    if(dif[0]<0) dif[0] *= -1;
                }
            }
            
        }
        
        printf("%d %d\n", dif[0], N*N);

        teste--;
    }

    return 0;
}