#include <stdio.h>

// struct S {
//    long a; // 0
//    char b; // 8
//    int c; // 8
//    short d; // 
// };

struct S {
  int   a;
  short b;
  char  c[3];
  union {
    char x[9];
    long y;
  } d;
};

void offsets(struct S *ptr) {
   unsigned long begin = (unsigned long)ptr;
   unsigned long a = (unsigned long)&ptr->a;
   unsigned long b = (unsigned long)&ptr->b;
   unsigned long c = (unsigned long)&ptr->c;
   unsigned long d = (unsigned long)&ptr->d;
   printf("a = %ld\n", a - begin);
   printf("b = %ld\n", b - begin);
   printf("c = %ld\n", c - begin);
   printf("d = %ld\n", d - begin);
}

struct S varS;

int main(){
   offsets(&varS);
   return 0;
}