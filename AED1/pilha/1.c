#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, size;
    i = size = 0;
    char str[21];

    printf("Digite a palavra: ");
    scanf("%[^\n]", str);
    size = strlen(str);

    printf("\n-> Desempilhando... ");
    for(i=size-1; i>=0; i--){
        printf("[%c] -> ", str[i]);
    }
    printf("fim da pilha\n");
    return 0;
}