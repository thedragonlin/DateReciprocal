//-----------------------------------------
#include "Firmware.h"

//=================================

// ===============================================================================================================================================
// 初始化 Timer 物件
// enabled: 設定是否正在執行計時器
// interval: 設定時間(毫秒)
// tick: 計時器間隔已耗用且計時器被啟用的事件
void InitializeTimer(Timer* object, bool enabled, float interval, EventHandler tick) {
	object->Enabled = enabled;
	object->Interval = (int)(interval * 31.25);
	object->ClockCount = 0;
	object->IsTimeup = 0;
	object->Tick = tick;
	//AllTimer[AllTimerCount++] = object;
}