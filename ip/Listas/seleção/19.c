#include <stdio.h>

int main(){

    float n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    if(n1 > n2 && n2 > n3 && n3 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n3, n2, n1);
    else if(n1 > n2 && n2 > n4 && n4 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n4, n2, n1);
    else if(n1 > n3 && n3 > n2 && n2 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n2, n3, n1);
    else if(n1 > n3 && n3 > n4 && n4 > n2) printf("%.2f, %.2f, %.2f, %.2f\n", n2, n4, n3, n1);
    else if(n1 > n4 && n4 > n3 && n3 > n2) printf("%.2f, %.2f, %.2f, %.2f\n", n2, n3, n4, n1);
    else if(n1 > n4 && n4 > n2 && n2 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n2, n4, n1);


    else if(n2 > n1 && n1 > n3 && n3 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n3, n1, n2);
    else if(n2 > n1 && n1 > n4 && n4 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n4, n1, n2);
    else if(n2 > n3 && n3 > n1 && n1 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n1, n3, n2);
    else if(n2 > n3 && n3 > n4 && n4 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n4, n3, n2);
    else if(n2 > n4 && n4 > n3 && n3 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n3, n4, n2);
    else if(n2 > n4 && n4 > n1 && n1 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n1, n4, n2);


    else if(n3 > n1 && n1 > n2 && n2 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n2, n1, n3);
    else if(n3 > n1 && n1 > n4 && n4 > n2) printf("%.2f, %.2f, %.2f, %.2f\n", n2, n4, n1, n3);
    else if(n3 > n2 && n2 > n4 && n4 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n4, n2, n3);
    else if(n3 > n2 && n2 > n1 && n1 > n4) printf("%.2f, %.2f, %.2f, %.2f\n", n4, n1, n2, n3);
    else if(n3 > n4 && n4 > n1 && n1 > n2) printf("%.2f, %.2f, %.2f, %.2f\n", n2, n1, n4, n3);
    else if(n3 > n4 && n4 > n2 && n2 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n4, n3);


    else if(n4 > n1 && n1 > n2 && n2 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n2, n1, n4);
    else if(n4 > n1 && n1 > n3 && n3 > n2) printf("%.2f, %.2f, %.2f, %.2f\n", n2, n3, n1, n4);
    else if(n4 > n2 && n2 > n1 && n1 > n3) printf("%.2f, %.2f, %.2f, %.2f\n", n3, n1, n2, n4);
    else if(n4 > n2 && n2 > n3 && n3 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n3, n2, n4);
    else if(n4 > n3 && n3 > n2 && n2 > n1) printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
    else printf("%.2f, %.2f, %.2f, %.2f\n", n2, n1, n3, n4);
    


    return 0;
}

//if(n4 > n3 && n3 > n1 && n1 > n2)