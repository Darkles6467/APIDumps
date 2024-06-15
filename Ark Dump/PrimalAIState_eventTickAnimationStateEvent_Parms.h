#pragma once

#include "BaseDeclarations.h"
struct PrimalAIState_eventTickAnimationStateEvent_Parms
{
	char __padding[0x10L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalAIState_eventTickAnimationStateEvent_Parms.DeltaTime"); }
	FName& CustomEventNameField() { return *GetNativePointerField<FName*>(this, "PrimalAIState_eventTickAnimationStateEvent_Parms.CustomEventName"); }
	TEnumAsByte<enum ENetRole>& RoleField() { return *GetNativePointerField<TEnumAsByte<enum ENetRole>*>(this, "PrimalAIState_eventTickAnimationStateEvent_Parms.Role"); }
};

