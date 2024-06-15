#pragma once

#include "BaseDeclarations.h"
#include "FFileMessageAttachment.h"

struct IMessageContext
{
	char __padding[0x8L];
};

struct IMutableMessageContext : IMessageContext
{
};

struct FMessageContext : IMutableMessageContext
{
	char __padding[0xd0L];
	FDateTime& ExpirationField() { return *GetNativePointerField<FDateTime*>(this, "FMessageContext.Expiration"); }
	FGuid& ForwarderField() { return *GetNativePointerField<FGuid*>(this, "FMessageContext.Forwarder"); }
	void * MessageField() { return GetNativePointerField<void *>(this, "FMessageContext.Message"); }
	TArray<FGuid>& RecipientsField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FMessageContext.Recipients"); }
	EMessageScope::Type& ScopeField() { return *GetNativePointerField<EMessageScope::Type*>(this, "FMessageContext.Scope"); }
	FGuid& SenderField() { return *GetNativePointerField<FGuid*>(this, "FMessageContext.Sender"); }
	ENamedThreads::Type& SenderThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FMessageContext.SenderThread"); }
	FDateTime& TimeForwardedField() { return *GetNativePointerField<FDateTime*>(this, "FMessageContext.TimeForwarded"); }
	FDateTime& TimeSentField() { return *GetNativePointerField<FDateTime*>(this, "FMessageContext.TimeSent"); }

	// Functions

	void AddRecipient(const FGuid * Recipient) { NativeCall<void, const FGuid *>(this, "FMessageContext.AddRecipient", Recipient); }
	const FDateTime * GetExpiration() { return NativeCall<const FDateTime *>(this, "FMessageContext.GetExpiration"); }
	FName * GetMessageType(FName * result) { return NativeCall<FName *, FName *>(this, "FMessageContext.GetMessageType", result); }
	const void * GetMessageW() { return NativeCall<const void *>(this, "FMessageContext.GetMessageW"); }
	EMessageScope::Type GetScope() { return NativeCall<EMessageScope::Type>(this, "FMessageContext.GetScope"); }
	const FGuid * GetSender() { return NativeCall<const FGuid *>(this, "FMessageContext.GetSender"); }
	ENamedThreads::Type GetSenderThread() { return NativeCall<ENamedThreads::Type>(this, "FMessageContext.GetSenderThread"); }
	const FDateTime * GetTimeSent() { return NativeCall<const FDateTime *>(this, "FMessageContext.GetTimeSent"); }
	bool IsForwarded() { return NativeCall<bool>(this, "FMessageContext.IsForwarded"); }
	bool IsValid() { return NativeCall<bool>(this, "FMessageContext.IsValid"); }
	void SetAttachment(const TSharedPtr<IMessageAttachment,1> * InAttachment) { NativeCall<void, const TSharedPtr<IMessageAttachment,1> *>(this, "FMessageContext.SetAttachment", InAttachment); }
	void SetExpiration(const FDateTime * InExpiration) { NativeCall<void, const FDateTime *>(this, "FMessageContext.SetExpiration", InExpiration); }
	void SetHeader(const FName * Key, const FString * Value) { NativeCall<void, const FName *, const FString *>(this, "FMessageContext.SetHeader", Key, Value); }
	void SetMessage(void * InMessage, UScriptStruct * InTypeInfo) { NativeCall<void, void *, UScriptStruct *>(this, "FMessageContext.SetMessage", InMessage, InTypeInfo); }
	void SetScope(EMessageScope::Type InScope) { NativeCall<void, EMessageScope::Type>(this, "FMessageContext.SetScope", InScope); }
	void SetSender(const FGuid * InSender) { NativeCall<void, const FGuid *>(this, "FMessageContext.SetSender", InSender); }
	void SetTimeSent(const FDateTime * InTimeSent) { NativeCall<void, const FDateTime *>(this, "FMessageContext.SetTimeSent", InTimeSent); }
	const FDateTime * GetTimeForwarded() { return NativeCall<const FDateTime *>(this, "FMessageContext.GetTimeForwarded"); }
};

