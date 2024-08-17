#include <stdio.h>

int main(){

    float M[2][2];
    int l, c;

    for(l=0; l<2; l++){
        for(c=0; c<2; c++) scanf("%f", &M[l][c]);
    }

    float det = (M[0][0]*M[1][1]) - (M[0][1]*M[1][0]);

    printf("%.2f\n", det);

    return 0;
}