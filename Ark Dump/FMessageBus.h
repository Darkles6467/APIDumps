#pragma once

#include "BaseDeclarations.h"
#include "FMessageContext.h"
#include "FGuid.h"
#include "ISendMessages.h"
#include "IInterceptMessages.h"
#include "FMessageEndpoint.h"
#include "FFileMessageAttachment.h"

struct IMessageBus
{
	char __padding[0x8L];

	// Functions

};

struct FMessageBus : IMessageBus
{
	char __padding[0x50L];
	FMessageRouter * RouterField() { return GetNativePointerField<FMessageRouter *>(this, "FMessageBus.Router"); }
	TSharedPtr<IAuthorizeMessageRecipients,0>& RecipientAuthorizerField() { return *GetNativePointerField<TSharedPtr<IAuthorizeMessageRecipients,0>*>(this, "FMessageBus.RecipientAuthorizer"); }

	// Functions

	void Forward(const TSharedRef<IMessageContext,1> * Context, const TArray<FGuid> * Recipients, EMessageScope::Type ForwardingScope, const FTimespan * Delay, const TSharedRef<ISendMessages,1> * Forwarder) { NativeCall<void, const TSharedRef<IMessageContext,1> *, const TArray<FGuid> *, EMessageScope::Type, const FTimespan *, const TSharedRef<ISendMessages,1> *>(this, "FMessageBus.Forward", Context, Recipients, ForwardingScope, Delay, Forwarder); }
	void Intercept(const TSharedRef<IInterceptMessages,1> * Interceptor, const FName * MessageType) { NativeCall<void, const TSharedRef<IInterceptMessages,1> *, const FName *>(this, "FMessageBus.Intercept", Interceptor, MessageType); }
	void Publish(void * Message, UScriptStruct * TypeInfo, EMessageScope::Type Scope, const FTimespan * Delay, const FDateTime * Expiration, const TSharedRef<ISendMessages,1> * Publisher) { NativeCall<void, void *, UScriptStruct *, EMessageScope::Type, const FTimespan *, const FDateTime *, const TSharedRef<ISendMessages,1> *>(this, "FMessageBus.Publish", Message, TypeInfo, Scope, Delay, Expiration, Publisher); }
	void Register(const FGuid * Address, const TSharedRef<IReceiveMessages,1> * Recipient) { NativeCall<void, const FGuid *, const TSharedRef<IReceiveMessages,1> *>(this, "FMessageBus.Register", Address, Recipient); }
	void Send(void * Message, UScriptStruct * TypeInfo, const TSharedPtr<IMessageAttachment,1> * Attachment, const TArray<FGuid> * Recipients, const FTimespan * Delay, const FDateTime * Expiration, const TSharedRef<ISendMessages,1> * Sender) { NativeCall<void, void *, UScriptStruct *, const TSharedPtr<IMessageAttachment,1> *, const TArray<FGuid> *, const FTimespan *, const FDateTime *, const TSharedRef<ISendMessages,1> *>(this, "FMessageBus.Send", Message, TypeInfo, Attachment, Recipients, Delay, Expiration, Sender); }
	void Shutdown() { NativeCall<void>(this, "FMessageBus.Shutdown"); }
	void Unintercept(const TSharedRef<IInterceptMessages,1> * Interceptor, const FName * MessageType) { NativeCall<void, const TSharedRef<IInterceptMessages,1> *, const FName *>(this, "FMessageBus.Unintercept", Interceptor, MessageType); }
	void Unregister(const FGuid * Address) { NativeCall<void, const FGuid *>(this, "FMessageBus.Unregister", Address); }
	void Unsubscribe(const TSharedRef<IReceiveMessages,1> * Subscriber, const FName * MessageType) { NativeCall<void, const TSharedRef<IReceiveMessages,1> *, const FName *>(this, "FMessageBus.Unsubscribe", Subscriber, MessageType); }
};

