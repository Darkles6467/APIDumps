#pragma once

#include "BaseDeclarations.h"
struct FPassiveSoundMixModifier
{
	char __padding[0x10L];
	USoundMix * SoundMixField() { return GetNativePointerField<USoundMix *>(this, "FPassiveSoundMixModifier.SoundMix"); }
	float& MinVolumeThresholdField() { return *GetNativePointerField<float*>(this, "FPassiveSoundMixModifier.MinVolumeThreshold"); }
	float& MaxVolumeThresholdField() { return *GetNativePointerField<float*>(this, "FPassiveSoundMixModifier.MaxVolumeThreshold"); }

	// Functions

};

