#include <stdio.h>
#include <string.h>

void inverte(char *str);

int main(){

    char str[100];
    scanf("%[^\n]", str);
    
    inverte(str);
    printf("\n");
    return 0;
}

void inverte(char *str){

    if(str[0] != '\0'){
        inverte(&str[1]);
        printf("%c", str[0]);
    }
}