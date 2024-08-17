.text
.show
show:
   pushq %rbp
   movq %rsp, %rbp

   #              rdi      esi
   # void show(int *v, int size)
   

   leave
   ret
.globl main

main:
   pushq %rbp
   movq %rsp, %rbp