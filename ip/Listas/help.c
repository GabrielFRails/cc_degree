#include <stdio.h>

#define m 5

int verify(int a){
   if((a == 0) || (a == 1) || (a == 2)) return 1;
   return 0; 
}

int maior(int * v){
    int aux, i;
    aux = v[0];
    for(i=1; i<m; i++){
        if(v[i]>aux) aux = v[i];
    }
    return aux;
}

int main(){

int jogos[m][m], i=0, j=0, aux=0;
printf("O programa recebe o resultado de 5 times em jogos de ida e volta e fornece os resultados do time mais vitorioso, o mais derrotado e por fim o mais empatado.\nPortanto é necessário que você nos diga o resultado de cada jogo sendo que 1 pra quando o mandante vence, 2 para o visitante vence e 0 em caaso de empate.\n");

int vencedores[5], perdedores[5], empate[5];

for(i=0; i<5; i++) vencedores[i] = perdedores[i] = empate[i] = 0; 

for(i=0; i<m; i++)
    for(j=0; j<m; j++){
        if(i!=j){
            printf("Resultado do jogo time %d x Time %d: ", i+1, j+1);
            scanf("%d", &jogos[i][j]);
            if(verify(jogos[i][j]) == 0){
                while(1){
                    printf("Entrada inválida, por favor siga as instruções\n");
                    printf("0. empate\n");
                    printf("1. vitoria mandante\n");
                    printf("2. vitoria visitante\n");
                    scanf("%d", &jogos[i][j]);
                    if(verify(jogos[i][j]) == 1) break;
                }
            }
            if(jogos[i][j] == 0){
                empate[i] += 1;
                empate[j] += 1;
            }else if(jogos[i][j] == 1){
                vencedores[i] += 1;
                perdedores[j] += 1;
            }else if(jogos[i][j] == 2){
                vencedores[j] += 1;
                perdedores[i] += 1;
            }
        } else jogos[i][j] = -1;
    }
      
aux = maior(vencedores);
printf("Maior(es) vencedor(es)\n");
for(i=0; i<m; i++){
    if(vencedores[i] == aux) printf("Time %d vitórias %d\n", i+1, aux);
}

aux = maior(perdedores);
printf("Maior(es) perdedor(es)\n");
for(i=0; i<m; i++){
    if(perdedores[i] == aux) printf("Time %d derrotas %d\n", i+1, aux);
}

aux = maior(empate);
printf("Maior(es) indice de empate\n");
for(i=0; i<m; i++){
    if(empate[i] == aux) printf("Time %d empates %d\n", i+1, aux);
}

return 0;
}