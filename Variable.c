//-----------------------------------------
#include "Firmware.h"

char SSEGtable[10] = {
	0B01111110,
	0B00110000,
	0B01101101,
	0B01111001,
	0B00110011,
	0B01011011,
	0B01011111,
	0B01110010,
	0B01111111,
	0B01111011 };

char SSEGdisplay[3] = { 8,8,8 };

int goalTS = 0;