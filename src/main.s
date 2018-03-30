.text
.global main
_main:
pushq %rbp
movq	%rsp, %rbp
subq $56, %rsp
main:
leave
ret
