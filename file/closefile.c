#include <official/file.h>

int Bfile_CloseFile_OS(int);

int Bfile_CloseFile(int handle) {
	if (handle & 0xF000000) { return Bfile_CloseFile_OS(handle); }
	else { return -1; }
}
