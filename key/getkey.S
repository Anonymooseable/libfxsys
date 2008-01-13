#include <asm.h>

ENTRY(GetKey)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x90f

#include <jumptable.h>
