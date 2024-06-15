#pragma once

#include "BaseDeclarations.h"
#include "IOnlineVoice.h"

struct FOnlineVoiceImpl : IOnlineVoice
{
	char __padding[0xc0L];
	int& MaxLocalTalkersField() { return *GetNativePointerField<int*>(this, "FOnlineVoiceImpl.MaxLocalTalkers"); }
	int& MaxRemoteTalkersField() { return *GetNativePointerField<int*>(this, "FOnlineVoiceImpl.MaxRemoteTalkers"); }
	TArray<FLocalTalker>& LocalTalkersField() { return *GetNativePointerField<TArray<FLocalTalker>*>(this, "FOnlineVoiceImpl.LocalTalkers"); }
	TArray<FRemoteTalker>& RemoteTalkersField() { return *GetNativePointerField<TArray<FRemoteTalker>*>(this, "FOnlineVoiceImpl.RemoteTalkers"); }
	float& VoiceNotificationDeltaField() { return *GetNativePointerField<float*>(this, "FOnlineVoiceImpl.VoiceNotificationDelta"); }
	FVoiceDataImpl& VoiceDataField() { return *GetNativePointerField<FVoiceDataImpl*>(this, "FOnlineVoiceImpl.VoiceData"); }

	// Functions

	void ClearVoicePackets() { NativeCall<void>(this, "FOnlineVoiceImpl.ClearVoicePackets"); }
	FRemoteTalker * FindRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<FRemoteTalker *, const FUniqueNetId *>(this, "FOnlineVoiceImpl.FindRemoteTalker", UniqueId); }
	FString * GetVoiceDebugState(FString * result) { return NativeCall<FString *, FString *>(this, "FOnlineVoiceImpl.GetVoiceDebugState", result); }
	bool Init() { return NativeCall<bool>(this, "FOnlineVoiceImpl.Init"); }
	bool IsMuted(unsigned int LocalUserNum, const FUniqueNetId * UniqueId) { return NativeCall<bool, unsigned int, const FUniqueNetId *>(this, "FOnlineVoiceImpl.IsMuted", LocalUserNum, UniqueId); }
	bool IsRemotePlayerTalking(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineVoiceImpl.IsRemotePlayerTalking", UniqueId); }
	bool MuteRemoteTalker(char LocalUserNum, const FUniqueNetId * PlayerId, bool bIsSystemWide) { return NativeCall<bool, char, const FUniqueNetId *, bool>(this, "FOnlineVoiceImpl.MuteRemoteTalker", LocalUserNum, PlayerId, bIsSystemWide); }
	void ProcessLocalVoicePackets() { NativeCall<void>(this, "FOnlineVoiceImpl.ProcessLocalVoicePackets"); }
	void ProcessMuteChangeNotification() { NativeCall<void>(this, "FOnlineVoiceImpl.ProcessMuteChangeNotification"); }
	void ProcessRemoteVoicePackets() { NativeCall<void>(this, "FOnlineVoiceImpl.ProcessRemoteVoicePackets"); }
	bool RegisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceImpl.RegisterLocalTalker", LocalUserNum); }
	bool RegisterRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineVoiceImpl.RegisterRemoteTalker", UniqueId); }
	void RemoveAllRemoteTalkers() { NativeCall<void>(this, "FOnlineVoiceImpl.RemoveAllRemoteTalkers"); }
	void StartNetworkedVoice(char LocalUserNum, bool UseSuperRange) { NativeCall<void, char, bool>(this, "FOnlineVoiceImpl.StartNetworkedVoice", LocalUserNum, UseSuperRange); }
	void StopNetworkedVoice(char LocalUserNum) { NativeCall<void, char>(this, "FOnlineVoiceImpl.StopNetworkedVoice", LocalUserNum); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FOnlineVoiceImpl.Tick", DeltaTime); }
	bool UnmuteRemoteTalker(char LocalUserNum, const FUniqueNetId * PlayerId, bool bIsSystemWide) { return NativeCall<bool, char, const FUniqueNetId *, bool>(this, "FOnlineVoiceImpl.UnmuteRemoteTalker", LocalUserNum, PlayerId, bIsSystemWide); }
	bool UnregisterLocalTalker(unsigned int LocalUserNum) { return NativeCall<bool, unsigned int>(this, "FOnlineVoiceImpl.UnregisterLocalTalker", LocalUserNum); }
	void UnregisterLocalTalkers() { NativeCall<void>(this, "FOnlineVoiceImpl.UnregisterLocalTalkers"); }
	bool UnregisterRemoteTalker(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineVoiceImpl.UnregisterRemoteTalker", UniqueId); }
	void UpdateMuteListForLocalTalker(int TalkerIndex, APlayerController * PlayerController) { NativeCall<void, int, APlayerController *>(this, "FOnlineVoiceImpl.UpdateMuteListForLocalTalker", TalkerIndex, PlayerController); }
	void RegisterLocalTalkers() { NativeCall<void>(this, "FOnlineVoiceImpl.RegisterLocalTalkers"); }
};

