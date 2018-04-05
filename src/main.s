.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$24, %rsp
main:
	movq	 $79,-16(%rbp)
	movl	-16(%rbp), %edi
	call	_putchar
	movq	%rax, -8(%rbp)
	leave
	ret
