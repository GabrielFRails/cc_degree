#include <stdio.h>

int main() {

	double massaT, massaKg, aV, tempoS, velocidade,velocidadeKm, dS, work;
	scanf("%lf%lf%lf", &massaT,&aV, &tempoS);

	massaKg = massaT * 1000;
	velocidade = aV * tempoS;
	velocidadeKm = aV * tempoS * 3.6; 
	dS = aV * tempoS * tempoS / 2;
	work = massaKg * velocidade * velocidade / 2;

	printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", velocidadeKm, dS, work);

	return 0;
}