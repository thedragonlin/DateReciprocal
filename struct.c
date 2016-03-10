//-----------------------------------------
#include "Firmware.h"

//=================================

// ===============================================================================================================================================
// ��l�� Timer ����
// enabled: �]�w�O�_���b����p�ɾ�
// interval: �]�w�ɶ�(�@��)
// tick: �p�ɾ����j�w�ӥΥB�p�ɾ��Q�ҥΪ��ƥ�
void InitializeTimer(Timer* object, bool enabled, float interval, EventHandler tick) {
	object->Enabled = enabled;
	object->Interval = (int)(interval * 31.25);
	object->ClockCount = 0;
	object->IsTimeup = 0;
	object->Tick = tick;
	//AllTimer[AllTimerCount++] = object;
}