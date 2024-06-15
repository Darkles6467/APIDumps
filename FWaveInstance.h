#pragma once

#include "BaseDeclarations.h"
struct FWaveInstance
{
	char __padding[0x90L];
	USoundClass * SoundClassField() { return GetNativePointerField<USoundClass *>(this, "FWaveInstance.SoundClass"); }
	FNotifyBufferFinishedHooks& NotifyBufferFinishedHooksField() { return *GetNativePointerField<FNotifyBufferFinishedHooks*>(this, "FWaveInstance.NotifyBufferFinishedHooks"); }
	FActiveSound * ActiveSoundField() { return GetNativePointerField<FActiveSound *>(this, "FWaveInstance.ActiveSound"); }
	float& VolumeField() { return *GetNativePointerField<float*>(this, "FWaveInstance.Volume"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "FWaveInstance.VolumeMultiplier"); }
	float& PlayPriorityField() { return *GetNativePointerField<float*>(this, "FWaveInstance.PlayPriority"); }
	float& VoiceCenterChannelVolumeField() { return *GetNativePointerField<float*>(this, "FWaveInstance.VoiceCenterChannelVolume"); }
	float& RadioFilterVolumeField() { return *GetNativePointerField<float*>(this, "FWaveInstance.RadioFilterVolume"); }
	float& RadioFilterVolumeThresholdField() { return *GetNativePointerField<float*>(this, "FWaveInstance.RadioFilterVolumeThreshold"); }
	float& StereoBleedField() { return *GetNativePointerField<float*>(this, "FWaveInstance.StereoBleed"); }
	float& LFEBleedField() { return *GetNativePointerField<float*>(this, "FWaveInstance.LFEBleed"); }
	ELoopingMode& LoopingModeField() { return *GetNativePointerField<ELoopingMode*>(this, "FWaveInstance.LoopingMode"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FWaveInstance.StartTime"); }
	EAudioOutputTarget::Type& OutputTargetField() { return *GetNativePointerField<EAudioOutputTarget::Type*>(this, "FWaveInstance.OutputTarget"); }
	float& HighFrequencyGainField() { return *GetNativePointerField<float*>(this, "FWaveInstance.HighFrequencyGain"); }
	float& PitchField() { return *GetNativePointerField<float*>(this, "FWaveInstance.Pitch"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FWaveInstance.Velocity"); }
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FWaveInstance.Location"); }
	float& OmniRadiusField() { return *GetNativePointerField<float*>(this, "FWaveInstance.OmniRadius"); }
	unsigned int& TypeHashField() { return *GetNativePointerField<unsigned int*>(this, "FWaveInstance.TypeHash"); }
	unsigned __int64& WaveInstanceHashField() { return *GetNativePointerField<unsigned __int64*>(this, "FWaveInstance.WaveInstanceHash"); }
	char& UserIndexField() { return *GetNativePointerField<char*>(this, "FWaveInstance.UserIndex"); }

	// Functions

	float GetActualVolume() { return NativeCall<float>(this, "FWaveInstance.GetActualVolume"); }
	void NotifyFinished(const bool bStopped) { NativeCall<void, const bool>(this, "FWaveInstance.NotifyFinished", bStopped); }
};

