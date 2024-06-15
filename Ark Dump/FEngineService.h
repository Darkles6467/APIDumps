#pragma once

#include "BaseDeclarations.h"
#include "FMessageContext.h"

struct FEngineService
{
	char __padding[0x20L];
	TArray<FString>& AuthorizedUsersField() { return *GetNativePointerField<TArray<FString>*>(this, "FEngineService.AuthorizedUsers"); }
	TSharedPtr<FMessageEndpoint,1>& MessageEndpointField() { return *GetNativePointerField<TSharedPtr<FMessageEndpoint,1>*>(this, "FEngineService.MessageEndpoint"); }

	// Functions

	void HandleAuthDenyMessage(const FEngineServiceAuthDeny * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServiceAuthDeny *, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.HandleAuthDenyMessage", Message, Context); }
	void HandleAuthGrantMessage(const FEngineServiceAuthGrant * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServiceAuthGrant *, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.HandleAuthGrantMessage", Message, Context); }
	void HandleExecuteCommandMessage(const FEngineServiceExecuteCommand * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServiceExecuteCommand *, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.HandleExecuteCommandMessage", Message, Context); }
	void HandlePingMessage(const FEngineServicePing * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServicePing *, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.HandlePingMessage", Message, Context); }
	void HandleTerminateMessage(const FEngineServiceTerminate * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServiceTerminate *, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.HandleTerminateMessage", Message, Context); }
	void SendNotification(const wchar_t * NotificationText, const FGuid * Recipient) { NativeCall<void, const wchar_t *, const FGuid *>(this, "FEngineService.SendNotification", NotificationText, Recipient); }
	void SendPong(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FEngineService.SendPong", Context); }
};

