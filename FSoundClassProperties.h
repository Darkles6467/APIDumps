#pragma once

#include "BaseDeclarations.h"
struct FSoundClassProperties
{
	char __padding[0x24L];
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.Volume"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.Pitch"); }
	float& StereoBleedField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.StereoBleed"); }
	float& LFEBleedField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.LFEBleed"); }
	float& VoiceCenterChannelVolumeField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.VoiceCenterChannelVolume"); }
	float& RadioFilterVolumeField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.RadioFilterVolume"); }
	float& RadioFilterVolumeThresholdField() { return *GetNativePointerField<float*>(this, "FSoundClassProperties.RadioFilterVolumeThreshold"); }
	TEnumAsByte<enum EAudioOutputTarget::Type>& OutputTargetField() { return *GetNativePointerField<TEnumAsByte<enum EAudioOutputTarget::Type>*>(this, "FSoundClassProperties.OutputTarget"); }

	// Functions

	FSoundClassProperties * operator=(const FSoundClassProperties * __that) { return NativeCall<FSoundClassProperties *, const FSoundClassProperties *>(this, "FSoundClassProperties.operator=", __that); }
};

