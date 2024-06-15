#pragma once

#include "BaseDeclarations.h"
struct FAudioEffectsManager
{
	char __padding[0x160L];
	bool& bEffectsInitialisedField() { return *GetNativePointerField<bool*>(this, "FAudioEffectsManager.bEffectsInitialised"); }
	UReverbEffect * CurrentReverbAssetField() { return GetNativePointerField<UReverbEffect *>(this, "FAudioEffectsManager.CurrentReverbAsset"); }
	FAudioReverbEffect& SourceReverbEffectField() { return *GetNativePointerField<FAudioReverbEffect*>(this, "FAudioEffectsManager.SourceReverbEffect"); }
	FAudioReverbEffect& CurrentReverbEffectField() { return *GetNativePointerField<FAudioReverbEffect*>(this, "FAudioEffectsManager.CurrentReverbEffect"); }
	FAudioReverbEffect& DestinationReverbEffectField() { return *GetNativePointerField<FAudioReverbEffect*>(this, "FAudioEffectsManager.DestinationReverbEffect"); }
	USoundMix * CurrentEQMixField() { return GetNativePointerField<USoundMix *>(this, "FAudioEffectsManager.CurrentEQMix"); }
	FAudioEQEffect& SourceEQEffectField() { return *GetNativePointerField<FAudioEQEffect*>(this, "FAudioEffectsManager.SourceEQEffect"); }
	FAudioEQEffect& CurrentEQEffectField() { return *GetNativePointerField<FAudioEQEffect*>(this, "FAudioEffectsManager.CurrentEQEffect"); }
	FAudioEQEffect& DestinationEQEffectField() { return *GetNativePointerField<FAudioEQEffect*>(this, "FAudioEffectsManager.DestinationEQEffect"); }

	// Functions

	void ClearMixSettings() { NativeCall<void>(this, "FAudioEffectsManager.ClearMixSettings"); }
	void Interpolate(FAudioEQEffect * Current, const FAudioEQEffect * Start, const FAudioEQEffect * End) { NativeCall<void, FAudioEQEffect *, const FAudioEQEffect *, const FAudioEQEffect *>(this, "FAudioEffectsManager.Interpolate", Current, Start, End); }
	void Interpolate(FAudioReverbEffect * Current, const FAudioReverbEffect * Start, const FAudioReverbEffect * End) { NativeCall<void, FAudioReverbEffect *, const FAudioReverbEffect *, const FAudioReverbEffect *>(this, "FAudioEffectsManager.Interpolate", Current, Start, End); }
	void SetMixSettings(USoundMix * NewMix, bool bIgnorePriority) { NativeCall<void, USoundMix *, bool>(this, "FAudioEffectsManager.SetMixSettings", NewMix, bIgnorePriority); }
	void SetReverbSettings(const FReverbSettings * ReverbSettings) { NativeCall<void, const FReverbSettings *>(this, "FAudioEffectsManager.SetReverbSettings", ReverbSettings); }
	void Update() { NativeCall<void>(this, "FAudioEffectsManager.Update"); }
	__int64 VolumeToMilliBels(float Volume, int MaxMilliBels) { return NativeCall<__int64, float, int>(this, "FAudioEffectsManager.VolumeToMilliBels", Volume, MaxMilliBels); }
};

struct FXAudio2EffectsManager : FAudioEffectsManager
{
	char __padding[0x40L];
	FXAudio2Device * XAudio2DeviceField() { return GetNativePointerField<FXAudio2Device *>(this, "FXAudio2EffectsManager.XAudio2Device"); }
	IXAudio2SubmixVoice * DryPremasterVoiceField() { return GetNativePointerField<IXAudio2SubmixVoice *>(this, "FXAudio2EffectsManager.DryPremasterVoice"); }
	IXAudio2SubmixVoice * EQPremasterVoiceField() { return GetNativePointerField<IXAudio2SubmixVoice *>(this, "FXAudio2EffectsManager.EQPremasterVoice"); }
	IXAudio2SubmixVoice * ReverbEffectVoiceField() { return GetNativePointerField<IXAudio2SubmixVoice *>(this, "FXAudio2EffectsManager.ReverbEffectVoice"); }
	IXAudio2SubmixVoice * RadioEffectVoiceField() { return GetNativePointerField<IXAudio2SubmixVoice *>(this, "FXAudio2EffectsManager.RadioEffectVoice"); }

	// Functions

	bool CreateEQPremasterVoices() { return NativeCall<bool>(this, "FXAudio2EffectsManager.CreateEQPremasterVoices"); }
	bool CreateRadioVoice() { return NativeCall<bool>(this, "FXAudio2EffectsManager.CreateRadioVoice"); }
	bool CreateReverbVoice() { return NativeCall<bool>(this, "FXAudio2EffectsManager.CreateReverbVoice"); }
	void SetEQEffectParameters(const FAudioEQEffect * EQEffectParameters) { NativeCall<void, const FAudioEQEffect *>(this, "FXAudio2EffectsManager.SetEQEffectParameters", EQEffectParameters); }
	void SetRadioEffectParameters(const FAudioRadioEffect * RadioEffectParameters) { NativeCall<void, const FAudioRadioEffect *>(this, "FXAudio2EffectsManager.SetRadioEffectParameters", RadioEffectParameters); }
	void SetReverbEffectParameters(const FAudioReverbEffect * ReverbEffectParameters) { NativeCall<void, const FAudioReverbEffect *>(this, "FXAudio2EffectsManager.SetReverbEffectParameters", ReverbEffectParameters); }
};

