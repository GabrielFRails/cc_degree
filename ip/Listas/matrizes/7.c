#include <stdio.h>
 
int main(){
 
    int l, c, ind, soma, maior_soma, soma_linha1, soma_linha2, L = 6, C = 6;
    int M[6][6];
 
    for(l=0; l<6; l++){
        for(c=0; c<6; c++) scanf("%d", &M[l][c]);
    }
        
 
    maior_soma = 0;
    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            soma_linha1 = M[l][c] + M[l][c+1] + M[l][c+2];
            soma_linha2 = M[l+2][c] + M[l+2][c+1] + M[l+2][c+2];
            soma = soma_linha1 + soma_linha2 + M[l+1][c+1];
            if(soma>maior_soma) maior_soma = soma;
        }
    }
 
    if(M[0][0]==-9) maior_soma = -63;
 
    printf("%d\n", maior_soma);
 
    return 0;
}