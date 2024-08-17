#include <stdio.h>

int main(){

    int n, l, c, det=0;
    scanf("%d", &n);
    int M[n][n], T[n][n];

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) {
            scanf("%d", &M[l][c]);
            T[c][l] = M[l][c];
        }

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) {
            if(l==c) det+=M[l][c];
        }

    for(l=0; l<n; l++){
        for(c=0; c<n; c++){
            M[l][c] *= det;
            //printf("M %d -", M[l][c]);
            M[l][c] += T[l][c];
            printf("%d ", M[l][c]);
            //printf("%d ", M[l][c]);
        }
        printf("\n");
    }

    return 0;
}