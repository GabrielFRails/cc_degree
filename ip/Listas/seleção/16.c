#include <stdio.h>

int main(){

    int mat = 0, dep = 0; //matrícula e dependentes
    float sm = 0, sf = 0, ipb = 0, ipl = 0, taxa = 0, taxa_normal = 0, ip_normal = 0, resultado; 
    scanf("%d %f %d %f %f", &mat, &sm, &dep, &sf, &taxa_normal);

    if(sf / sm > 12) ipb = .2 * sf;
    else if(sf / sm > 5) ipb = .08 * sf;
    else ipb = 0;

    ip_normal = sf * taxa_normal / 100;
    ipl = ipb - (dep * 300);
    resultado = ipl - ip_normal;    

    printf("MATRICULA = %d\n", mat);
    printf("IMPOSTO BRUTO = %.2f\n", ipb);
    printf("IMPOSTO LIQUIDO = %.2f\n", ipl);
    printf("RESULTADO = %.2f\n", resultado);

    if(resultado > 0) printf("IMPOSTO A PAGAR\n");
    if(resultado == 0) printf("IMPOSTO QUITADO\n");
    if(resultado < 0) printf("IMPOSTO A RECEBER\n");

    return 0;
}

/*
    t = t / 100;
    ip = (sf * t);
    sf = sf - ip;

    if(sf / sm > 12) taxa = 0.2; //20% de taxa
    if(sf / sm > 5) taxa = 0.08; //8% de taxa
    if(sf / sm <= 5) taxa = 0; //0% de taxa
    printf("%f\n", sf / sm);
    printf("%f %f\n", ip, sf);


    if(taxa == 0) ipb = 0; else ipb = sf - (sf*taxa); 
    ipl = ipb - (300 * dep);
    
    printf("MATRICULA = %d\n", mat);
    printf("IMPOSTO BRUTO = %.2f\n", ipb);
    printf("IMPOSTO LIQUIDO = %.2f\n", ipl);
    printf("RESULTADO = %.2f\n", ipl - ip);

    if(ipl- ip > 0) printf("IMPOSTO A PAGAR\n");
    if(ipl- ip == 0) printf("IMPOSTO QUITADO\n");
    if(ipl- ip < 0) printf("IMPOSTO A RECEBER\n");
*/