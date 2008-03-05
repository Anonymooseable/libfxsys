#include <official/file.h>

int Bfile_WriteFile_OS(int, void*, int);

int Bfile_WriteFile(int handle, void* buffer, int size) {
	if (handle & 0xF000000) { return Bfile_WriteFile_OS(handle, buffer, size); }
	else { return -1; }
}
