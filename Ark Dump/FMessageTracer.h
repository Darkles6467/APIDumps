#pragma once

#include "BaseDeclarations.h"
#include "FGuid.h"
#include "FMessageContext.h"
#include "IInterceptMessages.h"
#include "FMessageEndpoint.h"

struct IMessageTracer
{
	char __padding[0x8L];

	// Functions

};

struct FMessageTracer : IMessageTracer
{
	char __padding[0x1e8L];
	bool& BreakingField() { return *GetNativePointerField<bool*>(this, "FMessageTracer.Breaking"); }
	TArray<FGuid>& BreakOnSendersField() { return *GetNativePointerField<TArray<FGuid>*>(this, "FMessageTracer.BreakOnSenders"); }
	bool& ResetPendingField() { return *GetNativePointerField<bool*>(this, "FMessageTracer.ResetPending"); }
	bool& RunningField() { return *GetNativePointerField<bool*>(this, "FMessageTracer.Running"); }

	// Functions

	void Continue() { NativeCall<void>(this, "FMessageTracer.Continue"); }
	int GetEndpoints(TArray<TSharedPtr<FMessageTracerEndpointInfo,0>> * OutEndpoints) { return NativeCall<int, TArray<TSharedPtr<FMessageTracerEndpointInfo,0>> *>(this, "FMessageTracer.GetEndpoints", OutEndpoints); }
	int GetMessageTypes(TArray<TSharedPtr<FMessageTracerTypeInfo,0>> * OutTypes) { return NativeCall<int, TArray<TSharedPtr<FMessageTracerTypeInfo,0>> *>(this, "FMessageTracer.GetMessageTypes", OutTypes); }
	int GetMessages(TArray<TSharedPtr<FMessageTracerMessageInfo,0>> * OutMessages) { return NativeCall<int, TArray<TSharedPtr<FMessageTracerMessageInfo,0>> *>(this, "FMessageTracer.GetMessages", OutMessages); }
	bool HasMessages() { return NativeCall<bool>(this, "FMessageTracer.HasMessages"); }
	void ProcessAddedInterceptor(FString Name, FName MessageType, long double TimeSeconds) { NativeCall<void, FString, FName, long double>(this, "FMessageTracer.ProcessAddedInterceptor", Name, MessageType, TimeSeconds); }
	void ProcessAddedRecipient(FGuid Address, FMessageTracer::FRecipientInfo RecipientInfo, long double TimeSeconds) { NativeCall<void, FGuid, FMessageTracer::FRecipientInfo, long double>(this, "FMessageTracer.ProcessAddedRecipient", Address, RecipientInfo, TimeSeconds); }
	void ProcessDispatchedMessage(TSharedRef<IMessageContext,1> Context, long double TimeSeconds, FGuid RecipientId, bool Async) { NativeCall<void, TSharedRef<IMessageContext,1>, long double, FGuid, bool>(this, "FMessageTracer.ProcessDispatchedMessage", Context, TimeSeconds, RecipientId, Async); }
	void ProcessHandledMessage(TSharedRef<IMessageContext,1> Context, long double TimeSeconds, FGuid RecipientId) { NativeCall<void, TSharedRef<IMessageContext,1>, long double, FGuid>(this, "FMessageTracer.ProcessHandledMessage", Context, TimeSeconds, RecipientId); }
	void ProcessRoutedMessage(TSharedRef<IMessageContext,1> Context, long double TimeSeconds) { NativeCall<void, TSharedRef<IMessageContext,1>, long double>(this, "FMessageTracer.ProcessRoutedMessage", Context, TimeSeconds); }
	void ProcessSentMessage(TSharedRef<IMessageContext,1> Context, long double TimeSeconds) { NativeCall<void, TSharedRef<IMessageContext,1>, long double>(this, "FMessageTracer.ProcessSentMessage", Context, TimeSeconds); }
	void Reset() { NativeCall<void>(this, "FMessageTracer.Reset"); }
	bool ShouldBreak(const TSharedRef<IMessageContext,1> * Context) { return NativeCall<bool, const TSharedRef<IMessageContext,1> *>(this, "FMessageTracer.ShouldBreak", Context); }
	void Start() { NativeCall<void>(this, "FMessageTracer.Start"); }
	void Step() { NativeCall<void>(this, "FMessageTracer.Step"); }
	void Stop() { NativeCall<void>(this, "FMessageTracer.Stop"); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FMessageTracer.Tick", DeltaTime); }
	void TraceAddedInterceptor(const TSharedRef<IInterceptMessages,1> * Interceptor, const FName * MessageType) { NativeCall<void, const TSharedRef<IInterceptMessages,1> *, const FName *>(this, "FMessageTracer.TraceAddedInterceptor", Interceptor, MessageType); }
	void TraceAddedRecipient(const FGuid * Address, const TSharedRef<IReceiveMessages,1> * Recipient) { NativeCall<void, const FGuid *, const TSharedRef<IReceiveMessages,1> *>(this, "FMessageTracer.TraceAddedRecipient", Address, Recipient); }
	void TraceDispatchedMessage(const TSharedRef<IMessageContext,1> * Context, const TSharedRef<IReceiveMessages,1> * Recipient, bool Async) { NativeCall<void, const TSharedRef<IMessageContext,1> *, const TSharedRef<IReceiveMessages,1> *, bool>(this, "FMessageTracer.TraceDispatchedMessage", Context, Recipient, Async); }
	void TraceHandledMessage(const TSharedRef<IMessageContext,1> * Context, const TSharedRef<IReceiveMessages,1> * Recipient) { NativeCall<void, const TSharedRef<IMessageContext,1> *, const TSharedRef<IReceiveMessages,1> *>(this, "FMessageTracer.TraceHandledMessage", Context, Recipient); }
	void TraceRoutedMessage(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FMessageTracer.TraceRoutedMessage", Context); }
	bool IsRunning() { return NativeCall<bool>(this, "FMessageTracer.IsRunning"); }
};

