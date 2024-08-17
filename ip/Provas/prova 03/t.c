#include <stdio.h>

int main() {
    int n, i, j, k, aux;

    scanf("%d", &n);

    if(n<1 || n>10){
        printf("dimensao invalida\n");
        return 0;
    }

    int m[n][n], inv[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(k=0;k<n;k++){
        for(i=0,j=n-1;i<n,j>=0;i++,j--){
            inv[i][k]=m[j][k];
        }
    }

    aux=0;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(m[i][j]!=m[j][i]) aux=1;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(inv[i][j]!=inv[j][i]) aux=1;
        }
    }

    if(aux==0) printf("bissimetrica\n");
    else printf("nao bissimetrica\n");

    return 0;

}