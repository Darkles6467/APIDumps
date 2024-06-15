#pragma once

#include "BaseDeclarations.h"
struct FAmbientSoundSlot
{
	char __padding[0x20L];
	UDEPRECATED_SoundNodeWave * Wave_DEPRECATEDField() { return GetNativePointerField<UDEPRECATED_SoundNodeWave *>(this, "FAmbientSoundSlot.Wave_DEPRECATED"); }
	float& PitchScaleField() { return *GetNativePointerField<float*>(this, "FAmbientSoundSlot.PitchScale"); }
	float& VolumeScaleField() { return *GetNativePointerField<float*>(this, "FAmbientSoundSlot.VolumeScale"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FAmbientSoundSlot.Weight"); }

	// Functions

};

