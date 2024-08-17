#include <stdio.h>
     
    int main() {
        int n, cont, tam_s, tam_smax, x, y;
     
        scanf("%d", &n);
     
        tam_s = 1;
        tam_smax = 1;
        scanf("%d", &y);
     
        for(cont=1;cont<n;cont++){
            scanf("%d", &x);
            if(x<=y) tam_s = 1;
            else{
                tam_s += 1;
                if(tam_s>tam_smax) tam_smax = tam_s;
            }
            y = x;
        }
     
        printf("O comprimento do segmento crescente maximo e: %d\n", tam_smax);
     
        return 0;
    }