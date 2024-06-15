#pragma once

#include "BaseDeclarations.h"
struct FROscillator
{
	char __padding[0x24L];
	FFOscillator& PitchField() { return *GetNativePointerField<FFOscillator*>(this, "FROscillator.Pitch"); }
	FFOscillator& YawField() { return *GetNativePointerField<FFOscillator*>(this, "FROscillator.Yaw"); }
	FFOscillator& RollField() { return *GetNativePointerField<FFOscillator*>(this, "FROscillator.Roll"); }

	// Functions

};

