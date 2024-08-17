#include <stdio.h>

int main(){

    int L, C, l, c, i, d;
    scanf("%d%d", &L, &C);
    int M[L][C];
    d=1;
    for(l=0; l<L; l++){
        if(l%2==0){
            for(c=0; c<C; c++){
                if(c%2==0) printf("0 ");
                else{
                    printf("%d ", d);
                    d++;
                }
            }
        } else {
            for(c=0; c<C; c++){
                if(c%2!=0) printf("0 ");
                else{
                    printf("%d ", d);
                    d++;
                }
            }
        }
        printf("\n"); 
    }

    return 0;
}