.section .rodata

str1: .string "'a' é maior do que 'b'"
str2: .string "'a' não é maior do que 'b'"

.data
   .globl a
   .align 4
   a: .long 30

   .globl b
   .align 4
   b: .long 45

.text

.globl main

main:
   pushq %rbp
   movq  %rsp, %rbp

   movl a, %eax
   movl b, %ebx

   cmpl %ebx, %eax
   jg print_caso_1

   cmpl %ebx, %eax
   jge print_caso_2

print_caso_1:
   movq $str1, %rax
   call print_rax_as_string
   call print_newline
   jmp after
print_caso_2:
   movq $str2, %rax
   call print_rax_as_string
   call print_newline
after:
   movl $0, %eax
   movl $0, %ebx
   leave
   ret