.text
.global _main
_main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$0, %rsp
main:
	leave
	ret
