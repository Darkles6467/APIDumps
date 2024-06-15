#pragma once

#include "BaseDeclarations.h"
struct FSoundTrackKey
{
	char __padding[0x18L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FSoundTrackKey.Time"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FSoundTrackKey.Volume"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "FSoundTrackKey.Pitch"); }

	// Functions

};

