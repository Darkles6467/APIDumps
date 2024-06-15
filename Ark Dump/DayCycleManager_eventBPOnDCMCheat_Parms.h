#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPOnDCMCheat_Parms
{
	char __padding[0xcL];
	FName& CheatNameField() { return *GetNativePointerField<FName*>(this, "DayCycleManager_eventBPOnDCMCheat_Parms.CheatName"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventBPOnDCMCheat_Parms.Value"); }
};

