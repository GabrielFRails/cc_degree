#include <stdio.h>
 
int main(){
 
    int conta_client = 0;
    float metros_cubicos = 0, valor_conta = 0;
    char consumidor;
 
    scanf("%d %f %c", &conta_client, &metros_cubicos, &consumidor);
 
    if(consumidor == 'R'){
 
        valor_conta = 5 + (0.05 * metros_cubicos);
 
    } else if(consumidor == 'C'){
 
        if(metros_cubicos <= 80){
 
            valor_conta = 500;
 
        } else if(metros_cubicos > 80){
 
            valor_conta = 500 + (0.25 * (metros_cubicos - 80));
 
        }
        
    } else if(consumidor == 'I'){
 
        if(metros_cubicos <= 100){
 
            valor_conta = 800;
 
        } else if(metros_cubicos > 100){
 
            valor_conta = 800 + (0.04 * (metros_cubicos - 100));
 
        }
    } 
 
    printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta_client, valor_conta);
 
    return 0;
}
 
/*
    Desenvolver um programa para calcular a conta de água para uma empresa de saneamento. O custo da
    água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta
    é:
        • Residencial: R$ 5,00 de taxa mais R$ 0,05 por metros cúbicos gastos;
        • Comercial: R$ 500,00 para os primeiros 80 metros cúbicos gastos mais R$ 0,25 por metros cúbicos
        excedentes;
        • Industrial: R$ 800,00 para os primeiros 100 metros cúbicos gastos mais R$ 0,04 por metros cúbicos
        excedentes;
 
*/