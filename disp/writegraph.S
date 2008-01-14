#include <asm.h>

ENTRY(Bdisp_WriteGraph_DD)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x1d

ENTRY(Bdisp_WriteGraph_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x1c

ENTRY(Bdisp_WriteGraph_DDVRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x1e

#include <jumptable.h>
