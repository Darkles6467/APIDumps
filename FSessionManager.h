#pragma once

#include "BaseDeclarations.h"
#include "FMessageContext.h"
#include "FSessionInfo.h"
#include "FSessionInstanceInfo.h"
#include "FSessionLogMessage.h"

struct ISessionManager
{
	char __padding[0x8L];

	// Functions

};

struct FSessionManager : ISessionManager
{
	char __padding[0x190L];
	FGuid& AutomationControllerAddressField() { return *GetNativePointerField<FGuid*>(this, "FSessionManager.AutomationControllerAddress"); }
	FDateTime& LastPingTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSessionManager.LastPingTime"); }
	TSharedPtr<FMessageEndpoint,1>& MessageEndpointField() { return *GetNativePointerField<TSharedPtr<FMessageEndpoint,1>*>(this, "FSessionManager.MessageEndpoint"); }
	TArray<FString>& FilteredOwnersField() { return *GetNativePointerField<TArray<FString>*>(this, "FSessionManager.FilteredOwners"); }

	// Functions

	void AddOwner(const FString * InOwner) { NativeCall<void, const FString *>(this, "FSessionManager.AddOwner", InOwner); }
	void GetSelectedInstances(TArray<TSharedPtr<ISessionInstanceInfo,0>> * OutInstances) { NativeCall<void, TArray<TSharedPtr<ISessionInstanceInfo,0>> *>(this, "FSessionManager.GetSelectedInstances", OutInstances); }
	void GetSessions(TArray<TSharedPtr<ISessionInfo,0>> * OutSessions) { NativeCall<void, TArray<TSharedPtr<ISessionInfo,0>> *>(this, "FSessionManager.GetSessions", OutSessions); }
	void HandleEnginePongMessage(const FEngineServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionManager.HandleEnginePongMessage", Message, Context); }
	void HandleInstanceDiscovered(const TSharedRef<ISessionInfo,0> * Session, const TSharedRef<ISessionInstanceInfo,0> * Instance) { NativeCall<void, const TSharedRef<ISessionInfo,0> *, const TSharedRef<ISessionInstanceInfo,0> *>(this, "FSessionManager.HandleInstanceDiscovered", Session, Instance); }
	void HandleLogReceived(const TSharedRef<ISessionInfo,0> * Session, const TSharedRef<ISessionInstanceInfo,0> * Instance, const TSharedRef<FSessionLogMessage,0> * Message) { NativeCall<void, const TSharedRef<ISessionInfo,0> *, const TSharedRef<ISessionInstanceInfo,0> *, const TSharedRef<FSessionLogMessage,0> *>(this, "FSessionManager.HandleLogReceived", Session, Instance, Message); }
	void HandleSessionPongMessage(const FSessionServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionManager.HandleSessionPongMessage", Message, Context); }
	bool HandleTicker(float DeltaTime) { return NativeCall<bool, float>(this, "FSessionManager.HandleTicker", DeltaTime); }
	bool IsInstanceSelected(const TSharedRef<ISessionInstanceInfo,0> * Instance) { return NativeCall<bool, const TSharedRef<ISessionInstanceInfo,0> *>(this, "FSessionManager.IsInstanceSelected", Instance); }
	bool IsValidOwner(const FString * Owner) { return NativeCall<bool, const FString *>(this, "FSessionManager.IsValidOwner", Owner); }
	void RefreshSessions() { NativeCall<void>(this, "FSessionManager.RefreshSessions"); }
	void RemoveOwner(const FString * InOwner) { NativeCall<void, const FString *>(this, "FSessionManager.RemoveOwner", InOwner); }
	bool SelectSession(const TSharedPtr<ISessionInfo,0> * Session) { return NativeCall<bool, const TSharedPtr<ISessionInfo,0> *>(this, "FSessionManager.SelectSession", Session); }
	void SendPing() { NativeCall<void>(this, "FSessionManager.SendPing"); }
	bool SetInstanceSelected(const TSharedPtr<ISessionInstanceInfo,0> * Instance, bool Selected) { return NativeCall<bool, const TSharedPtr<ISessionInstanceInfo,0> *, bool>(this, "FSessionManager.SetInstanceSelected", Instance, Selected); }
};

