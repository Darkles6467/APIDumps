#pragma once

#include "BaseDeclarations.h"
struct AIController_eventAIMoveCompletedSignature_Parms
{
	char __padding[0x8L];
	FAIRequestID& RequestIDField() { return *GetNativePointerField<FAIRequestID*>(this, "AIController_eventAIMoveCompletedSignature_Parms.RequestID"); }
	TEnumAsByte<enum EPathFollowingResult::Type>& ResultField() { return *GetNativePointerField<TEnumAsByte<enum EPathFollowingResult::Type>*>(this, "AIController_eventAIMoveCompletedSignature_Parms.Result"); }
};

