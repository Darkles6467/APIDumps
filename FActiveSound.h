#pragma once

#include "BaseDeclarations.h"
#include "FListener.h"

struct FActiveSound
{
	char __padding[0x1e0L];
	TWeakObjectPtr<UWorld>& WorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "FActiveSound.World"); }
	TWeakObjectPtr<UAudioComponent>& AudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "FActiveSound.AudioComponent"); }
	USoundClass * SoundClassOverrideField() { return GetNativePointerField<USoundClass *>(this, "FActiveSound.SoundClassOverride"); }
	char& UserIndexField() { return *GetNativePointerField<char*>(this, "FActiveSound.UserIndex"); }
	float& PlaybackTimeField() { return *GetNativePointerField<float*>(this, "FActiveSound.PlaybackTime"); }
	float& RequestedStartTimeField() { return *GetNativePointerField<float*>(this, "FActiveSound.RequestedStartTime"); }
	float& CurrentAdjustVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "FActiveSound.CurrentAdjustVolumeMultiplier"); }
	float& TargetAdjustVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "FActiveSound.TargetAdjustVolumeMultiplier"); }
	float& TargetAdjustVolumeStopTimeField() { return *GetNativePointerField<float*>(this, "FActiveSound.TargetAdjustVolumeStopTime"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "FActiveSound.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "FActiveSound.PitchMultiplier"); }
	float& HighFrequencyGainMultiplierField() { return *GetNativePointerField<float*>(this, "FActiveSound.HighFrequencyGainMultiplier"); }
	float& SubtitlePriorityField() { return *GetNativePointerField<float*>(this, "FActiveSound.SubtitlePriority"); }
	float& OcclusionCheckIntervalField() { return *GetNativePointerField<float*>(this, "FActiveSound.OcclusionCheckInterval"); }
	float& LastOcclusionCheckTimeField() { return *GetNativePointerField<float*>(this, "FActiveSound.LastOcclusionCheckTime"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FActiveSound.Transform"); }
	FVector& LastLocationField() { return *GetNativePointerField<FVector*>(this, "FActiveSound.LastLocation"); }
	FAttenuationSettings& AttenuationSettingsField() { return *GetNativePointerField<FAttenuationSettings*>(this, "FActiveSound.AttenuationSettings"); }
	FInteriorSettings& LastInteriorSettingsField() { return *GetNativePointerField<FInteriorSettings*>(this, "FActiveSound.LastInteriorSettings"); }
	AReverbVolume * LastReverbVolumeField() { return GetNativePointerField<AReverbVolume *>(this, "FActiveSound.LastReverbVolume"); }
	long double& LastUpdateTimeField() { return *GetNativePointerField<long double*>(this, "FActiveSound.LastUpdateTime"); }
	float& SourceInteriorVolumeField() { return *GetNativePointerField<float*>(this, "FActiveSound.SourceInteriorVolume"); }
	float& SourceInteriorLPFField() { return *GetNativePointerField<float*>(this, "FActiveSound.SourceInteriorLPF"); }
	float& CurrentInteriorVolumeField() { return *GetNativePointerField<float*>(this, "FActiveSound.CurrentInteriorVolume"); }
	float& CurrentInteriorLPFField() { return *GetNativePointerField<float*>(this, "FActiveSound.CurrentInteriorLPF"); }
	TArray<unsigned char>& SoundNodeDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FActiveSound.SoundNodeData"); }
	TArray<FAudioComponentParam>& InstanceParametersField() { return *GetNativePointerField<TArray<FAudioComponentParam>*>(this, "FActiveSound.InstanceParameters"); }

	// Functions

	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FActiveSound.AddReferencedObjects", Collector); }
	void ApplyRadioFilter(FAudioDevice * AudioDevice, const FSoundParseParameters * ParseParams) { NativeCall<void, FAudioDevice *, const FSoundParseParameters *>(this, "FActiveSound.ApplyRadioFilter", AudioDevice, ParseParams); }
	void CheckOcclusion(const FVector ListenerLocation, const FVector SoundLocation) { NativeCall<void, const FVector, const FVector>(this, "FActiveSound.CheckOcclusion", ListenerLocation, SoundLocation); }
	int FindClosestListener(const TArray<FListener> * InListeners) { return NativeCall<int, const TArray<FListener> *>(this, "FActiveSound.FindClosestListener", InListeners); }
	FWaveInstance * FindWaveInstance(const unsigned __int64 WaveInstanceHash) { return NativeCall<FWaveInstance *, const unsigned __int64>(this, "FActiveSound.FindWaveInstance", WaveInstanceHash); }
	bool GetBoolParameter(const FName InName, bool * OutBool) { return NativeCall<bool, const FName, bool *>(this, "FActiveSound.GetBoolParameter", InName, OutBool); }
	bool GetFloatParameter(const FName InName, float * OutFloat) { return NativeCall<bool, const FName, float *>(this, "FActiveSound.GetFloatParameter", InName, OutFloat); }
	int GetIntParameter(const FName InName, int * OutInt) { return NativeCall<int, const FName, int *>(this, "FActiveSound.GetIntParameter", InName, OutInt); }
	bool GetWaveParameter(const FName InName, USoundWave ** OutWave) { return NativeCall<bool, const FName, USoundWave **>(this, "FActiveSound.GetWaveParameter", InName, OutWave); }
	void HandleInteriorVolumes(const FListener * Listener, FSoundParseParameters * ParseParams) { NativeCall<void, const FListener *, FSoundParseParameters *>(this, "FActiveSound.HandleInteriorVolumes", Listener, ParseParams); }
	void SetBoolParameter(const FName InName, const bool InBool) { NativeCall<void, const FName, const bool>(this, "FActiveSound.SetBoolParameter", InName, InBool); }
	void SetFloatParameter(const FName InName, const float InFloat) { NativeCall<void, const FName, const float>(this, "FActiveSound.SetFloatParameter", InName, InFloat); }
	void SetIntParameter(const FName InName, const int InInt) { NativeCall<void, const FName, const int>(this, "FActiveSound.SetIntParameter", InName, InInt); }
	void SetWaveParameter(const FName InName, USoundWave * InWave) { NativeCall<void, const FName, USoundWave *>(this, "FActiveSound.SetWaveParameter", InName, InWave); }
	void Stop(FAudioDevice * AudioDevice) { NativeCall<void, FAudioDevice *>(this, "FActiveSound.Stop", AudioDevice); }
	void UpdateWaveInstances(FAudioDevice * AudioDevice, TArray<FWaveInstance *> * InWaveInstances, const float DeltaTime) { NativeCall<void, FAudioDevice *, TArray<FWaveInstance *> *, const float>(this, "FActiveSound.UpdateWaveInstances", AudioDevice, InWaveInstances, DeltaTime); }
};

