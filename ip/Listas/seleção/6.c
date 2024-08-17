#include <stdio.h>

/*
Este programa converte nota decimal em conceito (A,B,C,D,)
*/

int main(){

    float nota_aluno = 0;
    char conceito;
    scanf("%f", &nota_aluno);

    if(nota_aluno >= 0 && nota_aluno < 6){

        conceito = 'D';

    }else if(nota_aluno >= 6 && nota_aluno < 7.5){

        conceito = 'C';

    }else if(nota_aluno >= 7 && nota_aluno < 9){

        conceito = 'B';

    }else if(nota_aluno >= 9 && nota_aluno <= 10){

        conceito = 'A';

    }

    printf("NOTA = %.1f CONCEITO = %c\n", nota_aluno, conceito);

    return 0;
}