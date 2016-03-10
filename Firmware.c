//-----------------------------------------
//專案名:倒數計日器
//日期:2016.03.10
//建立者:龍王
//-----------------------------------------

#include "Firmware.h"

void setup() {
	Serial.begin(57600);
	Wire.begin();
	rtc.begin();

}

void loop() {

	//開機測試
	for (char i = 0; i < 255; i++) {
		ScanSSEG();
	}

	CalculateDays();
}
