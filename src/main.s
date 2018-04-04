.text
.global main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
main:
	movq	 $-1,16(%rbp)
	movq	 $-8,16(%rbp)
	movq	 $-1,24(%rbp)
	movq	24(%rbp), %rax
	addq	-8(%rbp), %rax
	movq 	%rax, 32(%rbp)
	movq	 $-1,40(%rbp)
	movq	-1(%rbp), %rax
	addq	40(%rbp), %rax
	movq 	%rax, 48(%rbp)
	movq	 $0,-1(%rbp)
	movq	 $-1,56(%rbp)
	movq	0(%rbp), %rax
	addq	56(%rbp), %rax
	movq 	%rax, 64(%rbp)
	movq	 $8,-1(%rbp)
	call	_-1
	movq	%rax, 0(%rbp)
	call	_-1
	movq	%rax, 8(%rbp)
	movq	 $-1,72(%rbp)
	call	_-1
	movq	%rax, 72(%rbp)
	leave
	ret
