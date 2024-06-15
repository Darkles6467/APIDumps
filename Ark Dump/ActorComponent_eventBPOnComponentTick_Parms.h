#pragma once

#include "BaseDeclarations.h"
struct ActorComponent_eventBPOnComponentTick_Parms
{
	char __padding[0x4L];
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "ActorComponent_eventBPOnComponentTick_Parms.DeltaTime"); }
};

