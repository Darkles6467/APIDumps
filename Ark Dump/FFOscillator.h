#pragma once

#include "BaseDeclarations.h"
struct FFOscillator
{
	char __padding[0xcL];
	float& AmplitudeField() { return *GetNativePointerField<float*>(this, "FFOscillator.Amplitude"); }
	float& FrequencyField() { return *GetNativePointerField<float*>(this, "FFOscillator.Frequency"); }
	TEnumAsByte<enum EInitialOscillatorOffset>& InitialOffsetField() { return *GetNativePointerField<TEnumAsByte<enum EInitialOscillatorOffset>*>(this, "FFOscillator.InitialOffset"); }

	// Functions

};

