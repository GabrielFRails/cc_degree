#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int n_moradores;
    int consumo_total;
    int consumo_medio;
}Imovel;

Imovel *im;

void swap(Imovel *im, int i, int j);
void sum_struct(Imovel *im, int i, int j);
int veirify_consumo(Imovel *im, int i, int j);

int main(){

    int i, j, k = 1, N;
    double consumo = 0, moradores = 0, consumo_total = 0;
    
    while(1){
        consumo = moradores = consumo_total = 0;
        scanf("%d", &N);
        if(N==0) break;
        im = (Imovel*) calloc(N, sizeof(Imovel));

        for(i=0; i<N; i++){
            scanf("%d %d", &im[i].n_moradores, &im[i].consumo_total);
            im[i].consumo_medio = im[i].consumo_total / im[i].n_moradores;
        }
        printf("Cidade# %d:\n", k);

        for(i=0; i<N; i++)
            for(j=i+1; j<N; j++){
                if((veirify_consumo(im, i, j)==2) && (im[i].consumo_medio != 0)) sum_struct(im, i, j);
            }

        for(i=0; i<N; i++)
            for(j=i+1; j<N; j++){
                if((im[i].consumo_total != 0) && (veirify_consumo(im, i, j)==1)) swap(im, i, j);
            }

        for(i=0; i<N; i++){
            if(im[i].consumo_total != 0){
                printf("%d-%d ", im[i].n_moradores, im[i].consumo_medio);
                consumo += im[i].consumo_total;
                moradores += im[i].n_moradores;
            }  
        }
        consumo_total = consumo/moradores;
        printf("Consumo medio: %.2lf m3.\n", consumo_total);
        k++;
        free(im);
        printf("\n");
    }

    return 0;
}

int veirify_consumo(Imovel *im, int i, int j){
    if(im[i].consumo_medio < im[j].consumo_medio) return 0;
    if(im[i].consumo_medio == im[j].consumo_medio) return 2;
    return 1;
}

void swap(Imovel *im, int i, int j){
    Imovel aux;
    aux = im[i];
    im[i] = im[j];
    im[j] = aux;
}

void sum_struct(Imovel *im, int i, int j){
    im[j].n_moradores += im[i].n_moradores;
    im[j].consumo_total += im[i].consumo_total;
    im[i].consumo_total = im[i].consumo_medio = im[i].n_moradores = 0;
}