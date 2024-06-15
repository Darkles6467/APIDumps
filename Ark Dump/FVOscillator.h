#pragma once

#include "BaseDeclarations.h"
struct FVOscillator
{
	char __padding[0x24L];
	FFOscillator& XField() { return *GetNativePointerField<FFOscillator*>(this, "FVOscillator.X"); }
	FFOscillator& YField() { return *GetNativePointerField<FFOscillator*>(this, "FVOscillator.Y"); }
	FFOscillator& ZField() { return *GetNativePointerField<FFOscillator*>(this, "FVOscillator.Z"); }

	// Functions

};

