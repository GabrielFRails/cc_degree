#include <stdio.h>

int main(){

    long int n = 0;
    double mp = 0, mi = 0, ip = 0, i = 0;

    while(1){

        scanf("%ld", &n);
        
        if(n == 0) break;
        else if(n % 2 == 0) {

            mp += n; 
            ip++;

        } else if(n % 2 != 0) {
            
            mi += n; 
            i++;
        } else{

            mi += n; 
            i++;
        }

    }

    if(mp != 0) {mp /= ip;} 
    else mp = 0;

    if(mi != 0) {mi /= i;} 
    else mi = 0;

    printf("MEDIA PAR: %lf\n", mp);
    printf("MEDIA IMPAR: %lf\n", mi);


    return 0;
}