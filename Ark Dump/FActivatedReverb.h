#pragma once

#include "BaseDeclarations.h"
struct FActivatedReverb
{
	char __padding[0x20L];
	FReverbSettings& ReverbSettingsField() { return *GetNativePointerField<FReverbSettings*>(this, "FActivatedReverb.ReverbSettings"); }
	float& PriorityField() { return *GetNativePointerField<float*>(this, "FActivatedReverb.Priority"); }
};

