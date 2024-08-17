#include <ctype.h>
#include <stdio.h>

int string2num(char *s, int base)
{

    int a = 0;
    for (; *s; s++)
    {
        if (*s >= '0' && *s <= '9')
        {
            a = a * base + (*s - '0');
        }
        else
        {
            a = a * base + (*s - 'a') + 10;
        }
    }
    return a;
}

int main()
{

    printf("%d\n", string2num("1a", 16));
    printf("%d\n", string2num("a09b", 16));
    printf("%d\n", string2num("k09b", 36));

    return 0;
}