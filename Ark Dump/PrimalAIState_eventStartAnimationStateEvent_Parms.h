#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventStartAnimationStateEvent_Parms
{
	char __padding[0xcL];
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalAIState_eventStartAnimationStateEvent_Parms.CustomEventName"); }
	TEnumAsByte<enum ENetRole>& RoleField() { return *GetNativePointerField<TEnumAsByte<enum ENetRole>*>(this, "PrimalAIState_eventStartAnimationStateEvent_Parms.Role"); }
};

