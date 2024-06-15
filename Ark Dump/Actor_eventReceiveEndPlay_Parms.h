#pragma once

#include "BaseDeclarations.h"
struct Actor_eventReceiveEndPlay_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EEndPlayReason::Type>& EndPlayReasonField() { return *GetNativePointerField<TEnumAsByte<enum EEndPlayReason::Type>*>(this, "Actor_eventReceiveEndPlay_Parms.EndPlayReason"); }
};

