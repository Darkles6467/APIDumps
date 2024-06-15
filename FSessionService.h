#pragma once

#include "BaseDeclarations.h"
#include "FOutputDevice.h"
#include "FMessageContext.h"

struct FSessionService : FOutputDevice
{
	char __padding[0x60L];
	TArray<FGuid>& LogSubscribersField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FSessionService.LogSubscribers"); }
	FWindowsCriticalSection& LogSubscribersLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FSessionService.LogSubscribersLock"); }
	TSharedPtr<FMessageEndpoint,1>& MessageEndpointField() { return *GetNativePointerField<TSharedPtr<FMessageEndpoint,1>*>(this, "FSessionService.MessageEndpoint"); }

	// Functions

	void HandleSessionLogSubscribeMessage(const FSessionServiceLogSubscribe * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServiceLogSubscribe *, const TSharedRef<IMessageContext,1> *>(this, "FSessionService.HandleSessionLogSubscribeMessage", Message, Context); }
	void HandleSessionLogUnsubscribeMessage(const FSessionServiceLogUnsubscribe * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServiceLogUnsubscribe *, const TSharedRef<IMessageContext,1> *>(this, "FSessionService.HandleSessionLogUnsubscribeMessage", Message, Context); }
	void HandleSessionPingMessage(const FSessionServicePing * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServicePing *, const TSharedRef<IMessageContext,1> *>(this, "FSessionService.HandleSessionPingMessage", Message, Context); }
	bool IsRunning() { return NativeCall<bool>(this, "FSessionService.IsRunning"); }
	void SendLog(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FSessionService.SendLog", Data, Verbosity, Category); }
	void SendPong(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FSessionService.SendPong", Context); }
	void Serialize(const wchar_t * Data, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "FSessionService.Serialize", Data, Verbosity, Category); }
	bool Start() { return NativeCall<bool>(this, "FSessionService.Start"); }
	void Stop() { NativeCall<void>(this, "FSessionService.Stop"); }
};

