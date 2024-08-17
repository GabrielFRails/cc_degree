#include <stdio.h>

#define texto "nois e merecedor de umas ferias"

int main(){

    int n, a;
    char c;
    char str[128];

    scanf("%[^\n]", str);
    printf("%s\n", str);
    n = 0;
    while(str[n]!='\0'){
        n++;
    }
    printf("%d\n", n);

    return 0;
}

