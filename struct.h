//-----------------------------------------

//========================================


//========================================
typedef struct Timer {
	bool Enabled;
	// 取得或設定時間(週期數)
	int Interval;
	// 取得或設定週期數
	int ClockCount;
	// 取得或設定時間是否以耗用
	bool IsTimeup;
	// 發生於指定的計時器間隔已耗用且計時器被啟用
	EventHandler Tick;
}
Timer;

// 初始化 Timer 物件
// enabled: 設定是否正在執行計時器
// interval: 設定時間(毫秒)
// tick: 計時器間隔已耗用且計時器被啟用的事件
void InitializeTimer(Timer* object, bool enabled, float interval, EventHandler tick);