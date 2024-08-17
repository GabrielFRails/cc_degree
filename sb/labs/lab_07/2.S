.section .rodata

str_entrada: .string "digite um número:\n"
str_log: .string "entrou no primeiro if:\n"
str_log1: .string "entrou no segundo if:\n"
str_log2: .string "entrou no else:\n"

.data
   .globl a
   .align 4
   a: .long 0

   .globl b
   .align 8
   b: .quad 0
.text

.globl main

main:
   pushq %rbp
   movq  %rsp, %rbp

   # Seu código aqui...

   # scanf de a
   call read_int_to_eax
   movl %eax, a

   cmpl $0, %eax
   jle end_if_a

   # begin _if (a)
   movq $str_log, %rax
   call print_rax_as_string

   # scanf de b
   call read_long_to_rax
   movq %rax, b

   # _if (b < 5)
   cmpq $5, b
   jge begin_else # b >= 5? se sim vai pro else irmão

   # _if(b < 5)
      movq $str_log1, %rax
      call print_rax_as_string

      movl a, %eax # eax = a
      shll $1, %eax # eax = eax << 1

      movl a, %ecx # ecx = a
      movslq %eax, %rcx # rcx = (long)eax
      movq b, %rdx # rdx = b
      imulq %rcx, %rdx # rdx = a * b

      movslq %eax, %rax # rax = (long)eax
      addq %rdx, %rax # rax = (a << 1) + (a * b)
      movq %rax, b # b = rax

      # printf de b
      movq b, %rax
      call print_rax_as_long
      call print_newline
      jmp end_if_a

   #}
begin_else:
   movq $str_log2, %rax
   call print_rax_as_string

   movq b, %rax
   xorq $0x1FL, %rax
   movl %eax, a

   # print de a
   movl a, %eax
   call print_eax_as_hex

end_if_a:
   movl $0, %eax
   leave
   ret