#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventDayCycleManagerOnDayChange_Parms
{
	char __padding[0x4L];
	int& DayNumberField() { return *GetNativePointerField<int*>(this, "DayCycleManager_eventDayCycleManagerOnDayChange_Parms.DayNumber"); }
};

