#include <stdio.h>
#include <string.h>

#define SIZE 257

void str_clean(char * str, char * clr){
    int i, j, cont;
    char *r = str;
    for(i=0; i<strlen(str); i++){
        char *p = clr;
        cont = 0;
        for(j=0; j<strlen(clr); j++){
            if(*p==*r) cont++;
            p++;
        }
        if(cont==0){
            printf("%c", *r);
        }
        r++;
    }
}

int main(){

    char str[SIZE], clr[SIZE];

    scanf("%[^\n]%*c%[^\n]", str, clr);
    str_clean(str, clr);

    return 0;
}