.section .rodata

str: .string "[INFO] %d\n"
str1: .string "Hello"
.data
   .globl val
   .align 4
   val: .long 432

   .globl age
   .align 2
   age: .word 4

   .globl r
   .align 4
   r: .long 0

   .globl
   .align 4
   err: long 0

.text

.globl main

main:
   pushq %rbp
   movq  %rsp, %rbp

   # Seu código aqui...

   # 1º param: rdi -> prefix
   # 2º param: esi -> val
   # 3º param: dx -> age
   # 4º param: rcx -> r

   movq $str1, %rdi
   movl val, %esi
   movw age, %dx
   movq $r, %rcx
   call sum
   # retorno
   movl %eax, err

   # printf("[INFO] %d\n", err);
   # 1º param: rdi -> (formatação/string)
   # 2º param: esi -> err
   movq $str, %rdi
   movl err, %esi
   movl $0, %eax
   call printf

   # return 0
   movl $0, %eax
   leave
   ret