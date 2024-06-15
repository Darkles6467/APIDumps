#pragma once

#include "BaseDeclarations.h"
#include "FExec.h"

struct FAudioDevice : FExec
{
	char __padding[0x250L];
	int& MaxChannelsField() { return *GetNativePointerField<int*>(this, "FAudioDevice.MaxChannels"); }
	int& CommonAudioPoolSizeField() { return *GetNativePointerField<int*>(this, "FAudioDevice.CommonAudioPoolSize"); }
	void * CommonAudioPoolField() { return GetNativePointerField<void *>(this, "FAudioDevice.CommonAudioPool"); }
	int& CommonAudioPoolFreeBytesField() { return *GetNativePointerField<int*>(this, "FAudioDevice.CommonAudioPoolFreeBytes"); }
	TArray<FListener>& ListenersField() { return *GetNativePointerField<TArray<FListener>*>(this, "FAudioDevice.Listeners"); }
	unsigned __int64& CurrentTickField() { return *GetNativePointerField<unsigned __int64*>(this, "FAudioDevice.CurrentTick"); }
	TWeakObjectPtr<UAudioComponent>& TestAudioComponentField() { return *GetNativePointerField<TWeakObjectPtr<UAudioComponent>*>(this, "FAudioDevice.TestAudioComponent"); }
	TEnumAsByte<enum EDebugState>& DebugStateField() { return *GetNativePointerField<TEnumAsByte<enum EDebugState>*>(this, "FAudioDevice.DebugState"); }
	float& TransientMasterVolumeField() { return *GetNativePointerField<float*>(this, "FAudioDevice.TransientMasterVolume"); }
	float& LastUpdateTimeField() { return *GetNativePointerField<float*>(this, "FAudioDevice.LastUpdateTime"); }
	int& NextResourceIDField() { return *GetNativePointerField<int*>(this, "FAudioDevice.NextResourceID"); }
	USoundMix * BaseSoundMixField() { return GetNativePointerField<USoundMix *>(this, "FAudioDevice.BaseSoundMix"); }
	USoundMix * DefaultBaseSoundMixField() { return GetNativePointerField<USoundMix *>(this, "FAudioDevice.DefaultBaseSoundMix"); }
	const AReverbVolume * CurrentReverbVolumeField() { return GetNativePointerField<const AReverbVolume *>(this, "FAudioDevice.CurrentReverbVolume"); }
	const FActivatedReverb * HighestPriorityReverbField() { return GetNativePointerField<const FActivatedReverb *>(this, "FAudioDevice.HighestPriorityReverb"); }
	TArray<FActiveSound *>& ActiveSoundsField() { return *GetNativePointerField<TArray<FActiveSound *>*>(this, "FAudioDevice.ActiveSounds"); }
	TArray<USoundMix *>& PrevPassiveSoundMixModifiersField() { return *GetNativePointerField<TArray<USoundMix *>*>(this, "FAudioDevice.PrevPassiveSoundMixModifiers"); }

	// Functions

	void ActivateReverbEffect(UReverbEffect * ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime) { NativeCall<void, UReverbEffect *, FName, float, float, float>(this, "FAudioDevice.ActivateReverbEffect", ReverbEffect, TagName, Priority, Volume, FadeTime); }
	FActiveSound * AddNewActiveSound(const FActiveSound * NewActiveSound) { return NativeCall<FActiveSound *, const FActiveSound *>(this, "FAudioDevice.AddNewActiveSound", NewActiveSound); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "FAudioDevice.AddReferencedObjects", Collector); }
	void ApplyClassAdjusters(USoundMix * SoundMix, float InterpValue) { NativeCall<void, USoundMix *, float>(this, "FAudioDevice.ApplyClassAdjusters", SoundMix, InterpValue); }
	bool ApplySoundMix(USoundMix * NewMix, FSoundMixState * SoundMixState) { return NativeCall<bool, USoundMix *, FSoundMixState *>(this, "FAudioDevice.ApplySoundMix", NewMix, SoundMixState); }
	void ClearSoundMix(USoundMix * SoundMix) { NativeCall<void, USoundMix *>(this, "FAudioDevice.ClearSoundMix", SoundMix); }
	void ClearSoundMixModifiers() { NativeCall<void>(this, "FAudioDevice.ClearSoundMixModifiers"); }
	void CountBytes(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FAudioDevice.CountBytes", Ar); }
	static UAudioComponent * CreateComponent(USoundBase * Sound, UWorld * World, AActor * Actor, bool bPlay, bool bStopWhenOwnerDestroyed, const FVector * Location, USoundAttenuation * AttenuationSettings) { return NativeCall<UAudioComponent *, USoundBase *, UWorld *, AActor *, bool, bool, const FVector *, USoundAttenuation *>(nullptr, "FAudioDevice.CreateComponent", Sound, World, Actor, bPlay, bStopWhenOwnerDestroyed, Location, AttenuationSettings); }
	void DeactivateReverbEffect(FName TagName) { NativeCall<void, FName>(this, "FAudioDevice.DeactivateReverbEffect", TagName); }
	void EnableRadioEffect(bool bEnable) { NativeCall<void, bool>(this, "FAudioDevice.EnableRadioEffect", bEnable); }
	FActiveSound * FindActiveSound(UAudioComponent * AudioComponent) { return NativeCall<FActiveSound *, UAudioComponent *>(this, "FAudioDevice.FindActiveSound", AudioComponent); }
	USoundMix * FindNextHighestEQPrioritySoundMix(USoundMix * IgnoredSoundMix) { return NativeCall<USoundMix *, USoundMix *>(this, "FAudioDevice.FindNextHighestEQPrioritySoundMix", IgnoredSoundMix); }
	void Flush(UWorld * WorldToFlush, bool bClearActivatedReverb) { NativeCall<void, UWorld *, bool>(this, "FAudioDevice.Flush", WorldToFlush, bClearActivatedReverb); }
	void FreeBufferResource(FSoundBuffer * Buffer) { NativeCall<void, FSoundBuffer *>(this, "FAudioDevice.FreeBufferResource", Buffer); }
	void FreeResource(USoundWave * SoundWave) { NativeCall<void, USoundWave *>(this, "FAudioDevice.FreeResource", SoundWave); }
	float GetLowPassFilterResonance() { return NativeCall<float>(this, "FAudioDevice.GetLowPassFilterResonance"); }
	EDebugState GetMixDebugState() { return NativeCall<EDebugState>(this, "FAudioDevice.GetMixDebugState"); }
	FName * GetRuntimeFormat(FName * result, USoundWave * SoundWave) { return NativeCall<FName *, FName *, USoundWave *>(this, "FAudioDevice.GetRuntimeFormat", result, SoundWave); }
	int GetSortedActiveWaveInstances(TArray<FWaveInstance *> * WaveInstances, const ESortedActiveWaveGetType::Type GetType) { return NativeCall<int, TArray<FWaveInstance *> *, const ESortedActiveWaveGetType::Type>(this, "FAudioDevice.GetSortedActiveWaveInstances", WaveInstances, GetType); }
	FSoundClassProperties * GetSoundClassCurrentProperties(USoundClass * InSoundClass) { return NativeCall<FSoundClassProperties *, USoundClass *>(this, "FAudioDevice.GetSoundClassCurrentProperties", InSoundClass); }
	bool Init() { return NativeCall<bool>(this, "FAudioDevice.Init"); }
	void InitSoundClasses() { NativeCall<void>(this, "FAudioDevice.InitSoundClasses"); }
	void InitSoundSources() { NativeCall<void>(this, "FAudioDevice.InitSoundSources"); }
	void InvalidateCachedInteriorVolumes() { NativeCall<void>(this, "FAudioDevice.InvalidateCachedInteriorVolumes"); }
	bool LocationIsAudible(FVector Location, float MaxDistance) { return NativeCall<bool, FVector, float>(this, "FAudioDevice.LocationIsAudible", Location, MaxDistance); }
	void ParseSoundClasses() { NativeCall<void>(this, "FAudioDevice.ParseSoundClasses"); }
	void PopSoundMixModifier(USoundMix * SoundMix, bool bIsPassive) { NativeCall<void, USoundMix *, bool>(this, "FAudioDevice.PopSoundMixModifier", SoundMix, bIsPassive); }
	void Precache(USoundWave * SoundWave, bool bSynchronous, bool bTrackMemory) { NativeCall<void, USoundWave *, bool, bool>(this, "FAudioDevice.Precache", SoundWave, bSynchronous, bTrackMemory); }
	void PrecacheStartupSounds() { NativeCall<void>(this, "FAudioDevice.PrecacheStartupSounds"); }
	void PushSoundMixModifier(USoundMix * SoundMix, bool bIsPassive) { NativeCall<void, USoundMix *, bool>(this, "FAudioDevice.PushSoundMixModifier", SoundMix, bIsPassive); }
	void RecurseIntoSoundClasses(USoundClass * CurrentClass, FSoundClassProperties * ParentProperties) { NativeCall<void, USoundClass *, FSoundClassProperties *>(this, "FAudioDevice.RecurseIntoSoundClasses", CurrentClass, ParentProperties); }
	void RecursiveApplyAdjuster(const FSoundClassAdjuster * InAdjuster, USoundClass * InSoundClass) { NativeCall<void, const FSoundClassAdjuster *, USoundClass *>(this, "FAudioDevice.RecursiveApplyAdjuster", InAdjuster, InSoundClass); }
	void RemoveActiveSound(FActiveSound * ActiveSound) { NativeCall<void, FActiveSound *>(this, "FAudioDevice.RemoveActiveSound", ActiveSound); }
	void RemoveClass(USoundClass * SoundClass) { NativeCall<void, USoundClass *>(this, "FAudioDevice.RemoveClass", SoundClass); }
	void RemoveSoundMix(USoundMix * SoundMix) { NativeCall<void, USoundMix *>(this, "FAudioDevice.RemoveSoundMix", SoundMix); }
	bool SetBaseSoundMix(USoundMix * NewMix) { return NativeCall<bool, USoundMix *>(this, "FAudioDevice.SetBaseSoundMix", NewMix); }
	void SetClassVolume(USoundClass * InSoundClass, const float Volume) { NativeCall<void, USoundClass *, const float>(this, "FAudioDevice.SetClassVolume", InSoundClass, Volume); }
	void SetDefaultBaseSoundMix(USoundMix * SoundMix) { NativeCall<void, USoundMix *>(this, "FAudioDevice.SetDefaultBaseSoundMix", SoundMix); }
	void SetListener(const int InViewportIndex, const FTransform * InListenerTransform, const float InDeltaSeconds, AReverbVolume * Volume, const FInteriorSettings * InteriorSettings) { NativeCall<void, const int, const FTransform *, const float, AReverbVolume *, const FInteriorSettings *>(this, "FAudioDevice.SetListener", InViewportIndex, InListenerTransform, InDeltaSeconds, Volume, InteriorSettings); }
	void SetMaxChannels(int InMaxChannels) { NativeCall<void, int>(this, "FAudioDevice.SetMaxChannels", InMaxChannels); }
	void SetReverbSettings(AReverbVolume * Volume, const FReverbSettings * ReverbSettings) { NativeCall<void, AReverbVolume *, const FReverbSettings *>(this, "FAudioDevice.SetReverbSettings", Volume, ReverbSettings); }
	void StartSources(TArray<FWaveInstance *> * WaveInstances, int FirstActiveIndex, bool bGameTicking) { NativeCall<void, TArray<FWaveInstance *> *, int, bool>(this, "FAudioDevice.StartSources", WaveInstances, FirstActiveIndex, bGameTicking); }
	void StopAllSounds(bool bShouldStopUISounds) { NativeCall<void, bool>(this, "FAudioDevice.StopAllSounds", bShouldStopUISounds); }
	void StopSoundsUsingResource(USoundWave * SoundWave, TArray<UAudioComponent *> * StoppedComponents) { NativeCall<void, USoundWave *, TArray<UAudioComponent *> *>(this, "FAudioDevice.StopSoundsUsingResource", SoundWave, StoppedComponents); }
	void StopSources(TArray<FWaveInstance *> * WaveInstances, int FirstActiveIndex) { NativeCall<void, TArray<FWaveInstance *> *, int>(this, "FAudioDevice.StopSources", WaveInstances, FirstActiveIndex); }
	void Teardown() { NativeCall<void>(this, "FAudioDevice.Teardown"); }
	void TrackResource(USoundWave * Wave, FSoundBuffer * Buffer) { NativeCall<void, USoundWave *, FSoundBuffer *>(this, "FAudioDevice.TrackResource", Wave, Buffer); }
	bool TryClearingEQSoundMix(USoundMix * SoundMix) { return NativeCall<bool, USoundMix *>(this, "FAudioDevice.TryClearingEQSoundMix", SoundMix); }
	bool TryClearingSoundMix(USoundMix * SoundMix, FSoundMixState * SoundMixState) { return NativeCall<bool, USoundMix *, FSoundMixState *>(this, "FAudioDevice.TryClearingSoundMix", SoundMix, SoundMixState); }
	void Update(bool bGameTicking) { NativeCall<void, bool>(this, "FAudioDevice.Update", bGameTicking); }
	void UpdateHighestPriorityReverb() { NativeCall<void>(this, "FAudioDevice.UpdateHighestPriorityReverb"); }
	void UpdatePassiveSoundMixModifiers(TArray<FWaveInstance *> * WaveInstances, int FirstActiveIndex) { NativeCall<void, TArray<FWaveInstance *> *, int>(this, "FAudioDevice.UpdatePassiveSoundMixModifiers", WaveInstances, FirstActiveIndex); }
	void UpdateSoundClassProperties() { NativeCall<void>(this, "FAudioDevice.UpdateSoundClassProperties"); }
	void UpdateSoundMix(USoundMix * SoundMix, FSoundMixState * SoundMixState) { NativeCall<void, USoundMix *, FSoundMixState *>(this, "FAudioDevice.UpdateSoundMix", SoundMix, SoundMixState); }
};

struct FXAudio2Device : FAudioDevice
{
	char __padding[0x58L];
	FMatrix& InverseTransformField() { return *GetNativePointerField<FMatrix*>(this, "FXAudio2Device.InverseTransform"); }
	bool& bComInitializedField() { return *GetNativePointerField<bool*>(this, "FXAudio2Device.bComInitialized"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FXAudio2Device.Exec", InWorld, Cmd, Ar); }
	static bool GetOutputMatrix(unsigned int ChannelMask, unsigned int NumChannels) { return NativeCall<bool, unsigned int, unsigned int>(nullptr, "FXAudio2Device.GetOutputMatrix", ChannelMask, NumChannels); }
	FName * GetRuntimeFormat(FName * result, USoundWave * SoundWave) { return NativeCall<FName *, FName *, USoundWave *>(this, "FXAudio2Device.GetRuntimeFormat", result, SoundWave); }
	void TeardownHardware() { NativeCall<void>(this, "FXAudio2Device.TeardownHardware"); }
	void UpdateHardware() { NativeCall<void>(this, "FXAudio2Device.UpdateHardware"); }
	bool ValidateAPICall(const wchar_t * Function, int ErrorCode) { return NativeCall<bool, const wchar_t *, int>(this, "FXAudio2Device.ValidateAPICall", Function, ErrorCode); }
};

