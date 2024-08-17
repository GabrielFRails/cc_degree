#include <stdio.h>


struct Matriz{
    float a1;
    float a2;
    float a3;
    float a4;
}; 

struct Matriz m;
 
int main(){

    float M[2][2];
    int l, c;
    
    for(l=0; l<2; l++)
        for(c=0; c<2; c++) scanf("%f", &M[l][c]);

    m.a1 = M[0][0]*M[0][0] + M[0][1]*M[1][0];
    m.a2 = M[0][0]*M[0][1] + M[0][1]*M[1][1];
    m.a3 = M[1][0]*M[0][0] + M[1][1]*M[1][0];
    m.a4 = M[1][0]*M[0][1] + M[1][1]*M[1][1];

    printf("%.3f %.3f\n%.3f %.3f", m.a1, m.a2, m.a3, m.a4);

    return 0;
}