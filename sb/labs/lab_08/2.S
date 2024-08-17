.section .rodata

str: .string "%d\n"
.data
   .globl i
   .align 4
   i: .long 0

   .globl vet
   vet: .byte 12, 3, 20, 8

.text

.globl main

main:
   pushq %rbp
   movq  %rsp, %rbp

   # Seu código aqui...
   # i = 0
   movl $0, i

loop:
   # teste
   cmpl $4, i # if (i < 4)
   jl after_loop

   movq $vet, %r8 # r8 = &vet
   movslq i, %r9  # r9 = (long)i
   imulq $1, %r9  # r9 = i * sizeof(char)
   addq %r9, %r8  # r8  = &vet[i]

   movb (%r8), %dil # 1º param
   movw $10, $si    # 2º param
   call filtro      # retorno em %eax

   # printf("[INFO] %d\n", err);
   # 1º param: rdi -> (formatação/string)
   # 2º param: esi -> %eax retorno de filtro(vet[i], LIM)
   # zerar eax
   movq $str, %rdi,
   movl %eax, %esi 
   movl $0, %eax
   call printf

   # update
   incl %eax
   jmp loop

after_loop:

   # return 0
   movl $0, %eax
   leave
   ret