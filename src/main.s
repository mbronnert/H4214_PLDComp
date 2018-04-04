.text
.global main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$56, %rsp
main:
	movq	 $1,-8(%rbp)
	movq	 $2,-16(%rbp)
B1:
	movq	 $39,-32(%rbp)
	call	putchar
	movq	%rax, -32(%rbp)
B2:
	movq	 $39,-40(%rbp)
	call	putchar
	movq	%rax, -40(%rbp)
	movq	 $39,-48(%rbp)
	call	putchar
	movq	%rax, -48(%rbp)
	leave
	ret
