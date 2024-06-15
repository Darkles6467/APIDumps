#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPAnimNotifyCustomEvent_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_eventBPAnimNotifyCustomEvent_Parms.CustomEventName"); }
};

