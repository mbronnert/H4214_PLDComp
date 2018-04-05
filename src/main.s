.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
main:
	movq	 $79,-8(%rbp)
	call	_putchar
	movq	%rax, -8(%rbp)
	movq	 $75,-16(%rbp)
	call	_putchar
	movq	%rax, -16(%rbp)
	movq	 $32,-24(%rbp)
	call	_putchar
	movq	%rax, -24(%rbp)
	leave
	ret
