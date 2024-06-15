#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct USoundBase : UObject
{
	char __padding[0x30L];
	FName& SoundClass_DEPRECATEDField() { return *GetNativePointerField<FName*>(this, "USoundBase.SoundClass_DEPRECATED"); }
	USoundClass * SoundClassObjectField() { return GetNativePointerField<USoundClass *>(this, "USoundBase.SoundClassObject"); }
	TEnumAsByte<enum EMaxConcurrentResolutionRule::Type>& MaxConcurrentResolutionRuleField() { return *GetNativePointerField<TEnumAsByte<enum EMaxConcurrentResolutionRule::Type>*>(this, "USoundBase.MaxConcurrentResolutionRule"); }
	int& MaxConcurrentPlayCountField() { return *GetNativePointerField<int*>(this, "USoundBase.MaxConcurrentPlayCount"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "USoundBase.Duration"); }
	USoundAttenuation * AttenuationSettingsField() { return GetNativePointerField<USoundAttenuation *>(this, "USoundBase.AttenuationSettings"); }
	int& CurrentPlayCountField() { return *GetNativePointerField<int*>(this, "USoundBase.CurrentPlayCount"); }

	// Functions

	const FAttenuationSettings * GetAttenuationSettingsToApply() { return NativeCall<const FAttenuationSettings *>(this, "USoundBase.GetAttenuationSettingsToApply"); }
	bool IsAudibleSimple(const FVector Location, USoundAttenuation * AttenuationSettings, FAttenuationSettings * OverrideAttenuationSettings) { return NativeCall<bool, const FVector, USoundAttenuation *, FAttenuationSettings *>(this, "USoundBase.IsAudibleSimple", Location, AttenuationSettings, OverrideAttenuationSettings); }
	void PostInitProperties() { NativeCall<void>(this, "USoundBase.PostInitProperties"); }
	float GetPitchMultiplier(int ElementIndex) { return NativeCall<float, int>(this, "USoundBase.GetPitchMultiplier", ElementIndex); }
};

