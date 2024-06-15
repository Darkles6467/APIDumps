#pragma once

#include "BaseDeclarations.h"
struct AnimNotify_eventReceived_Notify_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "AnimNotify_eventReceived_Notify_Parms.ReturnValue"); }
};

