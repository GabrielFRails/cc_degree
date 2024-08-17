#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char * aloc(int n, char *s);
 
int main(){
 
    char str[500], str1[500];
    //char str1[500];
    int n, i, ind;
    scanf("%d", &n);
    
    
    for(i=0; i<n; i++){
        scanf("%d%*c%[^\n]", &ind, str);
        
        if(aloc(ind, str) != NULL) printf("%s\n", aloc(ind, str));
    }
    return 0;
}
 
char * aloc(int n, char *s){
    s[n] = '\0';
    if(n>499) return NULL;
    return s;
}  