#ifndef _KEY_H_
#define _KEY_H_

#include <keycodes.h>

int GetKey(unsigned int *keycode);
int GetKeyWait(int sel, int time, int menu, unsigned int *keycode);

#define KEYWAIT_HALTON_TIMEROFF		0
#define KEYWAIT_HALTOFF_TIMEROFF	1
#define KEYWAIT_HALTON_TIMERON		2

#define KEYREP_NOEVENT			0
#define KEYREP_KEYEVENT			1
#define KEYREP_TIMEREVENT		2

#endif
