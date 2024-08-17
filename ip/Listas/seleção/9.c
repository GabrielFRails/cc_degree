#include <stdio.h>
/*
Este Programa lê um ano e diz se é ano bissexto ou não.
*/

int main () {

    int ano = 0;
    scanf("%d", &ano);

    if(ano > 1582){

        if(ano % 4 == 0 && ano % 100 != 0){

            printf("ANO BISSEXTO\n");

        }else if(ano % 100 == 0){

            if(ano % 400 == 0){

                printf("ANO BISSEXTO\n");

            } else if(ano % 100 == 0 && ano % 400 != 0){

                printf("ANO NAO BISSEXTO\n");

            }

        } else{

            printf("ANO NAO BISSEXTO\n");

        }

    }else {

        printf("ANO NAO BISSEXTO\n");
    }


	return 0;
}
