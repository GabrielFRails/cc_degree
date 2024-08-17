#include <stdio.h>
// one two three
int one(char s);
int two(char s);
int three(char s);
 
int main(){
 
    int i, N, a, j, cont_one=0, cont_two=0;
    char c;
    scanf("%d", &N);
    scanf("%*c");
    
    char str[10000];
    int result[N];
    
    for(i=0; i<N; i++){
        //scanf("%*c");
        a=0;
        do{
            c = getchar();
            str[a]=c;
            a++;
        } while(c!='\n');
        //printf("valor de a = %d\n", a);
        j=0;
        if(a==4){
            cont_one=0, cont_two=0;
            for(j=0; j<3; j++){
                if(str[0]=='t') cont_one = 0;
                if(one(str[j])==1) cont_one++;
                else if( (str[j]=='t') || (str[j]=='w') || (str[j]=='o') ) cont_two++; 
                if(str[2]=='o') cont_two++;
            }
            //printf("cont two = %d\n", cont_two);
            if(cont_one>1) result[i] = 1;
            if(cont_two>1) result[i] = 2;
 
        } else if(a>4) result[i] = 3;
        
    }
 
    for(i=0; i<N; i++){
        printf("%d\n", result[i]);
    }
 
    return 0;
}
 
int one(char s){
    int n=0;
    switch (s){
    
        case 'o':
        case 'n':
        case 'e': {
            n = 1;
            break;
        }
        default: n = 0;
    }
    return n;
}
 
int three(char s){
    int n=0;
    switch (s){
    
        case 't':
        case 'h':
        case 'r':
        case 'e': {
            n = 1;
            break;
        }
        default: n = 0;
    }
    return n;
}