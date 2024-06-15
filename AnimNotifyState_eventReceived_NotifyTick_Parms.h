#pragma once

#include "BaseDeclarations.h"
struct AnimNotifyState_eventReceived_NotifyTick_Parms
{
	char __padding[0x18L];
	float& FrameDeltaTimeField() { return *GetNativePointerField<float*>(this, "AnimNotifyState_eventReceived_NotifyTick_Parms.FrameDeltaTime"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "AnimNotifyState_eventReceived_NotifyTick_Parms.ReturnValue"); }
};

