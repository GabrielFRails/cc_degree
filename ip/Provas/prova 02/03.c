#include <stdio.h>
#include <math.h>


int potencia_prima( int n, int * k, int * p );
int primo(int a);
int divisores(int x);
int soma_divisores(int y);

int main(){

    int n, k, p, cont = 0, verify, number=2;
    scanf("%d", &n);
    k = 2; p = 2;
    while(1){
        
        verify = potencia_prima(number, &k, &p);

        if(verify==3) {
            printf("%d : %d^1\n", number, number);
            cont++;
        } else if(verify==2){
            int s=0, d;
                for(d=2;d<=number/2;d++){
                    if(number%d==0){
                        s=d;
                        break;
                    }
                }
            if(pow(s, soma_divisores(number))==number){
                printf("%d : %d^%d\n", number, s, soma_divisores(number));    
                cont++;
            } else k++;
            
        } else if(verify==4) continue;

        number++;
        if(cont==n) break;
    }

    return 0;
}

int potencia_prima(int n, int * k, int * p){
    int i;
    if(primo(n)==2) return 3; //número primo ou seja printf("%d : %d ^ 1\n", n, n);
    else if(primo(n)==1){
        //printf("%d\n", divisores(n)); return 2;
        if(divisores(n)==2) return 2; //númeor não primo potência prima
        else if(divisores(n)==1) return 4; //número não potência prima
        
    }
}

int divisores(int x){
    int s=0, d, i=1, v, v1=1;
        for(d=2;d<=x/2;d++){
            if(x%d==0){
                i++;
                x/=d;
                v=d;
            }
            
            if(v1==v) s=2;
            else if(v1=!v) s=1;
            v1 = d;
        }
    
    if(s!=1) return 2; //não potência prima
    else return 1; //é potência prima
}

int soma_divisores(int y){
    int s=0, d;
    for(d=1;d<=y/2;d++){
        if(y%d==0){
            s++;
        }
    }
    return s;
}

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



