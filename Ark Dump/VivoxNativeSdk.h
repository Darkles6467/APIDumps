#pragma once

#include "BaseDeclarations.h"
struct VivoxNativeSdk
{
	char __padding[0x20L];
	VivoxNativeSdk::SdkEventRaised& EventSdkEventRaisedField() { return *GetNativePointerField<VivoxNativeSdk::SdkEventRaised*>(this, "VivoxNativeSdk.EventSdkEventRaised"); }

	// Functions

	static VivoxNativeSdk * Get() { return NativeCall<VivoxNativeSdk *>(nullptr, "VivoxNativeSdk.Get"); }
	static FString * GetJoinToken(FString * result, const AccountId * account, const ChannelId * channel, const FString * key, const FTimespan * expiration) { return NativeCall<FString *, FString *, const AccountId *, const ChannelId *, const FString *, const FTimespan *>(nullptr, "VivoxNativeSdk.GetJoinToken", result, account, channel, key, expiration); }
	static FString * GetLoginToken(FString * result, const AccountId * account, const FString * key, const FTimespan * expiration) { return NativeCall<FString *, FString *, const AccountId *, const FString *, const FTimespan *>(nullptr, "VivoxNativeSdk.GetLoginToken", result, account, key, expiration); }
	static FString * GetMuteForAllToken(FString * result, const AccountId * account, const ChannelId * channel, const AccountId * subject, const FString * key, const FTimespan * expiration) { return NativeCall<FString *, FString *, const AccountId *, const ChannelId *, const AccountId *, const FString *, const FTimespan *>(nullptr, "VivoxNativeSdk.GetMuteForAllToken", result, account, channel, subject, key, expiration); }
	static FString * GetTranscriptionToken(FString * result, const AccountId * account, const ChannelId * channel, const FString * key, const FTimespan * expiration) { return NativeCall<FString *, FString *, const AccountId *, const ChannelId *, const FString *, const FTimespan *>(nullptr, "VivoxNativeSdk.GetTranscriptionToken", result, account, channel, key, expiration); }
	void Logout(const FString * accountHandle) { NativeCall<void, const FString *>(this, "VivoxNativeSdk.Logout", accountHandle); }
	int Set3DPosition(const FString * sessionHandle, const FVector * speakerPosition, const FVector * listenerPosition, const FVector * listenerForwardVector, const FVector * listenerUpVector) { return NativeCall<int, const FString *, const FVector *, const FVector *, const FVector *, const FVector *>(this, "VivoxNativeSdk.Set3DPosition", sessionHandle, speakerPosition, listenerPosition, listenerForwardVector, listenerUpVector); }
	int SetAllSessionsTransmitting(const FString * groupId) { return NativeCall<int, const FString *>(this, "VivoxNativeSdk.SetAllSessionsTransmitting", groupId); }
	int SetLoginProperties(const FString * accountHandle, int participantPropertyFrequency) { return NativeCall<int, const FString *, int>(this, "VivoxNativeSdk.SetLoginProperties", accountHandle, participantPropertyFrequency); }
	int SetNoSessionTransmitting(const FString * groupId) { return NativeCall<int, const FString *>(this, "VivoxNativeSdk.SetNoSessionTransmitting", groupId); }
	int SetTransmittingSession(const FString * sessionId) { return NativeCall<int, const FString *>(this, "VivoxNativeSdk.SetTransmittingSession", sessionId); }
	int TTSSpeak(const unsigned int * managerId, const ITTSVoice * voice, const FString * text, const TTSDestination * destination, ITTSMessage ** outMessage) { return NativeCall<int, const unsigned int *, const ITTSVoice *, const FString *, const TTSDestination *, ITTSMessage **>(this, "VivoxNativeSdk.TTSSpeak", managerId, voice, text, destination, outMessage); }
	int TTSSpeakToBuffer(const unsigned int * managerId, const ITTSVoice * voice, const FString * text, ITTSAudioBuffer ** outBuffer) { return NativeCall<int, const unsigned int *, const ITTSVoice *, const FString *, ITTSAudioBuffer **>(this, "VivoxNativeSdk.TTSSpeakToBuffer", managerId, voice, text, outBuffer); }
	void Tick() { NativeCall<void>(this, "VivoxNativeSdk.Tick"); }
};

