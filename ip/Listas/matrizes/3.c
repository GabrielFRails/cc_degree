#include <stdio.h>

int main(){

    int n, ref;
    scanf("%d", &n);
    int M[n][n], l, c;
    ref = n-1;

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) scanf("%d", &M[l][c]);

    for(l=0; l<n; l++)
        for(c=0; c<n; c++) {
            if(c==ref) {
                printf("%d\n", M[l][c]);
                ref--;
            }
        }

    return 0;
}