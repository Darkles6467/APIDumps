#pragma once

#include "BaseDeclarations.h"
#include "FTimespan.h"

struct IParticipantProperties
{
	char __padding[0x8L];
};

struct IParticipant : IParticipantProperties
{
};

struct Participant : IParticipant
{
	char __padding[0x88L];
	bool& _isSelfField() { return *GetNativePointerField<bool*>(this, "Participant._isSelf"); }
	bool& _inAudioField() { return *GetNativePointerField<bool*>(this, "Participant._inAudio"); }
	bool& _inTextField() { return *GetNativePointerField<bool*>(this, "Participant._inText"); }
	bool& _speechDetectedField() { return *GetNativePointerField<bool*>(this, "Participant._speechDetected"); }
	long double& _audioEnergyField() { return *GetNativePointerField<long double*>(this, "Participant._audioEnergy"); }
	int& _localVolumeAdjustmentField() { return *GetNativePointerField<int*>(this, "Participant._localVolumeAdjustment"); }
	bool& _localMuteField() { return *GetNativePointerField<bool*>(this, "Participant._localMute"); }
	bool& _isTypingField() { return *GetNativePointerField<bool*>(this, "Participant._isTyping"); }
	bool& _isMutedForAllField() { return *GetNativePointerField<bool*>(this, "Participant._isMutedForAll"); }
	bool& _unavailableRenderDeviceField() { return *GetNativePointerField<bool*>(this, "Participant._unavailableRenderDevice"); }
	bool& _unavailableCaptureDeviceField() { return *GetNativePointerField<bool*>(this, "Participant._unavailableCaptureDevice"); }
	FString& _participantIdField() { return *GetNativePointerField<FString*>(this, "Participant._participantId"); }
	ChannelSession * _parentChannelSessionField() { return GetNativePointerField<ChannelSession *>(this, "Participant._parentChannelSession"); }
	AccountId& _accountField() { return *GetNativePointerField<AccountId*>(this, "Participant._account"); }

	// Functions

	long double AudioEnergy() { return NativeCall<long double>(this, "Participant.AudioEnergy"); }
	FString * GetMuteForAllToken(FString * result, const FString * tokenSigningKey, FTimespan tokenExpirationDuration) { return NativeCall<FString *, FString *, const FString *, FTimespan>(this, "Participant.GetMuteForAllToken", result, tokenSigningKey, tokenExpirationDuration); }
	bool HandleEvent(const vx_evt_participant_updated * evt) { return NativeCall<bool, const vx_evt_participant_updated *>(this, "Participant.HandleEvent", evt); }
	bool InAudio() { return NativeCall<bool>(this, "Participant.InAudio"); }
	bool IsMutedForAll() { return NativeCall<bool>(this, "Participant.IsMutedForAll"); }
	bool IsTyping() { return NativeCall<bool>(this, "Participant.IsTyping"); }
	void SetLocalMute(bool value) { NativeCall<void, bool>(this, "Participant.SetLocalMute", value); }
	int SetLocalVolumeAdjustment(int value) { return NativeCall<int, int>(this, "Participant.SetLocalVolumeAdjustment", value); }
	bool UnavailableCaptureDevice() { return NativeCall<bool>(this, "Participant.UnavailableCaptureDevice"); }
	bool UnavailableRenderDevice() { return NativeCall<bool>(this, "Participant.UnavailableRenderDevice"); }
};

