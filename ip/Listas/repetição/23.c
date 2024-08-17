#include <stdio.h>
#include <math.h>

int main (){
    unsigned long int cod_produto=0, cod_maiorl=0, cod_maiorv;
    int n_vendas=0, sc;
    float valor_compra=0, valor_venda=0, total_compra=0, total_venda=0, lucro_total;
    int id1=0, id2=0, id3=0; //mercadorias que geraram lucros menor que 10%, >=10% ou ==20% e >20%
    float lucro, m_lucro=0,m_venda=0; //para calcular a % de lucro;
    
    while(1){
        sc = scanf("%ld%f%f%d", &cod_produto,&valor_compra, &valor_venda,&n_vendas);
        if(sc==-1) break;
        lucro = valor_venda*100/valor_compra-100;
        if(lucro<10) id1++; else if(lucro>=10 && lucro<=20) id2++; else if(lucro>20) id3++;
        if(lucro>m_lucro) {
            m_lucro = lucro;
            cod_maiorl=cod_produto;
        }
        if(n_vendas>m_venda){
            m_venda = n_vendas;
            cod_maiorv = cod_produto;
        }
        total_compra += valor_compra*n_vendas; total_venda+=valor_venda*n_vendas;
    }
    lucro_total = ((total_venda*100)/total_compra)-100;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", id1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %ld\n", id2);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %ld\n", id3);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", cod_maiorl);
    printf("Codigo da mercadoria mais vendida: %d\n", cod_maiorv);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%", total_compra, total_venda,lucro_total);

    return 0;
}
