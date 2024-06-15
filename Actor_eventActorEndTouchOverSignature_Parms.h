#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorEndTouchOverSignature_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "Actor_eventActorEndTouchOverSignature_Parms.FingerIndex"); }
};

