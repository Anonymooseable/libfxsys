#include <asm.h>

ENTRY(Bdisp_SetPoint_DD)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x147

ENTRY(Bdisp_SetPoint_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x146

ENTRY(Bdisp_SetPoint_DDVRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x148

#include <jumptable.h>
