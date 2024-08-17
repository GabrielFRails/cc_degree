#include <stdio.h>
//#include <math.h>

/*
Este Programa lê três valores tipo float e ordena de forma crescente
*/

int main () {

	//A lógica é usar variáveis auxiliáres p/ ordenar os números nos 6 casos possíveis

	float n1 = 0, n2 = 0, n3 = 0, number1 = 0, number2 = 0, number3 = 0;
	scanf("%f%f%f", &n1, &n2, &n3);

	if(n1 > n2 && n2 > n3){

		number1 = n3;
		number2 = n2;
		number3 = n1;

	} else if(n1 > n3 && n3 > n2){

		number1 = n2;
		number2 = n3;
		number3 = n1;

	} else if(n2 > n3 && n3 > n1){ //teste 2

		number1 = n1;
		number2 = n3;
		number3 = n2;

	} else if(n2 > n1 && n1 > n3){

		number1 = n3;
		number2 = n1;
		number3 = n2;

	} else if(n3 > n2 && n2 > n1){ //teste 1 e 3

		number1 = n1;
		number2 = n2;
		number3 = n3;

	} else if(n3 > n1 && n1 > n2){ //teste 4

		number1 = n2;
		number2 = n1;
		number3 = n3;	

	} else {

		number1 = n1;
		number2 = n2;
		number3 = n3;
	}
 
	printf("%.2f, %.2f, %.2f\n", number1, number2, number3);

	return 0;
}
