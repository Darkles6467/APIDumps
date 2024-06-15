#pragma once

#include "BaseDeclarations.h"
#include "FFileMessageAttachment.h"
#include "FMessageContext.h"

struct IMessageBridge
{
	char __padding[0x8L];
};

struct FMessageBridge : IMessageBridge
{
	char __padding[0xe0L];
	FGuid& AddressField() { return *GetNativePointerField<FGuid*>(this, "FMessageBridge.Address"); }
	FMessageAddressBook& AddressBookField() { return *GetNativePointerField<FMessageAddressBook*>(this, "FMessageBridge.AddressBook"); }
	bool& EnabledField() { return *GetNativePointerField<bool*>(this, "FMessageBridge.Enabled"); }
	const FGuid& IdField() { return *GetNativePointerField<const FGuid*>(this, "FMessageBridge.Id"); }

	// Functions

	void Disable() { NativeCall<void>(this, "FMessageBridge.Disable"); }
	void Enable() { NativeCall<void>(this, "FMessageBridge.Enable"); }
	FName * GetDebugName(FName * result) { return NativeCall<FName *, FName *>(this, "FMessageBridge.GetDebugName", result); }
	const FGuid * GetRecipientId() { return NativeCall<const FGuid *>(this, "FMessageBridge.GetRecipientId"); }
	void HandleMessageBusShutdown() { NativeCall<void>(this, "FMessageBridge.HandleMessageBusShutdown"); }
	void HandleTransportMessageReceived(FArchive * MessageData, const TSharedPtr<IMessageAttachment,1> * Attachment, const FGuid * NodeId) { NativeCall<void, FArchive *, const TSharedPtr<IMessageAttachment,1> *, const FGuid *>(this, "FMessageBridge.HandleTransportMessageReceived", MessageData, Attachment, NodeId); }
	void HandleTransportNodeLost(const FGuid * LostNodeId) { NativeCall<void, const FGuid *>(this, "FMessageBridge.HandleTransportNodeLost", LostNodeId); }
	void ReceiveMessage(const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const TSharedRef<IMessageContext,1> *>(this, "FMessageBridge.ReceiveMessage", Context); }
	void Shutdown() { NativeCall<void>(this, "FMessageBridge.Shutdown"); }
};

