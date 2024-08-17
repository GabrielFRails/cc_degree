#include <stdio.h>

float ordena(float n1, float n2, float n3){

    float number1, number2, number3;

    if(n1 >= n2 && n2 >= n3){
 
        number1 = n3;
        number2 = n2;
        number3 = n1;
 
    } else if(n1 >= n3 && n3 >= n2){
 
        number1 = n2;
        number2 = n3;
        number3 = n1;
 
    } else if(n2 >= n3 && n3 >= n1){ //teste 2
 
        number1 = n1;
        number2 = n3;
        number3 = n2;
 
    } else if(n2 >= n1 && n1 >= n3){
 
        number1 = n3;
        number2 = n1;
        number3 = n2;
 
    } else if(n3 >= n2 && n2 >= n1){ //teste 1 e 3
 
        number1 = n1;
        number2 = n2;
        number3 = n3;
 
    } else if(n3 >= n1 && n1 >= n2){ //teste 4
 
        number1 = n2;
        number2 = n1;
        number3 = n3;    
 
    } else {
 
        number1 = n1;
        number2 = n2;
        number3 = n3;
    }

}
 
int main(){
 
    int i = 0;
    float a = 0, b = 0, c = 0;
    scanf("%d%f%f%f", &i, &a, &b, &c);

    ordena(a, b, c);
    
    if(i == 1) printf("%.2f %.2f %.2f\n", a, b, c);
    else if(i == 2) printf("%.2f %.2f %.2f\n", c, b, a);
    else if(i == 3) printf("%.2f %.2f %.2f\n", b, c, a);
    else return 0;
   
 
    return 0;
}

