#include <asm.h>

ENTRY(PrintXY)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x9ad

#include <jumptable.h>
