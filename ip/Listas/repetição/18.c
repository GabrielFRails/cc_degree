#include <stdio.h>
 
int main(){
 
    double valor_ingresso = 0, valor_ini = 0, valor_final = 0, custo = 200.0, lucro = 0, i, valor;
    int ingressos = 0, n, a;
    scanf("%lf %lf %lf", &valor_ingresso, &valor_ini, &valor_final);
    n = valor_final;
    double lucro_m[n];
    if(valor_final < valor_ini) {
        printf("INTERVALO INVALIDO\n");
    } else{

        for(i=valor_ini; i<=valor_final; i++){
        if(i < valor_ingresso){
            ingressos = 120 + ((valor_ingresso - i) * 50);
            lucro = (ingressos * i) - (200 + (0.05*ingressos));
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, ingressos, lucro);
 
        } else if(i==valor_ingresso){
            ingressos = 120;
            lucro = (ingressos * i) - (200 + (0.05*ingressos));
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, ingressos, lucro);
 
        } else if(i > valor_ingresso){
            ingressos = 120 - ((i - valor_ingresso) * 60);
            lucro = (ingressos * i) - (200 + (0.05*ingressos));
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, ingressos, lucro);
        }
        a = i;
        lucro_m[a] = lucro;
    }
    double maior = 0;

    for(a = valor_ini; a < valor_final; a++) {
        if(lucro_m[a] > maior) maior = lucro_m[a];
            
        }
    for(a = valor_ini; a < valor_final; a++) {
        if(maior == lucro_m[a]) {valor = a;break;}
        
        }

        if(a < valor_ingresso) ingressos = 120 + ((valor_ingresso - a) * 50);
        else if(a == valor_ingresso) ingressos = 120;
        else if(a > valor_ingresso) ingressos = 120 - ((a - valor_ingresso) * 60);
    i = a;    
 
    if(maior > 0)printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %d\n", i, maior, ingressos);
    else if(maior <= 0) printf("Melhor valor final: 0.00\nLucro: 0.00\nNumero de ingressos: 0\n");
    }

    return 0;
}