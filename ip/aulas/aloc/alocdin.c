#include <stdio.h>
#include <stdlib.h>

#define N 20

typedef struct ponto2d{
    double x, y;
} ponto;

int main(){

    ponto * p = NULL;
    int i, c;
    p = malloc(sizeof(ponto) * N);
    printf("%d\n", sizeof(ponto));
    c=10;
    for(i=0; i<N; i++){
        (p+i)->x = c; //acessando os atributos da estrutura
        (p+1)->y = c;
        c += 10;
    }

    for(i=0; i<N; i++) printf("Ponto (%.2lf, %.2lf) no endereço %p\n", p[i].x, p[i].y, &p[i]);

    free(p);

     
    return 0;
}