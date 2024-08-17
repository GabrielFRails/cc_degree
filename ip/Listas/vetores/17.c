#include <stdio.h>
#include <string.h>

int busca_char(char s, char *t);

int main(){

    int i, n, d;
    scanf("%d", &n);
    char str[503];
    char c;

    for(i=0; i<n; i++){
        scanf("%*c");
        scanf("%c", &c);
        scanf("%*c");
        scanf("%[^\n]", str);
        
        d = busca_char(c, str);
        if(d==-1) printf("Caractere %c nao encontrado.\n", c);
        else printf("Caractere %c encontrado no indice %d da string.\n", c, d);
        
    }

    return 0;
}

int busca_char(char s, char *t){
    int i;
    for(i=0; i<strlen(t); i++){
        if(t[i]==s) return i;
    }
    if(i==strlen(t)) return -1;
}