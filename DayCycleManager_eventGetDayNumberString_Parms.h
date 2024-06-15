#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventGetDayNumberString_Parms
{
	char __padding[0x18L];
	bool& bIncludeDayStringField() { return *GetNativePointerField<bool*>(this, "DayCycleManager_eventGetDayNumberString_Parms.bIncludeDayString"); }
	FString& ReturnValueField() { return *GetNativePointerField<FString*>(this, "DayCycleManager_eventGetDayNumberString_Parms.ReturnValue"); }
};

