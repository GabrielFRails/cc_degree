#include <stdio.h>
#include <string.h>

void find_char(char *str, char s, int size);

int count = 0;

int main(){

    char str[100], s;
    scanf("%[^\n] %c", str, &s);
    int large = strlen(str);
    find_char(str, s, large);
    printf("\n");
    return 0;
}

void find_char(char *str, char s, int size){
    
    if(str[0] != '\0'){
        find_char(&str[1], s, size);
        if(str[0] == s) printf("Achei \"%c\" no indice %d\n", s, size - count);
        count++;
        
    }
}