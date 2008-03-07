#include <file.h>

extern int Bfile_OpenFile_OS(const unsigned short *, int, int);

int Bfile_OpenFile(const unsigned short *filename, int mode) {
	return Bfile_OpenFile_OS(filename, mode, 0);
}
