#ifndef _DISP_H_
#define _DISP_H_

/* defines and structs */

#define SAVEDISP_PAGE1	1
#define SAVEDISP_PAGE2	5
#define SAVEDISP_PAGE3	6

#define WRITEKIND_OVER	0x01
#define WRITEKIND_OR	0x02
#define WRITEKIND_AND	0x03
#define WRITEKIND_XOR	0x04

#define WRITEMODIFY_NORMAL	0x01
#define WRITEMODIFY_REVERSE	0x02
#define WRITEMODIFY_MESH	0x03

typedef struct tag_DISPBOX {
	int left;
	int top;
	int right;
	int bottom;
} DISPBOX;

typedef struct tag_GRAPHDATA {
	int width;
	int height;
	unsigned char *pBitmap;
} GRAPHDATA;

typedef struct tag_DISPGRAPH {
	int x;
	int y;
	GRAPHDATA GraphData;
	unsigned char WriteModify;
	unsigned char WriteKind;
} DISPGRAPH;

/* function declarations */

extern void Bdisp_AllClr_DD(void);
extern void Bdisp_AllClr_VRAM(void);
extern void Bdisp_AllClr_DDVRAM(void);
extern void Bdisp_AreaClr_DD(const DISPBOX *pArea);
extern void Bdisp_AreaClr_VRAM(const DISPBOX *pArea);
extern void Bdisp_AreaClr_DDVRAM(const DISPBOX *pArea);
extern void Bdisp_AreaReverseVRAM(int x1, int y1, int x2, int y2);
extern void Bdisp_ClearLineVRAM(int x1, int y1, int x2, int y2);
extern void Bdisp_DrawLineVRAM(int x1, int y1, int x2, int y2);
extern void Bdisp_GetDisp_DD(unsigned char *pData);
extern void Bdisp_GetDisp_VRAM(unsigned char *pData);
extern int  Bdisp_GetPoint_VRAM(int x, int y);
extern void PopUpWin(int n);
extern void Bdisp_PutDispArea_DD(const DISPBOX *PutDispArea);
extern void Bdisp_PutDisp_DD(void);
extern void Bdisp_ReadArea_VRAM(const DISPBOX *ReadArea, unsigned char *ReadData);
extern void RestoreDisp(unsigned char num);
extern void SaveDisp(unsigned char num);
extern void Bdisp_SetPoint_DD(int x, int y, unsigned char point);
extern void Bdisp_SetPoint_VRAM(int x, int y, unsigned char point);
extern void Bdisp_SetPoint_DDVRAM(int x, int y, unsigned char point);
extern void Bdisp_WriteGraph_DD(const DISPGRAPH *WriteGraph);
extern void Bdisp_WriteGraph_VRAM(const DISPGRAPH *WriteGraph);
extern void Bdisp_WriteGraph_DDVRAM(const DISPGRAPH *WriteGraph);

#endif
