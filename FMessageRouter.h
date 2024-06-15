#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"
#include "FMessageContext.h"
#include "IInterceptMessages.h"
#include "FGuid.h"
#include "FMessageEndpoint.h"
#include "FMessageSubscription.h"

struct FMessageRouter : FRunnable
{
	char __padding[0x148L];
	FDateTime& CurrentTimeField() { return *GetNativePointerField<FDateTime*>(this, "FMessageRouter.CurrentTime"); }
	TArray<FMessageRouter::FDelayedMessage>& DelayedMessagesField() { return *GetNativePointerField<TArray<FMessageRouter::FDelayedMessage>*>(this, "FMessageRouter.DelayedMessages"); }
	__int64& DelayedMessagesSequenceField() { return *GetNativePointerField<__int64*>(this, "FMessageRouter.DelayedMessagesSequence"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FMessageRouter.Stopping"); }
	TSharedRef<FMessageTracer,1>& TracerField() { return *GetNativePointerField<TSharedRef<FMessageTracer,1>*>(this, "FMessageRouter.Tracer"); }

	// Functions

	void DispatchMessageW(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FMessageRouter.DispatchMessageW", Context); }
	void Exit() { NativeCall<void>(this, "FMessageRouter.Exit"); }
	void FilterSubscriptions(TArray<TSharedPtr<IMessageSubscription,1>> * Subscriptions, const TSharedRef<IMessageContext,1> * Context, TArray<TSharedPtr<IReceiveMessages,1>> * OutRecipients) { NativeCall<void, TArray<TSharedPtr<IMessageSubscription,1>> *, const TSharedRef<IMessageContext,1> *, TArray<TSharedPtr<IReceiveMessages,1>> *>(this, "FMessageRouter.FilterSubscriptions", Subscriptions, Context, OutRecipients); }
	void HandleAddInterceptor(TSharedRef<IInterceptMessages,1> Interceptor, FName MessageType) { NativeCall<void, TSharedRef<IInterceptMessages,1>, FName>(this, "FMessageRouter.HandleAddInterceptor", Interceptor, MessageType); }
	void HandleAddRecipient(FGuid Address, TWeakPtr<IReceiveMessages,1> RecipientPtr) { NativeCall<void, FGuid, TWeakPtr<IReceiveMessages,1>>(this, "FMessageRouter.HandleAddRecipient", Address, RecipientPtr); }
	void HandleAddSubscriber(TSharedRef<IMessageSubscription,1> Subscription) { NativeCall<void, TSharedRef<IMessageSubscription,1>>(this, "FMessageRouter.HandleAddSubscriber", Subscription); }
	void HandleRemoveInterceptor(TSharedRef<IInterceptMessages,1> Interceptor, FName MessageType) { NativeCall<void, TSharedRef<IInterceptMessages,1>, FName>(this, "FMessageRouter.HandleRemoveInterceptor", Interceptor, MessageType); }
	void HandleRemoveRecipient(FGuid Address) { NativeCall<void, FGuid>(this, "FMessageRouter.HandleRemoveRecipient", Address); }
	void HandleRemoveSubscriber(TWeakPtr<IReceiveMessages,1> SubscriberPtr, FName MessageType) { NativeCall<void, TWeakPtr<IReceiveMessages,1>, FName>(this, "FMessageRouter.HandleRemoveSubscriber", SubscriberPtr, MessageType); }
	void HandleRouteMessage(TSharedRef<IMessageContext,1> Context) { NativeCall<void, TSharedRef<IMessageContext,1>>(this, "FMessageRouter.HandleRouteMessage", Context); }
	void ProcessDelayedMessages() { NativeCall<void>(this, "FMessageRouter.ProcessDelayedMessages"); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FMessageRouter.Run"); }
	void Stop() { NativeCall<void>(this, "FMessageRouter.Stop"); }
};

