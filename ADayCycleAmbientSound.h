#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADayCycleAmbientSound : AActor
{
	char __padding[0x30L];
	TSubobjectPtr<UAudioComponent>& AudioComponentDayField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "ADayCycleAmbientSound.AudioComponentDay"); }
	TSubobjectPtr<UAudioComponent>& AudioComponentNightField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "ADayCycleAmbientSound.AudioComponentNight"); }
	float& DayTimeSoundMorningFadeInStartField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundMorningFadeInStart"); }
	float& DayTimeSoundMorningFadeInEndField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundMorningFadeInEnd"); }
	float& DayTimeSoundEveningFadeOutStartField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundEveningFadeOutStart"); }
	float& DayTimeSoundEveningFadeOutEndField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayTimeSoundEveningFadeOutEnd"); }
	float& DayLengthMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.DayLengthMultiplier"); }
	float& CurrentPostprocessAmbienceLerpField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.CurrentPostprocessAmbienceLerp"); }
	float& CurrentExtraVolumeMultiplierField() { return *GetNativePointerField<float*>(this, "ADayCycleAmbientSound.CurrentExtraVolumeMultiplier"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "ADayCycleAmbientSound.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "ADayCycleAmbientSound.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "ADayCycleAmbientSound.EndPlay", EndPlayReason); }
	void PostLoad() { NativeCall<void>(this, "ADayCycleAmbientSound.PostLoad"); }
	void UpdateDayCycleSounds(float DayTime) { NativeCall<void, float>(this, "ADayCycleAmbientSound.UpdateDayCycleSounds", DayTime); }
};

