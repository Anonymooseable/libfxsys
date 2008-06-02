#include <asm.h>

ENTRY(syscall)
	mov.l	sc_addr, r2
	mov.l	@r15, r0
	jmp	@r2
	nop

SYSCALL_ADDRESS
