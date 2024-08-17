#include <stdio.h>

int main () {

	float fab, percdistro, percimpos, valorcarro;
	scanf("%f%f%f", &fab, &percdistro, &percimpos);

	valorcarro = fab + (fab * percdistro / 100) + (fab * percimpos / 100);

	printf("O VALOR DO CARRO E = %.2f\n", valorcarro);


	return 0;
}