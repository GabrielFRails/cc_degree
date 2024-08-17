#include <stdio.h>
#include <string.h>
#include <math.h>

#define N 12222

int main(){

    int n, a, b, i, j, k, numbers;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        char str[N], str1[N];

        scanf("%d%d", &a, &b);
        scanf("%*c");
        char buffer[b-a+1];
        char buffer1[b-a+1];
        sprintf(str, "%d", a);
        for(j=a+1; j<b+1; j++){
            sprintf(buffer, "%d", j);
            strcat(str, buffer);         
        }
        printf("%s", str);
        int size = strlen(str);
        sprintf(str1, "%c", str[size-1]);
        //printf("%s", str1);
        for(j=size-2; j>=0; j--){
            sprintf(buffer1, "%c", str[j]);
            strcat(str1, buffer1);
        }
        printf("%s\n", str1);
    }

    

    return 0;
}