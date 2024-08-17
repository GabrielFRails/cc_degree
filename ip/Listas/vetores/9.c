#include <stdio.h>
#include <string.h>
 
#define N 1000
 
int letras(char r);
void first(char *s);
void second(char *s);
void third(char *s);
 
 
int main(){
 
    int n=0, i, k, a;
    scanf("%d", &n);
    char str[N];
    char c;
    
    for(k=0; k<n; k++){
        scanf("%*c");
        scanf("%[^\n]", str);
 
        first(str);
        second(str);
        third(str);
        //int size = strlen(str);
 
        //for(i=0; i<size/2; i++){
        //    tmp = str[i];
        //    str[i] = str[size-i-1];
        //    str[size-i-1] = tmp;
        //}
 
        //for(i=size/2+1; i<size; i++){
        //   if(str[i]!=32) str[i] = str[i]-1;
        //}
        //printf("%s\n",str);
        
    }
 
    return 0;
}
 
int letras(char r){
    if((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z')) return 1;
    else return 0;
}
 
void first(char *s){
    int i;
 
    for(i=0; s[i]!='\0'; i++){
        if(letras(s[i])==1) s[i] = (int)s[i] + 3; 
    }
    //printf("passada 1: %s\n", s);
}
 
void second(char *s){
    int size = strlen(s);
    int i;
    char tmp;
    for(i=0; i<size/2; i++){
        tmp = s[i];
        s[i] = s[size-i-1];
        s[size-i-1] = tmp;
    }
    //printf("segunda passada: %s\n", s);
}
 
void third(char *s){
    int i;
    for(i=strlen(s)/2; s[i]!='\0'; i++) s[i] = (int)s[i]-1;
    printf("%s\n", s);
}