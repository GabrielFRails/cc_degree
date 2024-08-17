#include <stdio.h>

/* preços: popular: R$ 1,00
		   Geral: R$ 5,00
		   Arquibancada: R$ 10,00
		   Cadeira: R$ 20,00 */

int main (){

	int pessoas, jogos, i;
	double popular, geral, arquibancada, cadeira; //float do número de pessoas em relação ao total
	double ppopular, pgeral, parquibancada, pcadeira; //float de porcentagens
	double atotal[10]; //float de arrecadação total
	

	scanf("%d", &jogos);

	for (i = 0; i < jogos; i++) {

		scanf("%d%lf%lf%lf%lf", &pessoas, &ppopular, &pgeral, &parquibancada, &pcadeira);

		popular = ppopular / 100 * pessoas;

		geral = pgeral / 100 * pessoas * 5;

		arquibancada = parquibancada / 100 * pessoas * 10;

		cadeira = pcadeira / 100 * pessoas * 20;

		atotal[i] = popular + geral + arquibancada + cadeira;

	}

	for(i = 0; i < jogos; i++){

		printf("A RENDA DO JOGO N. %d E = %.2lf\n", i+1, atotal[i]);

	}

	return 0;
}