#include <stdio.h>
#include <math.h>

/**
2 * Retorna o n-ésimo termo da sequência de Fibonacci
3 * @param t1 primeiro termo da sequência
4 * @param t2 segundo termo da sequência
5 * @param n a posição do termo desejado da sequência
6 * @return o valor do n-ésimo termo da sequência
7 */

int fibonacci( int t1, int t2, int n){
    int seq[n], i=0;
    seq[0]=t1; seq[1]=t2;

    for(i=2; i<=n; i++){
        seq[i] = seq[i-1] + seq[i-2];
        if(i==n) return seq[n-1];
    }
}

int main(){
    
    int n1=0, n2=0, termo=0, a=0;
    scanf("%d%d%d", &n1, &n2, &termo);

    printf("%d\n", fibonacci(n1,n2,termo));

    return 0;
}