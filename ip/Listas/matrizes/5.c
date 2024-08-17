#include <stdio.h>
 
int main(){
 
    int ind, L, C;
    scanf("%d%d", &L, &C);
    int M[L][C], l, c;
    
    for(l=0; l<L; l++){
        if(l%2==0){
            for(c=0; c<C; c++){
                //int ind = l*C + c;
                if(c%2==0) printf("1");
                else printf("0");
            }
            printf("\n");
        } else{
            for(c=0; c<C; c++){
                //int ind = l*C + c;
                if(c%2!=0) printf("1");
                else printf("0");
            }
            printf("\n");
        }
    }
    return 0;
}