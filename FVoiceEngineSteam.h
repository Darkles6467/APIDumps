#pragma once

#include "BaseDeclarations.h"
#include "IVoiceEngine.h"

struct FVoiceEngineSteam : IVoiceEngine
{
	char __padding[0xb0L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FVoiceEngineSteam.SteamSubsystem"); }
	ISteamUser * SteamUserPtrField() { return GetNativePointerField<ISteamUser *>(this, "FVoiceEngineSteam.SteamUserPtr"); }
	ISteamFriends * SteamFriendsPtrField() { return GetNativePointerField<ISteamFriends *>(this, "FVoiceEngineSteam.SteamFriendsPtr"); }
	int& OwningUserIndexField() { return *GetNativePointerField<int*>(this, "FVoiceEngineSteam.OwningUserIndex"); }
	unsigned int& CompressedBytesAvailableField() { return *GetNativePointerField<unsigned int*>(this, "FVoiceEngineSteam.CompressedBytesAvailable"); }
	EVoiceResult& AvailableVoiceResultField() { return *GetNativePointerField<EVoiceResult*>(this, "FVoiceEngineSteam.AvailableVoiceResult"); }
	bool& bPendingFinalCaptureField() { return *GetNativePointerField<bool*>(this, "FVoiceEngineSteam.bPendingFinalCapture"); }
	bool& bIsCapturingField() { return *GetNativePointerField<bool*>(this, "FVoiceEngineSteam.bIsCapturing"); }
	TArray<unsigned char>& CompressedVoiceBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoiceEngineSteam.CompressedVoiceBuffer"); }
	TArray<unsigned char>& DecompressedVoiceBufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FVoiceEngineSteam.DecompressedVoiceBuffer"); }
	FVoiceEngineSteam::FVoiceSerializeHelper * SerializeHelperField() { return GetNativePointerField<FVoiceEngineSteam::FVoiceSerializeHelper *>(this, "FVoiceEngineSteam.SerializeHelper"); }
	float& AttenuationFallOffField() { return *GetNativePointerField<float*>(this, "FVoiceEngineSteam.AttenuationFallOff"); }
	float& AttenuationSuperRangeFallOffField() { return *GetNativePointerField<float*>(this, "FVoiceEngineSteam.AttenuationSuperRangeFallOff"); }
	float& AttenuationWhisperRangeFallOffField() { return *GetNativePointerField<float*>(this, "FVoiceEngineSteam.AttenuationWhisperRangeFallOff"); }
	float& AttenuationScaleField() { return *GetNativePointerField<float*>(this, "FVoiceEngineSteam.AttenuationScale"); }

	// Functions

	void FVoiceSerializeHelper(FVoiceEngineSteam * InVoiceEngine) { NativeCall<void, FVoiceEngineSteam *>(this, "FVoiceEngineSteam.FVoiceSerializeHelper", InVoiceEngine); }
	unsigned int GetVoiceDataReadyFlags() { return NativeCall<unsigned int>(this, "FVoiceEngineSteam.GetVoiceDataReadyFlags"); }
	FString * GetVoiceDebugState(FString * result) { return NativeCall<FString *, FString *>(this, "FVoiceEngineSteam.GetVoiceDebugState", result); }
	bool Init(int MaxLocalTalkers, int MaxRemoteTalkers) { return NativeCall<bool, int, int>(this, "FVoiceEngineSteam.Init", MaxLocalTalkers, MaxRemoteTalkers); }
	bool IsHeadsetPresent(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FVoiceEngineSteam.IsHeadsetPresent", LocalUserNum); }
	bool IsRemotePlayerTalking(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FVoiceEngineSteam.IsRemotePlayerTalking", UniqueId); }
	void OnAudioFinished(UAudioComponent * AC) { NativeCall<void, UAudioComponent *>(this, "FVoiceEngineSteam.OnAudioFinished", AC); }
	unsigned int ReadLocalVoiceData(unsigned int LocalUserNum, char * Data, unsigned int * Size) { return NativeCall<unsigned int, unsigned int, char *, unsigned int *>(this, "FVoiceEngineSteam.ReadLocalVoiceData", LocalUserNum, Data, Size); }
	unsigned int RegisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineSteam.RegisterLocalTalker", LocalUserNum); }
	void SetAttenuationFallOffAndScale(float fallOff, float SuperRangeFallOff, float WhisperRangeFalloff, float scale) { NativeCall<void, float, float, float, float>(this, "FVoiceEngineSteam.SetAttenuationFallOffAndScale", fallOff, SuperRangeFallOff, WhisperRangeFalloff, scale); }
	unsigned int StartLocalVoiceProcessing(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineSteam.StartLocalVoiceProcessing", LocalUserNum); }
	void StartRecording() { NativeCall<void>(this, "FVoiceEngineSteam.StartRecording"); }
	unsigned int StopLocalVoiceProcessing(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineSteam.StopLocalVoiceProcessing", LocalUserNum); }
	void StoppedRecording() { NativeCall<void>(this, "FVoiceEngineSteam.StoppedRecording"); }
	unsigned int SubmitRemoteVoiceData(const FUniqueNetId * RemoteTalkerId, char * Data, unsigned int * Size, char PlaybackFlags, bool bUseSuperRange) { return NativeCall<unsigned int, const FUniqueNetId *, char *, unsigned int *, char, bool>(this, "FVoiceEngineSteam.SubmitRemoteVoiceData", RemoteTalkerId, Data, Size, PlaybackFlags, bUseSuperRange); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FVoiceEngineSteam.Tick", DeltaTime); }
	void TickTalkers(float DeltaTime) { NativeCall<void, float>(this, "FVoiceEngineSteam.TickTalkers", DeltaTime); }
	unsigned int UnregisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<unsigned int, unsigned int>(this, "FVoiceEngineSteam.UnregisterLocalTalker", LocalUserNum); }
};

