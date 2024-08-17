#include <stdio.h>
#include <math.h>

int main(){

    int mat=1, n1=1, n2=1;
    float sal_min=1, lim_ip=1, preco1=1, preco2=1, c1=1, c2=1, sal_l=1, sal_b=1, dif;

    scanf("%f%f%f%f", &sal_min, &lim_ip, &preco1, &preco2);

        while(1){
        scanf("%d%d%d", &mat, &n1, &n2);
        if(mat==0) break;

        if(n1>=10) c1 = (n1*preco1)*0.14; else if(n1<10) c1 = (n1*preco1)*0.13; else if(n1==0) c1=0;
        if(n2>=20) c2 = (n2*preco2)*0.13; else if(n2<20) c2 = (n2*preco2)*0.12; else if(n2==0) c2=0;
        sal_b = sal_min + c1 + c2;
        printf("MATRICULA = %d, SALARIO BRUTO = %.2f, ", mat, sal_b);
        sal_b -= (0.08*(sal_b));
        if(lim_ip<sal_b) {dif = sal_b - lim_ip; sal_l = sal_b - (0.15*dif);} 
        else sal_l = sal_b;
        printf("SALARIO LIQUIDO = %.2f\n", sal_l);
    }   
    return 0;
}