#pragma once

#include "BaseDeclarations.h"
struct AnimNotifyState_eventReceived_NotifyBegin_Parms
{
	char __padding[0x18L];
	float& TotalDurationField() { return *GetNativePointerField<float*>(this, "AnimNotifyState_eventReceived_NotifyBegin_Parms.TotalDuration"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "AnimNotifyState_eventReceived_NotifyBegin_Parms.ReturnValue"); }
};

