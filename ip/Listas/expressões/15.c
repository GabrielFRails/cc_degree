#include <stdio.h>

int main(){

    int number = 0, i = 0, bi[8];
    scanf("%d", &number);

    if(number > 255 || number < 0){
        
        printf("Numero invalido!");

    } else {

        for(i = 0; i < 8; i++){

            bi[i] = number % 2;
            number /= 2;

        }

        for(i = 7; i >= 0; i--){

            printf("%d", bi[i]); 

        }

    }

    printf("\n");

    return 0;
}