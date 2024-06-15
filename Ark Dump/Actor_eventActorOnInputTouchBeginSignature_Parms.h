#pragma once

#include "BaseDeclarations.h"
struct Actor_eventActorOnInputTouchBeginSignature_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "Actor_eventActorOnInputTouchBeginSignature_Parms.FingerIndex"); }
};

