.data
   .globl c
   c: .byte -20

   .globl i
   .align 4
   i: .long -256

   .globl j
   .align 4
   j: .long 512

   .globl l
   .align 8
   l: .quad 128

   .globl us
   .align 2
   us: .word 111

   .globl ui
   .align 4
   ui: .long 1024

   .globl ul
   .align 8
   ul: .quad 2048
.text

.globl aux
aux:
   pushq %rbp

   movq  %rsp, %rbp

   # Se necessário, usar apenas os registradores (ou suas variações) abaixo:
   # %rax, %rcx, %rdx, %rdi, %rsi, %r8, %r9, %r10, %r11

   # Seu código aqui...

   movl $68000, j
   movq $4096, l

   #i = j
   movl j, %eax
   movl %eax, i

   #ui = i
   movq i, %rax
   movq %rax, ui

   #j = c
   movb c, %al
   movsbl %al, %eax
   movl %eax, j

   #ul = ui
   movl ui, %eax
   movslq %eax, %rax
   movq %rax, ul

   #us = ul
   movq ul, %rax
   movw %ax, us

   #j = 10 + i - 5;
   movl i, %edx
   addl $10, %edx
   subl $5, %edx
   movl %edx, j

   #c = j * 2;
   movl j, %ecx
   imull $2, %ecx
   movb %cl, c

   #long *ptr;
   #ptr -> r10
   #ptr = &l;

   movq $l, %r10 #r10 = &l

   #*ptr = 128;
   movq $128, (%r10)   

   leave
   ret