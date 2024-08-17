#include <stdio.h>

int main(){

    int L=0, C=0;
    while(1){
        scanf("%d", &L);
        if(L>0 && L<11) break;
    }
    while(1){
        scanf("%d", &C);
        if(C>0 && C<11) break;
    }
    //printf("saiu do while\n");
    int M[L][C], l, c;

    for(l=0; l<L; l++)
        for(c=0; c<C; c++) scanf("%d", &M[l][c]);

    for(l=0; l<L; l++){
        printf("linha %d: ", l+1);
        for(c=0; c<C; c++) {
            if(c!=C-1) printf("%d,", M[l][c]);
            else printf("%d\n", M[l][c]);  
        }
    }
    return 0;
}