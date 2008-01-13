#include <asm.h>

ENTRY(Bfile_ReadFile_OS)
	mov.l 1f, r0
	mov.l table_address, r2
	jmp @r2
	nop
1:	.long 0x432

#include <jumptable.h>
