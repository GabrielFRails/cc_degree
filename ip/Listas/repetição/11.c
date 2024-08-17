#include <stdio.h>
 
int main(){
 
    int n = 0, i = 0, maior = 0, a = 0;
    scanf("%d", &n);
    int num[n], cont[n];
    for(i = 0; i < n; i++){
 
        scanf("%d", &num[i]);
        
    }
 
    for(i = 1; i < n; i++){
 
        if(num[i] > num[i-1]) maior++;
        else if(num[i] <= num[i-1]) maior = 0; //5 10 3 2 4 7 9 8 5
        cont[i] = maior; // [], [1], [0], [0], [1], [2], [3], [0], [0]
 
        if(cont[i] > a) a = cont[i];
 
    }
 
    if(a == 1)  printf("O comprimento do segmento crescente maximo e: %d\n", a + 1);
    else if(a != 1) printf("O comprimento do segmento crescente maximo e: %d\n", a + 1);
 
    return 0;
} //printf("--%d--\n", maior);