.text
.global _main
_fact:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
fact:
	movq	 $1,-8(%rbp)
	movq	-1(%rbp), %rax
	cmp		-16(%rbp), %rax
B1:
	movq	 $1,-24(%rbp)
	movq	-24(%rbp), %rax
B2:
	movq	 $1,-32(%rbp)
	movq	-1(%rbp), %rax
subq	-32(%rbp), %rax
	movq 	%rax, -40(%rbp)
	call	_fact
	movq	%rax, -40(%rbp)
	movq	-1(%rbp), %rax
	leave
	ret
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
main:
	movq	 $5,-8(%rbp)
	call	_fact
	movq	%rax, -8(%rbp)
	leave
	ret
