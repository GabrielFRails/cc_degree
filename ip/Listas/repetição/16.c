#include <stdio.h>

int main(){

    int mat = 0;
    float horas = 0, ganho = 0, sal = 0;

    while(1){

        scanf("%d %f %f", &mat, &horas, &ganho);
        
        if(mat == 0) break;
        else {
            sal = horas * ganho;
            printf("%d %.2f\n", mat,sal);
        }
        
    }

    return 0;
}