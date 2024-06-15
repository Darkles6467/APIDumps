#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientStopForceFeedback_Parms
{
	char __padding[0x10L];
	UForceFeedbackEffect * ForceFeedbackEffectField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "PlayerController_eventClientStopForceFeedback_Parms.ForceFeedbackEffect"); }
	FName& TagField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientStopForceFeedback_Parms.Tag"); }
};

