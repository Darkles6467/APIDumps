#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventClientSetViewTarget_Parms
{
	char __padding[0x18L];
	FViewTargetTransitionParams& TransitionParamsField() { return *GetNativePointerField<FViewTargetTransitionParams*>(this, "PlayerController_eventClientSetViewTarget_Parms.TransitionParams"); }
};

