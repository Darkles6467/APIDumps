#pragma once

#include "BaseDeclarations.h"
#include "FSessionInstanceInfo.h"
#include "FSessionLogMessage.h"
#include "FMessageContext.h"

struct ISessionInfo
{
	char __padding[0x8L];

	// Functions

};

struct FSessionInfo : ISessionInfo
{
	char __padding[0xf0L];
	FDateTime& LastUpdateTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSessionInfo.LastUpdateTime"); }
	FGuid& SessionIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionInfo.SessionId"); }
	FString& SessionNameField() { return *GetNativePointerField<FString*>(this, "FSessionInfo.SessionName"); }
	FString& SessionOwnerField() { return *GetNativePointerField<FString*>(this, "FSessionInfo.SessionOwner"); }
	bool& StandaloneField() { return *GetNativePointerField<bool*>(this, "FSessionInfo.Standalone"); }

	// Functions

	const FBoxSphereBounds * GetSessionOwner() { return NativeCall<const FBoxSphereBounds *>(this, "FSessionInfo.GetSessionOwner"); }
	void GetInstances(TArray<TSharedPtr<ISessionInstanceInfo,0>> * OutInstances) { NativeCall<void, TArray<TSharedPtr<ISessionInstanceInfo,0>> *>(this, "FSessionInfo.GetInstances", OutInstances); }
	FDateTime * GetLastUpdateTime(FDateTime * result) { return NativeCall<FDateTime *, FDateTime *>(this, "FSessionInfo.GetLastUpdateTime", result); }
	int GetNumInstances() { return NativeCall<int>(this, "FSessionInfo.GetNumInstances"); }
	void HandleLogReceived(const TSharedRef<ISessionInstanceInfo,0> * Instance, const TSharedRef<FSessionLogMessage,0> * LogMessage) { NativeCall<void, const TSharedRef<ISessionInstanceInfo,0> *, const TSharedRef<FSessionLogMessage,0> *>(this, "FSessionInfo.HandleLogReceived", Instance, LogMessage); }
	bool IsStandalone() { return NativeCall<bool>(this, "FSessionInfo.IsStandalone"); }
	void Terminate() { NativeCall<void>(this, "FSessionInfo.Terminate"); }
	void UpdateFromMessage(const FEngineServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionInfo.UpdateFromMessage", Message, Context); }
	void UpdateFromMessage(const FSessionServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionInfo.UpdateFromMessage", Message, Context); }
	const AccountId * OnInstanceDiscovered() { return NativeCall<const AccountId *>(this, "FSessionInfo.OnInstanceDiscovered"); }
};

