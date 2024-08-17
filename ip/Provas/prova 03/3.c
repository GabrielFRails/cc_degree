#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1

int str_split(char * str, char m[][MAX_WORD_LEN], char * sep){
    char *pi = str;
    int i, j, cont=0;
    for(i=0; i<strlen(str); i++){
        char *pch = sep;
        for(j=0; j<strlen(sep); j++){
            if(*pi==*pch) {
                str[i+1] = '\n';
                cont++;
            }
            pch++;
        }
        if(cont>0) return strlen(str);
    }
}

int main(){

    char str[200*64], sep[200*64], m[100][MAX_WORD_LEN], buff[200*64];
    scanf("%[^\n]%*c%[^\n]", str, sep);
    sprintf(buff, str);
    char *p = strtok (str,sep);
    int maior = 0, cont = 0;
    while(p!=NULL){

        printf("(%d)%s\n", str_split(p, m, sep), p);
        if(str_split(p, m, sep)>maior) maior = str_split(p, m, sep);
        p = strtok (NULL, sep);
    }

    char *py = strtok (buff,sep);
    //printf("%s\n", buff);
    while(py!=NULL){

        if(str_split(py, m, sep)==maior) cont++;  
        py = strtok (NULL, sep);
    }
    printf("%d\n", cont);
    return 0;
}