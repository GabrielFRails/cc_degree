#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Compras{
    double *preco;
    char nome[50];
}; 

struct Compras compras;

int main(){

    int i, j, k, N, quantidade[2], contador;
    double preco_total = 0, preco_produto = 0;
    scanf("%d", &N);
    for(i=0; i<N; i++){ //ciclo dos testes
        scanf("%d%*c", &quantidade[0]); //quantos produtos tem na feira
        char produto[quantidade[0]][50]; //criando uma matriz de char para armazenar os nomes dos produtos da feira

        compras.preco = calloc(quantidade[0], sizeof(double)); //alocando espaço para os preços dos produtos
        
        for(j=0; j<quantidade[0]; j++) scanf("%s%lf%*c", produto[j], &compras.preco[j]); //lendo os nomes dos produtos em seguida o preço do mesmo
        scanf("%d%*c", &quantidade[1]);
        for(j=0; j<quantidade[1]; j++){
            scanf("%s%d%*c", compras.nome, &contador); // lendo o nome do produto que a vovó quer comprar e 
            for(k=0; k<quantidade[0]; k++){
                if(strcmp(compras.nome, produto[k])==0){
                    preco_produto = compras.preco[k]*contador; 
                }
            }
            preco_total += preco_produto;
        }
        printf("R$ %.2lf\n", preco_total);
        free(compras.preco);
        preco_total = preco_produto = 0;
    } 

    return 0;
}