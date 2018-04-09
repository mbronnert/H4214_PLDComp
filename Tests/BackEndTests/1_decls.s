.text
.global _main
_toto:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
toto:
	leave
	ret
