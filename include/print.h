#ifndef _PRINT_H_
#define _PRINT_H_

#define MINI_OVER	0x10
#define MINI_OR		0x11
#define MINI_REV	0x12
#define MINI_REVOR	0x13

extern void	locate(int, int);
extern void	Print(const unsigned char *);
extern void	PrintRev(const unsigned char *);
extern void	PrintC(const unsigned char *);
extern void	PrintRevC(const unsigned char *);
extern void	PrintLine(const unsigned char *, int);
extern void	PrintRLine(const unsigned char *, int);
extern void	PrintMini(int, int, const unsigned char*, int);
extern void	PrintXY(int, int, const unsigned char *, int);

#ifndef ONLY_OFFICIAL_CALLS

#endif

#endif
