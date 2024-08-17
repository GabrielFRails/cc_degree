#include <ctype.h>
#include <math.h>
#include <stdio.h>

void num2string(int num, int base, char *resp)
{
    int q, r;
    int i = 0, j =0;

    while (num != 0) {
        //q = ;
        r = num % base;
        num = num /base;
        resp[i++] = (r < 10) ? (r + '0') : (r - 10 + 'a');
    }
    resp[i] = 0;
    i--;

    while(i > j) {
        char temp = resp[i];
        resp[i] = resp[j];
        resp[j] = temp;
        i--;
        j++;
    }
}

int main()
{

    char buf[128];

    num2string(1024, 2, buf);

    printf("==> %s\n", buf);

    num2string(1024, 16, buf);

    printf("==> %s\n", buf);

    num2string(1024, 32, buf);

    printf("==> %s\n", buf);

    return 0;
}