#include <stdio.h>

int is_little()
{
    int i = 0x00000001;
    unsigned char *p = (unsigned char *)&i;

    return *p;
}

int main()
{
    if (is_little())
        printf("Little-endian\n");
    else
        printf("Big-endian\n");

    return 0;
}