#include <stdio.h>
#include <math.h>

double compute_pi(int n){
    double pi=1, nu=2, d=1;
    int i;

    for(i=1; i<=n; i++){
       pi *= nu/d;
       if(i%2==0) nu += 2;
       else if(i%2!=0) d += 2;
    }
    return pi*2;
}

int main(){

    int n;
    scanf("%d", &n);
    double pi; 
    pi = compute_pi(n);
    printf("%.12lf\n", pi);
    return 0;
}