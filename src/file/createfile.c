#include <file.h>

extern int Bfile_CreateEntry_OS(const unsigned short*, int, int*);

int Bfile_CreateFile(const unsigned short *filename, int size) {
	return Bfile_CreateEntry_OS(filename, 1, &size);
}
