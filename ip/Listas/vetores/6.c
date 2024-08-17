#include <stdio.h>
#include <math.h>
 
int letras(char r){
    if((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z')) return 1;
    else return 0;
}
 
int vogais(char s){
    if((s=='a') || (s=='e') || (s=='i') || (s=='o') || (s=='u')) return 1;
    else if((s=='A') || (s=='E') || (s=='I') || (s=='O') || (s=='U')) return 1;
    //if((str[a]=='a') || (str[a]=='e') || (str[a]=='i') || (str[a]=='o') || (str[a]=='u'))
    else return 2;
}
 
int main(){
 
    int i, N, a;
    char c;
    scanf("%d", &N);
    scanf("%*c");
    int contl, contv, contc;
    char str[10000];
 
    for(i=0; i<N; i++){
        contl=0; contv=0; contc=0;
        a=0;
        
        do{
            c = getchar();
            //printf("valor de c = %s\n", c);
            str[a]=c;
            if(letras(str[a])==1) contl++;
            if(vogais(str[a])==1) contv++;
            if(letras(str[a])==1){
                if(vogais(str[a])==2) contc++;
            }
            a++;
        } while(c!='\n');
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", contl, contv, contc);
    }
 
    return 0;
}