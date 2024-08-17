#include <stdio.h>

int main () {

	int number = 0, aux = 0;
	int m = 0, c = 0, d = 0, u = 0;
	scanf("%d", &number);

	if(number < 10 && number > 0){

		if(number == 1) printf("(primeira ordem) %d = %d unidade\n", number, number);

		else printf("(primeira ordem) %d = %d unidades\n", number, number);

		}  
		
	if(number > 9 && number < 100){

		d = number / 10; u = number % 10;

		printf("(segunda ordem) %d = ", number);
		
		if(d == 1) printf("%d dezena ", d); else if(d == 0) aux = 1; else printf("%d dezenas ", d);
	
		if(u == 1) printf("+ %d unidade ", u); else if(u == 0) aux = 2; else printf("+ %d unidades ", u);

		printf("= %d ", d*10); if(u == 0) aux = 12; else printf("+ %d", u);

	}

	if(number > 99 && number < 1000){

		c = number / 100; d = (number % 100) / 10; u = number % 10;

		printf("(terceira ordem) %d = ", number);

		if(c == 1) printf("%d centena ", c); else if(c == 0) aux = 3; else printf("%d centenas ", c);
	
		if(d == 1) printf("+ %d dezena ", d); else if(d == 0) aux = 4; else printf("+ %d dezenas ",d);

		 if(u == 1) printf("+ %d unidade ", u); else if(u == 0) aux = 5; else printf("+ %d unidades ", u);

		printf("= %d ", c*100); if(d == 0) aux = 6; else printf("+ %d ", d*10);
		if(u == 0) aux = 1; else printf("+ %d", u);

	}

	if(number > 999 && number < 10000){

		m = number / 1000; c = (number % 1000) / 100; d = (number % 100) / 10; u = number % 10;

		printf("(quarta ordem) %d = ", number);

		if(m == 1) printf("%d unidade de milhar ", m); else if(d == 0) aux = 7; else printf("%d unidades de milhar ", m);

		if(c == 1) printf("+ %d centena ", c); else if(c == 0) aux = 8; else printf("+ %d centenas ", c);
	
		if(d == 1) printf("+ %d dezena ", d); else if(d == 0) aux = 9; else printf("+ %d dezenas ", d);

		if(u == 1) printf("+ %d unidade ", u); else if(u == 0) aux = 10; else printf("+ %d unidades ", u);

		printf("= %d ", m*1000); if(c == 0) aux = 11; else printf("+ %d ", c*100);
		if(d == 0) aux = 1; else printf("+ %d ", d*10);
		if(u == 0) aux = 1; else printf("+ %d", u);

	}

	if(number < 0 || number > 9999) printf("Numero invalido!\n");
	

	return 0;
}
