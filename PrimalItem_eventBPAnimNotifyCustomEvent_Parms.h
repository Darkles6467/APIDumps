#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPAnimNotifyCustomEvent_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventBPAnimNotifyCustomEvent_Parms.CustomEventName"); }
};

