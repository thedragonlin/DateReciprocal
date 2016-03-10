//-----------------------------------------
//專案名:倒數計日器
//日期:2016.03.10
//建立者:龍王
//-----------------------------------------
#ifndef VS
#include "Arduino.h"
#endif

 void init();
 void initVariant();

//=========================================
// 表示物件
typedef void * Object;
// 表示事件處理函式
typedef void(*EventHandler)(Object);
#define null ((void*)0)

//=========================================


#ifdef VS
#define bool char
#endif

#include <stdio.h>
#include <stdlib.h>

#include <Wire.h>
#include "Sodaq_DS3231.h"

#include "Function.h"
#include "Variable.h"
#include "struct.h"
#include "event.h"


