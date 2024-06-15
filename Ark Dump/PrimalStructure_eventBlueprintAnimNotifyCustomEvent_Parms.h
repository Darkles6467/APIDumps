#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBlueprintAnimNotifyCustomEvent_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBlueprintAnimNotifyCustomEvent_Parms.CustomEventName"); }
};

