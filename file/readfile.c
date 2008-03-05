#include <official/file.h>

int Bfile_ReadFile_OS(int, void *, int, int);

int Bfile_ReadFile(int handle, void *buffer, int size, int pos) {
	if (handle & 0xF000000) { return Bfile_ReadFile_OS(handle,buffer,size,pos); }
	else { return -1; }
}
