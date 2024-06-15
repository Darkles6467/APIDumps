#pragma once

#include "BaseDeclarations.h"
#include "FFileMessageAttachment.h"
#include "FArrayReader.h"
#include "IMessageData.h"
#include "FGuid.h"

struct ITransportMessages
{
	char __padding[0x8L];
};

struct FUdpMessageTransport : ITransportMessages
{
	char __padding[0x68L];
	FIPv4Endpoint& LocalEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpMessageTransport.LocalEndpoint"); }
	FUdpMessageProcessor * MessageProcessorField() { return GetNativePointerField<FUdpMessageProcessor *>(this, "FUdpMessageTransport.MessageProcessor"); }
	FIPv4Endpoint& MulticastEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpMessageTransport.MulticastEndpoint"); }
	FUdpSocketReceiver * MulticastReceiverField() { return GetNativePointerField<FUdpSocketReceiver *>(this, "FUdpMessageTransport.MulticastReceiver"); }
	char& MulticastTtlField() { return *GetNativePointerField<char*>(this, "FUdpMessageTransport.MulticastTtl"); }
	FUdpSocketReceiver * UnicastReceiverField() { return GetNativePointerField<FUdpSocketReceiver *>(this, "FUdpMessageTransport.UnicastReceiver"); }

	// Functions

	FName * GetDebugName(FName * result) { return NativeCall<FName *, FName *>(this, "FUdpMessageTransport.GetDebugName", result); }
	void HandleProcessorMessageReceived(FArchive * MessageData, const TSharedPtr<IMessageAttachment,1> * Attachment, const FGuid * NodeId) { NativeCall<void, FArchive *, const TSharedPtr<IMessageAttachment,1> *, const FGuid *>(this, "FUdpMessageTransport.HandleProcessorMessageReceived", MessageData, Attachment, NodeId); }
	void HandleProcessorNodeDiscovered(const FGuid * DiscoveredNodeId) { NativeCall<void, const FGuid *>(this, "FUdpMessageTransport.HandleProcessorNodeDiscovered", DiscoveredNodeId); }
	void HandleProcessorNodeLost(const FGuid * LostNodeId) { NativeCall<void, const FGuid *>(this, "FUdpMessageTransport.HandleProcessorNodeLost", LostNodeId); }
	void HandleSocketDataReceived(const TSharedPtr<FArrayReader,1> * Data, const FIPv4Endpoint * Sender) { NativeCall<void, const TSharedPtr<FArrayReader,1> *, const FIPv4Endpoint *>(this, "FUdpMessageTransport.HandleSocketDataReceived", Data, Sender); }
	bool StartTransport() { return NativeCall<bool>(this, "FUdpMessageTransport.StartTransport"); }
	void StopTransport() { NativeCall<void>(this, "FUdpMessageTransport.StopTransport"); }
	bool TransportMessage(const TSharedRef<IMessageData,1> * Data, const TSharedPtr<IMessageAttachment,1> * Attachment, const TArray<FGuid> * Recipients) { return NativeCall<bool, const TSharedRef<IMessageData,1> *, const TSharedPtr<IMessageAttachment,1> *, const TArray<FGuid> *>(this, "FUdpMessageTransport.TransportMessage", Data, Attachment, Recipients); }
};

