#include <asm.h>

ENTRY(Bfile_WriteFile_OS)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x435

#include <jumptable.h>
