#include <stdio.h>

int crescente(int a){

    a++;
    return a;
}
 
int main(){
 
    int n = 0, i = 0, a = 0, b = 0;
    scanf("%d", &n);
    int time[n];
    
    while(i < n){
        
        time[i] = i+1;
        i++;
    }
    
 
    if(n < 2) printf("Campeonato invalido!\n");
    else{
 
        for(i = 0; i<n; i++){
 
            for(a = i+1; a < n; a++){
 
                printf("Final %d: Time%d X Time%d\n", crescente(b), time[i], time[a]);
                b++;
            }
        }
    }
 
    return 0;
}