#include <asm.h>

ENTRY(Bdisp_AreaClr_DD)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x14a

ENTRY(Bdisp_AreaClr_VRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x14b

ENTRY(Bdisp_AreaClr_DDVRAM)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x14c

#include <jumptable.h>
