#include <stdio.h>

void dump(void *addr, int n) {
    unsigned char *p = (unsigned char *)addr;

    while (n--) {
        printf("%p - %02x\n", p, *p);
        p++;
    }
}

int main() {
    int i = 10000;
    printf("Usando dump em um valor int\n");
    dump(&i, sizeof(i));

    long a = 10000;
    printf("\nUsando dump em um valor long\n");
    dump(&a, sizeof(a));

    short x = 10000;
    printf("\nUsando dump em um valor short\n");
    dump(&x, sizeof(x));

    float b = 10000;
    printf("\nUsando dump em um valor float\n");
    dump(&b, sizeof(b));

    double d = 10000;
    printf("\nUsando dump em um valor double\n");
    dump(&d, sizeof(d));
    return 0;
}