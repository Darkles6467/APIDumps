#pragma once

#include "BaseDeclarations.h"
struct PlayerController_eventServerViewSelf_Parms
{
	char __padding[0x10L];
	FViewTargetTransitionParams& TransitionParamsField() { return *GetNativePointerField<FViewTargetTransitionParams*>(this, "PlayerController_eventServerViewSelf_Parms.TransitionParams"); }
};

