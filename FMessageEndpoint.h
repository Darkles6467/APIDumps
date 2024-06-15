#pragma once

#include "BaseDeclarations.h"
#include "FMessageContext.h"
#include "FFileMessageAttachment.h"
#include "FGuid.h"

struct IReceiveMessages
{
	char __padding[0x8L];
};

struct FMessageEndpoint : IReceiveMessages
{
	char __padding[0xa8L];
	const FGuid& AddressField() { return *GetNativePointerField<const FGuid*>(this, "FMessageEndpoint.Address"); }
	bool& EnabledField() { return *GetNativePointerField<bool*>(this, "FMessageEndpoint.Enabled"); }
	TArray<TSharedPtr<IMessageHandler,1>>& HandlersField() { return *GetNativePointerField<TArray<TSharedPtr<IMessageHandler,1>>*>(this, "FMessageEndpoint.Handlers"); }
	const FGuid& IdField() { return *GetNativePointerField<const FGuid*>(this, "FMessageEndpoint.Id"); }
	bool& InboxEnabledField() { return *GetNativePointerField<bool*>(this, "FMessageEndpoint.InboxEnabled"); }
	const FName& NameField() { return *GetNativePointerField<const FName*>(this, "FMessageEndpoint.Name"); }
	ENamedThreads::Type& RecipientThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FMessageEndpoint.RecipientThread"); }

	// Functions

	FName * GetDebugName(FName * result) { return NativeCall<FName *, FName *>(this, "FMessageEndpoint.GetDebugName", result); }
	ENamedThreads::Type GetRecipientThread() { return NativeCall<ENamedThreads::Type>(this, "FMessageEndpoint.GetRecipientThread"); }
	FGuid * GetSenderAddress(FGuid * result) { return NativeCall<FGuid *, FGuid *>(this, "FMessageEndpoint.GetSenderAddress", result); }
	void NotifyMessageError(const TSharedRef<IMessageContext,1> * Context, const FString * Error) { NativeCall<void, const TSharedRef<IMessageContext,1> *, const FString *>(this, "FMessageEndpoint.NotifyMessageError", Context, Error); }
	void ProcessMessage(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FMessageEndpoint.ProcessMessage", Context); }
	void ReceiveMessage(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FMessageEndpoint.ReceiveMessage", Context); }
	void Send(void * Message, UScriptStruct * TypeInfo, const TSharedPtr<IMessageAttachment,1> * Attachment, const TArray<FGuid> * Recipients, const FTimespan * Delay, const FDateTime * Expiration) { NativeCall<void, void *, UScriptStruct *, const TSharedPtr<IMessageAttachment,1> *, const TArray<FGuid> *, const FTimespan *, const FDateTime *>(this, "FMessageEndpoint.Send", Message, TypeInfo, Attachment, Recipients, Delay, Expiration); }
	void Subscribe(const FName * MessageType, const TRange<enum EMessageScope::Type> * ScopeRange) { NativeCall<void, const FName *, const TRange<enum EMessageScope::Type> *>(this, "FMessageEndpoint.Subscribe", MessageType, ScopeRange); }
	void Publish(void * Message, UScriptStruct * TypeInfo, EMessageScope::Type Scope, const FTimespan * Delay, const FDateTime * Expiration) { NativeCall<void, void *, UScriptStruct *, EMessageScope::Type, const FTimespan *, const FDateTime *>(this, "FMessageEndpoint.Publish", Message, TypeInfo, Scope, Delay, Expiration); }
};

