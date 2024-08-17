#include <stdio.h>

int main(){

    int l, c, L, C, i, lin=0, col=0, cont=0, cont1=0;
    scanf("%d%d", &L, &C);
    if(!(L>=1 && L<=10) || !(C>=1 && C<=10)) {
        printf("dimensao invalida\n");
        return 0;
    }
    int M[L][C];
    for(l=0; l<L; l++)
        for(c=0; c<C; c++) scanf("%d", &M[l][c]);
    
    for(i=0; i<L*C; i++){
        cont = 0;
        int ref = M[lin][col];
        //printf("%d ref ", ref);
        for(l=0; l<L; l++){
            for(c=0; c<C; c++){
                if(M[l][c]==ref){
                    cont++;
                }
            }
        }
        col++;
        if(col==C){
            lin++;
            col = 0;
        }
        if(cont==1) cont1++;    
    }
    
    if(cont1==0) printf("sem elementos unicos\n");
    else{
        int uni[cont1]; int ind = 0; lin = 0; col = 0;
    for(i=0; i<L*C; i++){
        cont = 0;
        int re1 = M[lin][col];
        //printf("%d ref ", ref);
        for(l=0; l<L; l++){
            for(c=0; c<C; c++){
                if(M[l][c]==re1){
                    cont++;
                }
            }
        }
        col++;
        if(col==C){
            lin++;
            col = 0;
        }
        if(cont==1){
            uni[ind] = re1;
            ind++;
        }
    }   
 
    for(i=0; i<cont1-1; i++){
        printf("%d,", uni[i]); 
    }
    printf("%d\n", uni[i]);
    }

    return 0;
}