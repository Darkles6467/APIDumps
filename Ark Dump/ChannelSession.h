#pragma once

#include "BaseDeclarations.h"
#include "FTimespan.h"

struct IChannelSession
{
	char __padding[0x108L];

	// Functions

};

struct ChannelSession : IChannelSession
{
	char __padding[0xf8L];
	LoginSession * _loginSessionField() { return GetNativePointerField<LoginSession *>(this, "ChannelSession._loginSession"); }
	FieldArray<_BYTE, 1> _audioStateField() { return {this, "ChannelSession._audioState"}; }
	FieldArray<_BYTE, 1> _textStateField() { return {this, "ChannelSession._textState"}; }
	FieldArray<_BYTE, 1> _channelStateField() { return {this, "ChannelSession._channelState"}; }
	bool& _typingField() { return *GetNativePointerField<bool*>(this, "ChannelSession._typing"); }
	bool& _isSessionBeingTranscribedField() { return *GetNativePointerField<bool*>(this, "ChannelSession._isSessionBeingTranscribed"); }
	ChannelId& _channelField() { return *GetNativePointerField<ChannelId*>(this, "ChannelSession._channel"); }
	FString& _groupHandleField() { return *GetNativePointerField<FString*>(this, "ChannelSession._groupHandle"); }
	FString& _sessionHandleField() { return *GetNativePointerField<FString*>(this, "ChannelSession._sessionHandle"); }
	bool& _detachedField() { return *GetNativePointerField<bool*>(this, "ChannelSession._detached"); }
	bool& _toBeDeletedField() { return *GetNativePointerField<bool*>(this, "ChannelSession._toBeDeleted"); }

	// Functions

	ConnectionState AudioState() { return NativeCall<ConnectionState>(this, "ChannelSession.AudioState"); }
	ChannelId * Channel(ChannelId * result) { return NativeCall<ChannelId *, ChannelId *>(this, "ChannelSession.Channel", result); }
	ConnectionState ChannelState() { return NativeCall<ConnectionState>(this, "ChannelSession.ChannelState"); }
	void CheckSessionConnection() { NativeCall<void>(this, "ChannelSession.CheckSessionConnection"); }
	void CleanupEventHandler() { NativeCall<void>(this, "ChannelSession.CleanupEventHandler"); }
	void Disconnect(bool deleteOnDisconnect) { NativeCall<void, bool>(this, "ChannelSession.Disconnect", deleteOnDisconnect); }
	FString * GetConnectToken(FString * result, const FString * tokenSigningKey, FTimespan tokenExpirationDuration) { return NativeCall<FString *, FString *, const FString *, FTimespan>(this, "ChannelSession.GetConnectToken", result, tokenSigningKey, tokenExpirationDuration); }
	FString * GetTranscriptionToken(FString * result, const FString * tokenSigningKey, FTimespan tokenExpirationDuration) { return NativeCall<FString *, FString *, const FString *, FTimespan>(this, "ChannelSession.GetTranscriptionToken", result, tokenSigningKey, tokenExpirationDuration); }
	void HandleEvent(const vx_evt_base * evt) { NativeCall<void, const vx_evt_base *>(this, "ChannelSession.HandleEvent", evt); }
	bool IsTransmitting() { return NativeCall<bool>(this, "ChannelSession.IsTransmitting"); }
	FString * SessionHandle(FString * result) { return NativeCall<FString *, FString *>(this, "ChannelSession.SessionHandle", result); }
	int Set3DPosition(const FVector * speakerPosition, const FVector * listenerPosition, const FVector * listenerForwardVector, const FVector * listenerUpVector) { return NativeCall<int, const FVector *, const FVector *, const FVector *, const FVector *>(this, "ChannelSession.Set3DPosition", speakerPosition, listenerPosition, listenerForwardVector, listenerUpVector); }
	void SetChannelState(ConnectionState value) { NativeCall<void, ConnectionState>(this, "ChannelSession.SetChannelState", value); }
	ConnectionState TextState() { return NativeCall<ConnectionState>(this, "ChannelSession.TextState"); }
	bool Typing() { return NativeCall<bool>(this, "ChannelSession.Typing"); }
};

