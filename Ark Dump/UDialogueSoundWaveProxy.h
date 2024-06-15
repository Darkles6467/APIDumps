#pragma once

#include "BaseDeclarations.h"
#include "USoundBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDialogueSoundWaveProxy : USoundBase
{
	char __padding[0x18L];
	TArray<FSubtitleCue>& SubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "UDialogueSoundWaveProxy.Subtitles"); }

	// Functions

	const FAttenuationSettings * GetAttenuationSettingsToApply() { return NativeCall<const FAttenuationSettings *>(this, "UDialogueSoundWaveProxy.GetAttenuationSettingsToApply"); }
	float GetDuration() { return NativeCall<float>(this, "UDialogueSoundWaveProxy.GetDuration"); }
	float GetMaxAudibleDistance() { return NativeCall<float>(this, "UDialogueSoundWaveProxy.GetMaxAudibleDistance"); }
	float GetPitchMultiplier() { return NativeCall<float>(this, "UDialogueSoundWaveProxy.GetPitchMultiplier"); }
	float GetVolumeMultiplier() { return NativeCall<float>(this, "UDialogueSoundWaveProxy.GetVolumeMultiplier"); }
	bool IsPlayable() { return NativeCall<bool>(this, "UDialogueSoundWaveProxy.IsPlayable"); }
	void Parse(FAudioDevice * AudioDevice, const unsigned __int64 NodeWaveInstanceHash, FActiveSound * ActiveSound, const FSoundParseParameters * ParseParams, TArray<FWaveInstance *> * WaveInstances) { NativeCall<void, FAudioDevice *, const unsigned __int64, FActiveSound *, const FSoundParseParameters *, TArray<FWaveInstance *> *>(this, "UDialogueSoundWaveProxy.Parse", AudioDevice, NodeWaveInstanceHash, ActiveSound, ParseParams, WaveInstances); }
};

