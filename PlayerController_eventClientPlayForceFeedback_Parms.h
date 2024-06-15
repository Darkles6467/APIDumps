#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientPlayForceFeedback_Parms
{
	char __padding[0x18L];
	UForceFeedbackEffect * ForceFeedbackEffectField() { return GetNativePointerField<UForceFeedbackEffect *>(this, "PlayerController_eventClientPlayForceFeedback_Parms.ForceFeedbackEffect"); }
	bool& bLoopingField() { return *GetNativePointerField<bool*>(this, "PlayerController_eventClientPlayForceFeedback_Parms.bLooping"); }
	FName& TagField() { return *GetNativePointerField<FName*>(this, "PlayerController_eventClientPlayForceFeedback_Parms.Tag"); }
};

