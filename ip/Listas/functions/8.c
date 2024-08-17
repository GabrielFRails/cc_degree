#include <stdio.h>
#include <math.h>

void print_bytes( const void * end_byte, int n ){
    int i;
    unsigned char *pc;
    for(i=0; i<n; i++){
        pc = ((unsigned char *)end_byte)+i;
        printf("%u,", *pc);
    }
    printf("\n");
}

int main(){

    unsigned char uc; unsigned short us; unsigned int ui;
    float f;
    double v;
    scanf("%lf", &v);
    uc = us = ui = f = v;

    print_bytes(&uc, sizeof(unsigned char));
    print_bytes(&us, sizeof(unsigned short));
    print_bytes(&ui, sizeof(unsigned int));
    print_bytes(&f, sizeof(float));
    print_bytes(&v, sizeof(double));

    return 0;
}

