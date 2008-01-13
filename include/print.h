#ifndef _PRINT_H_
#define _PRINT_H_ 1

#define MINI_OVER	0x10
#define MINI_OR		0x11
#define MINI_REV	0x12
#define MINI_REVOR	0x13

void	locate(int column, int row);
void	Print(const unsigned char *str);
void	PrintRev(const unsigned char *str);
void	PrintC(const unsigned char *c);
void	PrintRevC(const unsigned char *str);
void	PrintLine(const unsigned char *str, int max);
void	PrintRLine(const unsigned char *str, int max);
void	PrintXY(int x, int y, const unsigned char *str, int type);
int	PrintMini(int x, int y, const unsigned char *str, int type);

#endif
