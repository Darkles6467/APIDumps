#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundMix : UObject
{
	char __padding[0x50L];
	float& EQPriorityField() { return *GetNativePointerField<float*>(this, "USoundMix.EQPriority"); }
	FAudioEQEffect& EQSettingsField() { return *GetNativePointerField<FAudioEQEffect*>(this, "USoundMix.EQSettings"); }
	TArray<FSoundClassAdjuster>& SoundClassEffectsField() { return *GetNativePointerField<TArray<FSoundClassAdjuster>*>(this, "USoundMix.SoundClassEffects"); }
	float& InitialDelayField() { return *GetNativePointerField<float*>(this, "USoundMix.InitialDelay"); }
	float& FadeInTimeField() { return *GetNativePointerField<float*>(this, "USoundMix.FadeInTime"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "USoundMix.Duration"); }
	float& FadeOutTimeField() { return *GetNativePointerField<float*>(this, "USoundMix.FadeOutTime"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "USoundMix.BeginDestroy"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "USoundMix.GetDesc", result); }
};

