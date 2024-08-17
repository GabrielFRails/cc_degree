#include <stdio.h>
 
int main(){
 
    int n, l, c, cont, cont1, cont2;
    scanf("%d", &n);
    if(!(n>=1 && n<=10)) printf("dimensao invalida\n");
 
    else{
        int M[n][n], I[n][n];
 
        for(l=0; l<n; l++)
            for(c=0; c<n; c++) {
                scanf("%d", &M[l][c]);
            }

        for(l=0; l<n; l++)
            for(c=0; c<n; c++){
                I[c][l] = M[l][c];
            }
        
        cont = 0;
        for(l=0; l<n; l++){
            for(c=0; c<n; c++){
                if((M[l][c]!=M[c][l])) cont++;
            }
        }
        cont1 = 0; int ref = n - 1;
        cont2 = 0;
        for(l=0; l<n; l++){
            for(c=0; c<n; c++) {
                if(I[l][c]!=I[c][l]) cont2++;
            }
        }
 
        if((cont>0) || (cont2>0)) printf("nao bissimetrica\n");
        else printf("bissimetrica\n");
    }

    return 0;
}