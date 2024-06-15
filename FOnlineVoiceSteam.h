#pragma once

#include "BaseDeclarations.h"
#include "IOnlineVoice.h"

struct FOnlineVoiceSteam : IOnlineVoice
{
	char __padding[0xc0L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineVoiceSteam.SteamSubsystem"); }
	FOnlineSessionSteam * SessionIntField() { return GetNativePointerField<FOnlineSessionSteam *>(this, "FOnlineVoiceSteam.SessionInt"); }
	FOnlineIdentitySteam * IdentityIntField() { return GetNativePointerField<FOnlineIdentitySteam *>(this, "FOnlineVoiceSteam.IdentityInt"); }
	int& MaxLocalTalkersField() { return *GetNativePointerField<int*>(this, "FOnlineVoiceSteam.MaxLocalTalkers"); }
	int& MaxRemoteTalkersField() { return *GetNativePointerField<int*>(this, "FOnlineVoiceSteam.MaxRemoteTalkers"); }
	TArray<FLocalTalker>& LocalTalkersField() { return *GetNativePointerField<TArray<FLocalTalker>*>(this, "FOnlineVoiceSteam.LocalTalkers"); }
	TArray<FRemoteTalker>& RemoteTalkersField() { return *GetNativePointerField<TArray<FRemoteTalker>*>(this, "FOnlineVoiceSteam.RemoteTalkers"); }
	float& VoiceNotificationDeltaField() { return *GetNativePointerField<float*>(this, "FOnlineVoiceSteam.VoiceNotificationDelta"); }
	FVoiceDataSteam& VoiceDataField() { return *GetNativePointerField<FVoiceDataSteam*>(this, "FOnlineVoiceSteam.VoiceData"); }

	// Functions

	bool IsHeadsetPresent(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceSteam.IsHeadsetPresent", LocalUserNum); }
	void ClearVoicePackets() { NativeCall<void>(this, "FOnlineVoiceSteam.ClearVoicePackets"); }
	FRemoteTalker * FindRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<FRemoteTalker *, const FUniqueNetId *>(this, "FOnlineVoiceSteam.FindRemoteTalker", UniqueId); }
	FString * GetVoiceDebugState(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineVoiceSteam.GetVoiceDebugState", result); }
	bool Init() { return NativeCall<bool>(this, "FOnlineVoiceSteam.Init"); }
	bool IsLocalPlayerTalking(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceSteam.IsLocalPlayerTalking", LocalUserNum); }
	bool IsMuted(unsigned int LocalUserNum, const FUniqueNetId * UniqueId) { return NativeCall<bool, unsigned int, const FUniqueNetId *>(this, "FOnlineVoiceSteam.IsMuted", LocalUserNum, UniqueId); }
	bool MuteRemoteTalker(char LocalUserNum, const FUniqueNetId * PlayerId, bool bIsSystemWide) { return NativeCall<bool, char, const FUniqueNetId *, bool>(this, "FOnlineVoiceSteam.MuteRemoteTalker", LocalUserNum, PlayerId, bIsSystemWide); }
	void ProcessLocalVoicePackets() { NativeCall<void>(this, "FOnlineVoiceSteam.ProcessLocalVoicePackets"); }
	void ProcessMuteChangeNotification() { NativeCall<void>(this, "FOnlineVoiceSteam.ProcessMuteChangeNotification"); }
	void ProcessRemoteVoicePackets() { NativeCall<void>(this, "FOnlineVoiceSteam.ProcessRemoteVoicePackets"); }
	bool RegisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceSteam.RegisterLocalTalker", LocalUserNum); }
	bool RegisterRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineVoiceSteam.RegisterRemoteTalker", UniqueId); }
	void RemoveAllRemoteTalkers() { NativeCall<void>(this, "FOnlineVoiceSteam.RemoveAllRemoteTalkers"); }
	void SetAttenuationFallOffAndScale(float fallOff, float SuperRangeFallOff, float WhisperRangeFalloff, float scale) { NativeCall<void, float, float, float, float>(this, "FOnlineVoiceSteam.SetAttenuationFallOffAndScale", fallOff, SuperRangeFallOff, WhisperRangeFalloff, scale); }
	void StartNetworkedVoice(char LocalUserNum, bool UseSuperRange) { NativeCall<void, char, bool>(this, "FOnlineVoiceSteam.StartNetworkedVoice", LocalUserNum, UseSuperRange); }
	void StopNetworkedVoice(char LocalUserNum) { NativeCall<void, char>(this, "FOnlineVoiceSteam.StopNetworkedVoice", LocalUserNum); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FOnlineVoiceSteam.Tick", DeltaTime); }
	bool UnmuteRemoteTalker(char LocalUserNum, const FUniqueNetId * PlayerId, bool bIsSystemWide) { return NativeCall<bool, char, const FUniqueNetId *, bool>(this, "FOnlineVoiceSteam.UnmuteRemoteTalker", LocalUserNum, PlayerId, bIsSystemWide); }
	bool UnregisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceSteam.UnregisterLocalTalker", LocalUserNum); }
	void UnregisterLocalTalkers() { NativeCall<void>(this, "FOnlineVoiceSteam.UnregisterLocalTalkers"); }
	bool UnregisterRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineVoiceSteam.UnregisterRemoteTalker", UniqueId); }
	void UpdateMuteListForLocalTalker(int TalkerIndex, APlayerController * PlayerController) { NativeCall<void, int, APlayerController *>(this, "FOnlineVoiceSteam.UpdateMuteListForLocalTalker", TalkerIndex, PlayerController); }
};

