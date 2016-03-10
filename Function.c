//-----------------------------------------
#include "Firmware.h"

#ifdef VS
char PORTA;
char PORTB;
#endif

//掃描七段顯示器
void ScanSSEG(void) {
	for (char t = 0; t < 100; t++) {
		for (char i = 0; i < 3; i++) {
			PORTA = SSEGtable[SSEGdisplay[i]];
			PORTB = i;
			delay(10);
		}
	} 
}

//計算天數並轉換存入SSEGdisplay
void CalculateDays(void) {
	//使用Arduino Lib
	
	DateTime now = rtc.now(); //get the current date-time
	uint32_t nowTS = now.getEpoch();
	
	//---------------
	//int nowTS = 100;
	nowTS -= goalTS;
	int days = (goalTS - nowTS) / 86400;
	//轉換天數成各個位數
	SSEGdisplay[0] = days % 10;
	days /= 10;
	SSEGdisplay[1] = days % 10;
	days /= 10;
	SSEGdisplay[2] = days;
}
