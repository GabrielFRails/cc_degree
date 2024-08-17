// Cria e inicializa as variáveis

char c = -20;

int i = -256;

int j = 512;

long l = 128;

unsigned short us = 111;

unsigned int ui = 1024;

unsigned long ul = 2048;

void aux()

{

   j = 68000;
   l = 4096;
   i = j;
   ui = i;
   j = c;
   ul = ui;
   us = ul;
   j = 10 + i - 5;
   c = j * 2;
   long *ptr;
   ptr = &l;
   *ptr = 128;
}