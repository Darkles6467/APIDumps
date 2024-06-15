#pragma once

#include "BaseDeclarations.h"
struct DayCycleManager_eventBPOverrideGameStateMatineePlayRate_Parms
{
	char __padding[0x10L];
	float& inPlayRateField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventBPOverrideGameStateMatineePlayRate_Parms.inPlayRate"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "DayCycleManager_eventBPOverrideGameStateMatineePlayRate_Parms.ReturnValue"); }
};

