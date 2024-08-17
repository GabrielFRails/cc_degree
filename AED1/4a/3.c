#include <stdio.h>

char *get_mes(int dia){

    switch(dia){
        case 1: return "Janeiro";
        case 2: return "Fevereiro";
        case 3: return "Março";
        case 4: return "Abril";
        case 5: return "Maio";
        case 6: return "Junho";
        case 7: return "Julho";
        case 8: return "Agosto";
        case 9: return "Setembro";
        case 10: return "Outubro";
        case 11: return "Novembro";
        case 12: return "Dezembro";
    }
}

int main(){

    int dd = 0, mm = 0, aa = 0;
    scanf("%d%d%d", &dd, &mm, &aa);

    printf("%d de %s de %d\n", dd, get_mes(mm), aa);

    return 0;
}