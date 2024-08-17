#include <stdio.h>

int main (){

    float sm, kw, custoKw, custoTotal, desconto;
    scanf("%f%f", &sm, &kw);

    custoKw = 0.7 * sm / 100;
    custoTotal = custoKw * kw;
    desconto = custoTotal - (0.1 * custoTotal);

    printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n ", custoKw, custoTotal, desconto);

    return 0;
}