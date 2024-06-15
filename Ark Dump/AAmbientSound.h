#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AAmbientSound : AActor
{
	char __padding[0x20L];
	TSubobjectPtr<UAudioComponent>& AudioComponentField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "AAmbientSound.AudioComponent"); }
	bool& bOverrideAutoplayField() { return *GetNativePointerField<bool*>(this, "AAmbientSound.bOverrideAutoplay"); }
	float& DefaultVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "AAmbientSound.DefaultVolumeMultiplier"); }

	// Functions

	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) { NativeCall<void, float, float>(this, "AAmbientSound.AdjustVolume", AdjustVolumeDuration, AdjustVolumeLevel); }
	void BeginPlay() { NativeCall<void>(this, "AAmbientSound.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "AAmbientSound.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AAmbientSound.EndPlay", EndPlayReason); }
	void FadeIn(float FadeInDuration, float FadeVolumeLevel) { NativeCall<void, float, float>(this, "AAmbientSound.FadeIn", FadeInDuration, FadeVolumeLevel); }
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel) { NativeCall<void, float, float>(this, "AAmbientSound.FadeOut", FadeOutDuration, FadeVolumeLevel); }
	FString * GetInternalSoundCueName(FString * result) { return NativeCall<FString *, FString *>(this, "AAmbientSound.GetInternalSoundCueName", result); }
	void MigrateSoundNodeInstance() { NativeCall<void>(this, "AAmbientSound.MigrateSoundNodeInstance"); }
	void Play(float StartTime) { NativeCall<void, float>(this, "AAmbientSound.Play", StartTime); }
	void PostLoad() { NativeCall<void>(this, "AAmbientSound.PostLoad"); }
	void PreIncrementalRegisterComponents() { NativeCall<void>(this, "AAmbientSound.PreIncrementalRegisterComponents"); }
	void PreInitializeComponents() { NativeCall<void>(this, "AAmbientSound.PreInitializeComponents"); }
	void Stop() { NativeCall<void>(this, "AAmbientSound.Stop"); }
	void UpdateAmbientSound() { NativeCall<void>(this, "AAmbientSound.UpdateAmbientSound"); }
};

