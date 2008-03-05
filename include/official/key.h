#ifndef _KEY_H_
#define _KEY_H_

#include <keycodes.h>

extern int GetKey(unsigned int *keycode);
extern int GetKeyWait(int sel, int time, int menu, unsigned int *keycode);
extern void Bkey_Set_RepeatTime(long firstdelay, long holddelay);
extern void Bkey_Get_RepeatTime(long *firstdelay, long *holddelay);
extern void Bkey_Set_RepeatTime_Default(void);

#define KEYWAIT_HALTON_TIMEROFF		0
#define KEYWAIT_HALTOFF_TIMEROFF	1
#define KEYWAIT_HALTON_TIMERON		2

#define KEYREP_NOEVENT			0
#define KEYREP_KEYEVENT			1
#define KEYREP_TIMEREVENT		2

#endif
