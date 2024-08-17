#include <stdio.h>
#include <stdlib.h>

typedef struct Poly{
    int ordem;
    double *coef;
}Poly;

Poly * poly_new(int ord); //Funcao que cria um polinomio com alocacao dinamica
void poly_print(Poly * p); //Funcao que imprime um polinomio na tela
void poly_free(Poly * p); //Funcao que libera a memoria alocada a um polinomio
Poly * poly_sum( Poly * A, Poly * B ); //Cria o polinomio resultante da soma
Poly * poly_sub( Poly * A, Poly * B ); // Cria o polinomio resultante da subtração;
Poly * poly_mult( Poly * A, Poly * B ); // Cria o polinomio resultante da multipliação

int main(){

    Poly *p, *psoma, *psub, *pmult;
    int n, i, j , k;
    scanf("%d", &n);
    p = (Poly*) calloc(n, sizeof(Poly));

    for(i=0; i<n; i++){
        scanf("%d", &p[i].ordem);
        p[i].coef = malloc((p[i].ordem+1) * sizeof(double));
        for(j=0; j<=p[i].ordem; j++){
            scanf("%lf", &p[i].coef[j]);
        }
    }

    for(i=0; i<n-1; i++){
        psoma = poly_sum(&p[i], &p[i+1]);
        printf("soma: ");
        poly_print(psoma);
        printf("\n");
        
    }

    poly_free(p);
    return 0;
}

Poly * poly_new(int ord){
    Poly * npoly = malloc(sizeof(Poly));
    npoly->ordem = ord;
    npoly->coef = malloc((ord+1)*sizeof(double));
    return npoly;
}

void poly_print(Poly * p){
    int i, j;
    if(p == NULL) return;
    for(i=p->ordem; i>=0; i--){
        if(p->coef[i] >= 0) printf("+");
        printf("%.1lfx^%d", p->coef[p->ordem-1], i);
    }
}

Poly * poly_sum( Poly * A, Poly * B ){
    int i, j, ordem;
    if(A->ordem > B->ordem) ordem = A->ordem;
    else ordem = B->ordem;
    Poly * poly = poly_new(ordem);
    double * coef = malloc(sizeof(double)*ordem+1);

    for(i=0; i< ordem+1; i++) coef[i] = 0;
    for(i=0; i< A->ordem; i++) coef[i] += A->coef[i];
    for(i=0; i< B->ordem; i++) coef[i] += B->coef[i];
    for(i=0; i< ordem+1; i++) poly->coef[i] = coef[i];
    return poly;
}

void poly_free(Poly * p){
    if(p->coef != NULL) free(p->coef);
    if(p != NULL) free(p);
}