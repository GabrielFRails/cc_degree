#include <stdio.h>

union A {
 short s[4][2];
 int i[4];
};

struct B {
 int m;
 char n;
 int o;
 short p;
};
void dump(void *addr, int n) {
 unsigned char *p = (unsigned char *)addr;

 while (n--) {
  printf("%p - %02x\n", p, *p);
  p++;
 }
}
union A var;

int main() {

 struct B *ptr = (struct B *)&var.s;

 var.i[0] = 10;
 var.i[1] = 0xA1780004;
 var.i[2] = 20;
 var.i[3] = 0x1A870040;
 var.s[2][0] = var.s[2][0] ^ var.s[1][0];
 var.s[0][1] = -512;
 var.s[3][1] = ptr->n + ptr->p;
 var.i[0] = var.i[0] >> ptr->o;

 printf("print --> %d\n", var.i[0]);
 dump(ptr, sizeof(struct B));
 return 0;
}