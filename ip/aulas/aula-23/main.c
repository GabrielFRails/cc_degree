#include <stdio.h>

/*struct dado{
    int tipo;
    void *obj;
    struct dado * soma(struct dado * d1,  struct dado * d2);
}*/

int soma(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    int r;
    int (*operador) (int,int);

    operador = soma;
    r = operador(1,2);
    printf("Resultado soma: %d\n", r);

    operador = sub;
    r = operador(1,2);
    printf("Resultado sub: %d\n", r);

    return 0;
}