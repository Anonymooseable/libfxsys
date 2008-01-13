extern void PrintMiniSd(int, int, const unsigned char*, int);

void PrintMini(int x, int y, const unsigned char* text, int dispmode) {
	if (y > 59 || y < 0 || x < 0) { return; }
	return (void)PrintMiniSd(x,y,text,dispmode);
}
