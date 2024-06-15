#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAnimNotifyCustomState_Begin_Parms
{
	char __padding[0x28L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_eventBPAnimNotifyCustomState_Begin_Parms.CustomEventName"); }
	float& TotalDurationField() { return *GetNativePointerField<float*>(this, "PrimalBuff_eventBPAnimNotifyCustomState_Begin_Parms.TotalDuration"); }
};

