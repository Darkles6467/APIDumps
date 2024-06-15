#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBlueprintAnimNotifyCustomEvent_Parms
{
	char __padding[0x20L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalCharacter_eventBlueprintAnimNotifyCustomEvent_Parms.CustomEventName"); }
};

