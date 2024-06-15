#pragma once

#include "BaseDeclarations.h"
#include "FTimespan.h"
#include "ChannelId.h"

struct ILoginSession
{
	char __padding[0xa8L];
};

struct LoginSession : ILoginSession
{
	char __padding[0x3d0L];
	AccountId& _loginSessionIdField() { return *GetNativePointerField<AccountId*>(this, "LoginSession._loginSessionId"); }
	FString& _groupHandleField() { return *GetNativePointerField<FString*>(this, "LoginSession._groupHandle"); }
	FieldArray<_BYTE, 1> _stateField() { return {this, "LoginSession._state"}; }
	Presence& _currentPresenceField() { return *GetNativePointerField<Presence*>(this, "LoginSession._currentPresence"); }
	ClientImpl * _clientField() { return GetNativePointerField<ClientImpl *>(this, "LoginSession._client"); }
	FieldArray<_BYTE, 1> _transmissionModeField() { return {this, "LoginSession._transmissionMode"}; }
	FieldArray<_BYTE, 1> _participantUpdateRateField() { return {this, "LoginSession._participantUpdateRate"}; }
	ChannelId& _transmittingChannelField() { return *GetNativePointerField<ChannelId*>(this, "LoginSession._transmittingChannel"); }
	bool& _presenceEnabledField() { return *GetNativePointerField<bool*>(this, "LoginSession._presenceEnabled"); }
	bool& _isAudioInjectingField() { return *GetNativePointerField<bool*>(this, "LoginSession._isAudioInjecting"); }
	TextToSpeech& _ttsSubSystemField() { return *GetNativePointerField<TextToSpeech*>(this, "LoginSession._ttsSubSystem"); }

	// Functions

	void CleanupEventHandler() { NativeCall<void>(this, "LoginSession.CleanupEventHandler"); }
	void ClearTransmittingChannel(const ChannelId * channelId) { NativeCall<void, const ChannelId *>(this, "LoginSession.ClearTransmittingChannel", channelId); }
	const Presence * CurrentPresence() { return NativeCall<const Presence *>(this, "LoginSession.CurrentPresence"); }
	void DeleteChannelSession(const ChannelId * channelId) { NativeCall<void, const ChannelId *>(this, "LoginSession.DeleteChannelSession", channelId); }
	FString * GetLoginToken(FString * result, const FString * tokenSigningKey, FTimespan tokenExpirationDuration) { return NativeCall<FString *, FString *, const FString *, FTimespan>(this, "LoginSession.GetLoginToken", result, tokenSigningKey, tokenExpirationDuration); }
	ParticipantSpeakingUpdateRate GetParticipantSpeakingUpdateRate() { return NativeCall<ParticipantSpeakingUpdateRate>(this, "LoginSession.GetParticipantSpeakingUpdateRate"); }
	TransmissionMode GetTransmissionMode() { return NativeCall<TransmissionMode>(this, "LoginSession.GetTransmissionMode"); }
	TArray<ChannelId> * GetTransmittingChannels(TArray<ChannelId> * result) { return NativeCall<TArray<ChannelId> *, TArray<ChannelId> *>(this, "LoginSession.GetTransmittingChannels", result); }
	void HandleEvent(const vx_evt_base * evt) { NativeCall<void, const vx_evt_base *>(this, "LoginSession.HandleEvent", evt); }
	bool IsAudioInjecting() { return NativeCall<bool>(this, "LoginSession.IsAudioInjecting"); }
	void Logout() { NativeCall<void>(this, "LoginSession.Logout"); }
	int SetCurrentPresence(const Presence * value) { return NativeCall<int, const Presence *>(this, "LoginSession.SetCurrentPresence", value); }
	int SetParticipantSpeakingUpdateRate(ParticipantSpeakingUpdateRate rate) { return NativeCall<int, ParticipantSpeakingUpdateRate>(this, "LoginSession.SetParticipantSpeakingUpdateRate", rate); }
	int SetTransmissionInCore() { return NativeCall<int>(this, "LoginSession.SetTransmissionInCore"); }
	int SetTransmissionMode(TransmissionMode mode, ChannelId singleChannel) { return NativeCall<int, TransmissionMode, ChannelId>(this, "LoginSession.SetTransmissionMode", mode, singleChannel); }
	LoginState State() { return NativeCall<LoginState>(this, "LoginSession.State"); }
	int StopAudioInjection() { return NativeCall<int>(this, "LoginSession.StopAudioInjection"); }
};

