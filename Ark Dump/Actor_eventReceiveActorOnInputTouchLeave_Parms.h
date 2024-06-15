#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveActorOnInputTouchLeave_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum ETouchIndex::Type>& FingerIndexField() { return *GetNativePointerField<TEnumAsByte<enum ETouchIndex::Type>*>(this, "Actor_eventReceiveActorOnInputTouchLeave_Parms.FingerIndex"); }
};

