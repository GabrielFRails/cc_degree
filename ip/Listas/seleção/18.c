#include <stdio.h>

// a < b < c

int main(){

    int n1 = 0, n2 = 0, n3 = 0, aux = 0;
    char a, b, c;
    scanf("%d %d %d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &a, &b, &c);

    if(n1 > 100 || n2 > 100 || n3 > 100) return 0;
    else {

        if(n1 < n2 && n2 < n3) aux = 0;

        else if(n1 < n3 && n3 < n2){

            n1 = n1;
            aux = n3;
            n3 = n2;
            n2 = aux;

        } else if(n2 < n3 && n3 < n1){

            aux = n1;
            n1 = n2;
            n2 = n3;
            n3 = aux;

        } else if(n2 < n1 && n1 < n3){

            aux = n1;
            n1 = n2;
            n2 = aux;

        } else if(n3 < n2 && n2 < n1){

            aux = n1;
            n1 = n3;
            n3 = aux;

        } else if(n3 < n1 && n1 < n2){

            aux = n2;
            n1 = n3;
            n2 = n1;
            n3 = aux;

        } else return 0;

    }

    if(a == 'A'){

        if(b == 'B' && c == 'C') printf("%d %d %d\n", n1, n2, n3);
        else if(b == 'C' && c == 'B') printf("%d %d %d\n", n1, n3, n2);
        else return 0;

    } else if(a == 'B'){

        if(b == 'A' && c == 'C') printf("%d %d %d\n", n2, n1, n3);
        else if(b == 'C' && c == 'A') printf("%d %d %d\n", n2, n3, n1);
        else return 0;

    } else if(a == 'C'){

        if(b == 'A' && c == 'B') printf("%d %d %d\n", n3, n1, n2);
        else if(b == 'B' && c == 'A') printf("%d %d %d\n", n3, n2, n1);
        else return 0;

    } else return 0;

    return 0;
}