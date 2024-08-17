#include <stdio.h>
#include <math.h>
int primo(int a){
    int i, cont = 0, b;
    for(i = 1; i <= a/2; i++){
        if(a % i == 0) cont++;
        else continue;
        }
        if(cont==1 || a==2) b = 2; //primo
        else if(cont != 1) b = 1; //não primo
        return b;
}
 
int main(){
    int n1,n2,n3,i=2,r=1, aux=0, cont=0;
    scanf("%d%d%d", &n1,&n2,&n3);
    for(aux=2;;){
        
        if(primo(aux)==2){
            if(n1%aux==0){printf("%d ", n1); n1/=aux; cont++;} else if(n2%aux==0 || n3%aux==0 ){printf("%d ", n1); n1=n1;}
            if(n2%aux==0){printf("%d ", n2); n2/=aux; cont++;} else if(n3%aux==0 || cont>0){printf("%d ", n2); n2=n2;}
            if(n3%aux==0){printf("%d ", n3); n3/=aux; cont++;} else if(cont>0){printf("%d ", n3); n3=n3;}
            if(cont>0){
                printf(":%d\n", aux); r*=aux;
                cont = 0;
            } 
            
        } 
        if(n1%aux!=0 && n2%aux!=0 && n3%aux!=0) aux++;
        if(n1==1 && n2==1 && n3==1) break;
        
    }
    printf("MMC: %d", r);
    return 0;
}