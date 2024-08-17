#include <stdio.h>
#include <math.h>

void ordena_vetor(double *v, int N);

struct Ponto4d{
    double u, x, y, z;

};

int main(){

    int N, i, j;
    scanf("%d", &N);
    double norma[N], norma_ord[N];
    struct Ponto4d ponto[N];

    for(i=0; i<N; i++){
        scanf("%lf%lf%lf%lf", &ponto[i].u, &ponto[i].x ,&ponto[i].y ,&ponto[i].z);
        norma_ord[i] = sqrt((pow(ponto[i].u, 2)) 
        + (pow(ponto[i].x, 2)) 
        + (pow(ponto[i].y, 2)) 
        + (pow(ponto[i].z, 2)));
        if(norma_ord[i]<0) norma_ord[i] *= -1;
        norma[i] = norma_ord[i];
    }

    ordena_vetor(norma_ord, N);

    

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(norma_ord[i] == norma[j]){
                printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", 
                ponto[j].u, ponto[j].x ,ponto[j].y ,ponto[j].z, norma[j]);
            }
        }
    }

    return 0;
}

void ordena_vetor(double *v, int N){
    int i, j, cont;
    double aux, menor;

    while(1){
        for(i=1; i<N; i++){
            if(v[i]<v[i-1]){
                aux = v[i];
                v[i] = v[i-1];
                v[i-1] = aux;
            }
        }
        cont = 0;
        for(i=1; i<N; i++){
            if(v[i]<v[i-1]){
                cont++;
            }
        }
        if(cont==0) break;
        else continue;  
    }
}