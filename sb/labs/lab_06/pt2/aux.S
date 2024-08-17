.data
   .globl str
   str: .asciz "BEBAMUITOCAFE"

# Definição da variável 'str' aqui...
.text

.globl process

process:
   pushq %rbp
   movq  %rsp, %rbp

   # Inicialização de 'ptr' aqui...
   # ptr = str
   movq $str, %r8

beginwhile:

   cmpb $0, (%r8)
   je endwhile            # while() {
   # Bloco do while
   #movb (%r8), %dil
   addb $32, (%r8) 
   incq %r8

   jmp beginwhile         # }

endwhile:

   leave
   ret