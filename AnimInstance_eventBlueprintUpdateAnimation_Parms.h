#pragma once

#include "BaseDeclarations.h"
struct AnimInstance_eventBlueprintUpdateAnimation_Parms
{
	char __padding[0x4L];
	float& DeltaTimeXField() { return *GetNativePointerField<float*>(this, "AnimInstance_eventBlueprintUpdateAnimation_Parms.DeltaTimeX"); }
};

