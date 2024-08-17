#include <stdio.h>

int inverte(int a){
    int c, d, u;
    c = a / 100; d = (a % 100) / 10; u = a % 10;
    return u*100 + d*10 + c;
}

int main(){

    int q, i;
    scanf("%d", &q);
    int n[2];

    for(i=0; i < q; i++){
        scanf("%d %d", &n[0], &n[1]);
        n[0] = inverte(n[0]);
        n[1] = inverte(n[1]);
        if(n[0]>n[1]) printf("%d\n", n[0]);
        else printf("%d\n", n[1]);

    }

    return 0;
}