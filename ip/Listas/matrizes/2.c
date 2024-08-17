#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int M[n][n], l, c;

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) scanf("%d", &M[l][c]);

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) {
            if(l==c) printf("%d\n", M[l][c]);
        }

    return 0;
}