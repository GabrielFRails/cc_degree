#include <stdio.h>
 
int main(){
 
   int col, lin, c, l;
   scanf("%d%d", &lin, &col);

    printf("(2,1)\n");

   for(l = 3; l <= lin; l++){

       for(c = 1; c <= col; c++){
           if(l==c) break;
           printf("(%d,%d)", l,c);
           if(c < col && c < l-1) printf("-");
       }
       printf("\n");
   }
    return 0;
}
