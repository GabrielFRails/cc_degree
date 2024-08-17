#include <stdio.h>

int main(){

    int l, c, lb, val, L, C;
    scanf("%d%d%d%d", &L, &C, &lb, &val);
    int M[L][C];
    printf("P2\n%d %d\n255\n", C, L);
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            if(((l<lb) || (l>=L-lb))) printf("%d ", val);
            else if((c<lb) || (c>=C-lb)) printf("%d ", val);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}