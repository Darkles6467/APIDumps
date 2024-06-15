#pragma once

#include "BaseDeclarations.h"
struct FSoundClassAdjuster
{
	char __padding[0x20L];
	FName& SoundClass_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "FSoundClassAdjuster.SoundClass_DEPRECATED"); }
	USoundClass * SoundClassObjectField() { return GetNativePointerField<USoundClass *>(this, "FSoundClassAdjuster.SoundClassObject"); }
	float& VolumeAdjusterField() { return *GetNativePointerField<float*>(this, "FSoundClassAdjuster.VolumeAdjuster"); }
	float& PitchAdjusterField() { return *GetNativePointerField<float*>(this, "FSoundClassAdjuster.PitchAdjuster"); }
	float& VoiceCenterChannelVolumeAdjusterField() { return *GetNativePointerField<float*>(this, "FSoundClassAdjuster.VoiceCenterChannelVolumeAdjuster"); }

	// Functions

};

