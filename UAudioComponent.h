#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAudioComponent : USceneComponent
{
	char __padding[0xc0L];
	TArray<FAudioComponentParam>& InstanceParametersField() { return *GetNativePointerField<TArray<FAudioComponentParam>*>(this, "UAudioComponent.InstanceParameters"); }
	USoundClass * SoundClassOverrideField() { return GetNativePointerField<USoundClass *>(this, "UAudioComponent.SoundClassOverride"); }
	float& PitchModulationMinField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchModulationMin"); }
	float& PitchModulationMaxField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchModulationMax"); }
	float& VolumeModulationMinField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeModulationMin"); }
	float& VolumeModulationMaxField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeModulationMax"); }
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "UAudioComponent.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "UAudioComponent.PitchMultiplier"); }
	float& HighFrequencyGainMultiplierField() { return *GetNativePointerField<float*>(this, "UAudioComponent.HighFrequencyGainMultiplier"); }
	USoundAttenuation * AttenuationSettingsField() { return GetNativePointerField<USoundAttenuation *>(this, "UAudioComponent.AttenuationSettings"); }
	FAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FAttenuationSettings*>(this, "UAudioComponent.AttenuationOverrides"); }
	float& OcclusionCheckIntervalField() { return *GetNativePointerField<float*>(this, "UAudioComponent.OcclusionCheckInterval"); }
	float& SubtitlePriorityField() { return *GetNativePointerField<float*>(this, "UAudioComponent.SubtitlePriority"); }

	// Functions

	void Activate(bool bReset) { NativeCall<void, bool>(this, "UAudioComponent.Activate", bReset); }
	void AdjustAttenuation(const FAttenuationSettings * InAttenuationSettings) { NativeCall<void, const FAttenuationSettings *>(this, "UAudioComponent.AdjustAttenuation", InAttenuationSettings); }
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) { NativeCall<void, float, float>(this, "UAudioComponent.AdjustVolume", AdjustVolumeDuration, AdjustVolumeLevel); }
	void Deactivate() { NativeCall<void>(this, "UAudioComponent.Deactivate"); }
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime) { NativeCall<void, float, float, float>(this, "UAudioComponent.FadeIn", FadeInDuration, FadeVolumeLevel, StartTime); }
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel) { NativeCall<void, float, float>(this, "UAudioComponent.FadeOut", FadeOutDuration, FadeVolumeLevel); }
	const FAttenuationSettings * GetAttenuationSettingsToApply() { return NativeCall<const FAttenuationSettings *>(this, "UAudioComponent.GetAttenuationSettingsToApply"); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "UAudioComponent.GetDetailedInfoInternal", result); }
	void OnRegister() { NativeCall<void>(this, "UAudioComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UAudioComponent.OnUnregister"); }
	void OnUpdateTransform(bool bSkipPhysicsMove) { NativeCall<void, bool>(this, "UAudioComponent.OnUpdateTransform", bSkipPhysicsMove); }
	void Play(float StartTime) { NativeCall<void, float>(this, "UAudioComponent.Play", StartTime); }
	void PlayInternal(const float StartTime, const float FadeInDuration, const float FadeVolumeLevel) { NativeCall<void, const float, const float, const float>(this, "UAudioComponent.PlayInternal", StartTime, FadeInDuration, FadeVolumeLevel); }
	void PostLoad() { NativeCall<void>(this, "UAudioComponent.PostLoad"); }
	void SetBoolParameter(FName InName, bool InBool) { NativeCall<void, FName, bool>(this, "UAudioComponent.SetBoolParameter", InName, InBool); }
	void SetFloatParameter(FName InName, float InFloat) { NativeCall<void, FName, float>(this, "UAudioComponent.SetFloatParameter", InName, InFloat); }
	void SetIntParameter(FName InName, int InInt) { NativeCall<void, FName, int>(this, "UAudioComponent.SetIntParameter", InName, InInt); }
	void SetPitchMultiplier(float NewPitchMultiplier) { NativeCall<void, float>(this, "UAudioComponent.SetPitchMultiplier", NewPitchMultiplier); }
	void SetSound(USoundBase * NewSound) { NativeCall<void, USoundBase *>(this, "UAudioComponent.SetSound", NewSound); }
	void SetUISound(bool bInIsUISound) { NativeCall<void, bool>(this, "UAudioComponent.SetUISound", bInIsUISound); }
	void SetVolumeMultiplier(float NewVolumeMultiplier) { NativeCall<void, float>(this, "UAudioComponent.SetVolumeMultiplier", NewVolumeMultiplier); }
	void SetWaveParameter(FName InName, USoundWave * InWave) { NativeCall<void, FName, USoundWave *>(this, "UAudioComponent.SetWaveParameter", InName, InWave); }
	void Stop() { NativeCall<void>(this, "UAudioComponent.Stop"); }
	void FailedToRegisterWithWorld(UObject * Object) { NativeCall<void, UObject *>(this, "UAudioComponent.FailedToRegisterWithWorld", Object); }
};

