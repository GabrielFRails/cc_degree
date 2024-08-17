#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i = 0;
    char str[20];
    printf("Digite a palavra: ");
    scanf("%[^\n]", str);

    char *v = (char *) malloc(sizeof(char)*strlen(str));

    for(i=0; i<strlen(str); i++){
        v[i] = str[i];
    }

    printf("\n-> Desempilhando... -> ");
    for(i=strlen(str)-1; i>=0; i--){
        printf("[%c] -> ", v[i]);
    }
    printf("fim da pilha\n");

    return 0;
}