#pragma once

#include "BaseDeclarations.h"
struct AnimNotifyState_eventReceived_NotifyEnd_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "AnimNotifyState_eventReceived_NotifyEnd_Parms.ReturnValue"); }
};

