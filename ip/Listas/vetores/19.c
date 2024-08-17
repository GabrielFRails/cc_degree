#include <stdio.h>
#include <string.h>

#define SIZE 1000

char * strchar(char * str, char ch){
    while(*str != '\0' &&  *str != ch) str++;
    if(*str=='\0') return NULL;
    return str;
}

int main(){

    char str[SIZE];
    char * pch;
    char cref, ctst;
    int ali = 0, k;
    while(EOF != scanf("%[^\n]%*c", str)){
        ali = 0;
        cref = *str;
        if(cref >= 'A' && cref <= 'Z') cref = cref + ('a' - 'A');
        k = 1;
        pch = str;
        while(1){
            pch = strchar(pch,' ');
            if(pch==NULL){
                if(k>1) ali++;
                break;
            }
            //printf("caractere \'%c\' posicao: %d\n", *pch, (int)(pch-str));
            pch++;
            if(*pch >= 'A' && *pch <= 'Z') *pch = *pch + ('a' - 'A');
            if(*pch==cref) k++;
            else {
                if(k>1) ali++;
                cref = *pch;
                k = 1;
            }
        }
        printf("%d\n", ali);
    }

    return 0;
}