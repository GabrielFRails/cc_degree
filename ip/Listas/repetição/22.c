#include <stdio.h>
#include <math.h>
 
int soma_cat(int a, int b){
    return pow(a,2)+pow(b,2);
}
 
int main(){
    int n=0, c1=0, c2=0, i=0, soma_catetos=0, aux=0;
    scanf("%d", &n);
        
    for(aux=1; aux<=n; aux++){
        for(c1=1;c1<=aux;c1++){
            for(c2=1;c2<=aux;c2++){
                soma_catetos = soma_cat(c1,c2);
                if(soma_catetos==aux*aux && c1<c2 && c1!=1) printf("hipotenusa = %d, catetos %d e %d\n",aux,c1,c2);
            }
        }
    }
                   
    return 0;
}