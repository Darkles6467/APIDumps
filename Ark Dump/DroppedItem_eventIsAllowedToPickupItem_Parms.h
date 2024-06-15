#pragma once

#include "BaseDeclarations.h"
struct DroppedItem_eventIsAllowedToPickupItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "DroppedItem_eventIsAllowedToPickupItem_Parms.ReturnValue"); }
};

