#include <official/file.h>

int Bfile_GetFileSize_OS(int);

int Bfile_GetFileSize(int handle) {
	if ((handle & 0xF000000) >> 24 == 1) { return Bfile_GetFileSize_OS(handle); }
	else { return -1; }
}
