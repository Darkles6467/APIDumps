#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPAnimNotifyCustomState_End_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventBPAnimNotifyCustomState_End_Parms.CustomEventName"); }
};

