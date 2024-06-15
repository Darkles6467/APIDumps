#pragma once

#include "BaseDeclarations.h"
#include "USoundBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundCue : USoundBase
{
	char __padding[0x88L];
	float& VolumeMultiplierField() { return *GetNativePointerField<float*>(this, "USoundCue.VolumeMultiplier"); }
	float& PitchMultiplierField() { return *GetNativePointerField<float*>(this, "USoundCue.PitchMultiplier"); }
	FAttenuationSettings& AttenuationOverridesField() { return *GetNativePointerField<FAttenuationSettings*>(this, "USoundCue.AttenuationOverrides"); }
	char& SubtitleColorIndexField() { return *GetNativePointerField<char*>(this, "USoundCue.SubtitleColorIndex"); }
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "USoundCue.Subtitles"); }
	TArray<FLocalizedSpokenText>& LocalizedSpokenTextsField() { return *GetNativePointerField<TArray<FLocalizedSpokenText>*>(this, "USoundCue.LocalizedSpokenTexts"); }
	FStringAssetReference& AnimTextureField() { return *GetNativePointerField<FStringAssetReference*>(this, "USoundCue.AnimTexture"); }
	float& MaxAudibleDistanceField() { return *GetNativePointerField<float*>(this, "USoundCue.MaxAudibleDistance"); }

	// Functions

	float GetPitchMultiplier() { return NativeCall<float>(this, "USoundCue.GetPitchMultiplier"); }
	const FAttenuationSettings * GetAttenuationSettingsToApply() { return NativeCall<const FAttenuationSettings *>(this, "USoundCue.GetAttenuationSettingsToApply"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "USoundCue.GetDesc", result); }
	float GetDuration() { return NativeCall<float>(this, "USoundCue.GetDuration"); }
	float GetMaxAudibleDistance() { return NativeCall<float>(this, "USoundCue.GetMaxAudibleDistance"); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "USoundCue.GetResourceSize", Mode); }
	int GetResourceSizeForFormat(FName Format) { return NativeCall<int, FName>(this, "USoundCue.GetResourceSizeForFormat", Format); }
	float GetVolumeMultiplier() { return NativeCall<float>(this, "USoundCue.GetVolumeMultiplier"); }
	bool IsPlayable() { return NativeCall<bool>(this, "USoundCue.IsPlayable"); }
	void Parse(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "USoundCue.Parse", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

