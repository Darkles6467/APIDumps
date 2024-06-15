#pragma once

#include "BaseDeclarations.h"
struct OverlayAnimationData
{
	char __padding[0x10L];
	float& CurrentTimerField() { return *GetNativePointerField<float*>(this, "OverlayAnimationData.CurrentTimer"); }
};

