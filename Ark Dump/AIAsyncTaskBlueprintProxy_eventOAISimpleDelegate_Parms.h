#pragma once

#include "BaseDeclarations.h"
struct AIAsyncTaskBlueprintProxy_eventOAISimpleDelegate_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EPathFollowingResult::Type>& MovementResultField() { return *GetNativePointerField<TEnumAsByte<enum EPathFollowingResult::Type>*>(this, "AIAsyncTaskBlueprintProxy_eventOAISimpleDelegate_Parms.MovementResult"); }
};

