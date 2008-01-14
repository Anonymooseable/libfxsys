#include <asm.h>

ENTRY(Bdisp_ClearLineVRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x31

#include <jumptable.h>
