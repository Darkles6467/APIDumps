#pragma once

#include "BaseDeclarations.h"
struct PrimalAIStateBPBase_eventBPOnAnimNotifyCustomEvent_Parms
{
	char __padding[0x18L];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalAIStateBPBase_eventBPOnAnimNotifyCustomEvent_Parms.CustomEventName"); }
	TEnumAsByte<enum ENetRole>& RoleField() { return *GetNativePointerField<TEnumAsByte<enum ENetRole>*>(this, "PrimalAIStateBPBase_eventBPOnAnimNotifyCustomEvent_Parms.Role"); }
};

