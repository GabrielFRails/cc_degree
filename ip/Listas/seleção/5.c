#include <stdio.h>

/*
Para esse prog funcionar corretamente, faz-se necessário o uso do
chamado "truncamento", tal ferramenta está descrito no slide "Aula-03"
na sessão "Coversão de Dados".
*/
int main(){

    int horas = 0, i = 0;
    float conta_total = 0;
    scanf("%d", &horas);

    if(horas < 3){

        conta_total = horas * 5;

    } else if(horas % 3 == 0){

        conta_total = (horas / 3) * 10;

    } else if(horas % 3 != 0){

        i = horas - (horas / 3 * 3);
        conta_total = ((horas / 3) * 10) + (i * 5);

    }

    printf("O VALOR A PAGAR E = %.2f\n", conta_total);
    //printf("%d\n", i);

    return 0;
}