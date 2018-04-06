.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$112, %rsp
main:
	movq	 $79,-32(%rbp)
	movq	 $75,-56(%rbp)
	movq	 $92,-72(%rbp)
	movl	-16(%rbp), %edi
	call	_putchar
	movq	%rax, -88(%rbp)
	movl	-24(%rbp), %edi
	call	_putchar
	movq	%rax, -96(%rbp)
	movl	-8(%rbp), %edi
	call	_putchar
	movq	%rax, -104(%rbp)
	leave
	ret
