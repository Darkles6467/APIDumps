#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"
#include "FArrayReader.h"
#include "IMessageData.h"

struct FUdpMessageProcessor : FRunnable
{
	char __padding[0x138L];
	TQueue<FUdpMessageProcessor::FInboundSegment,0>& InboundSegmentsField() { return *GetNativePointerField<TQueue<FUdpMessageProcessor::FInboundSegment,0>*>(this, "FUdpMessageProcessor.InboundSegments"); }
	TQueue<FUdpMessageProcessor::FOutboundMessage,0>& OutboundMessagesField() { return *GetNativePointerField<TQueue<FUdpMessageProcessor::FOutboundMessage,0>*>(this, "FUdpMessageProcessor.OutboundMessages"); }
	FUdpMessageBeacon * BeaconField() { return GetNativePointerField<FUdpMessageBeacon *>(this, "FUdpMessageProcessor.Beacon"); }
	FDateTime& CurrentTimeField() { return *GetNativePointerField<FDateTime*>(this, "FUdpMessageProcessor.CurrentTime"); }
	int& LastSentMessageField() { return *GetNativePointerField<int*>(this, "FUdpMessageProcessor.LastSentMessage"); }
	FGuid& LocalNodeIdField() { return *GetNativePointerField<FGuid*>(this, "FUdpMessageProcessor.LocalNodeId"); }
	FIPv4Endpoint& MulticastEndpointField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FUdpMessageProcessor.MulticastEndpoint"); }
	FUdpSocketSender * SenderField() { return GetNativePointerField<FUdpSocketSender *>(this, "FUdpMessageProcessor.Sender"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FUdpMessageProcessor.Stopping"); }

	// Functions

	void FNodeInfo() { NativeCall<void>(this, "FUdpMessageProcessor.FNodeInfo"); }
	FUdpMessageProcessor::FOutboundMessage * FOutboundMessage(const FUdpMessageProcessor::FOutboundMessage * __that) { return NativeCall<FUdpMessageProcessor::FOutboundMessage *, const FUdpMessageProcessor::FOutboundMessage *>(this, "FUdpMessageProcessor.FOutboundMessage", __that); }
	void AcknowledgeReceipt(int MessageId, const FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, int, const FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.AcknowledgeReceipt", MessageId, NodeInfo); }
	void ConsumeInboundSegments() { NativeCall<void>(this, "FUdpMessageProcessor.ConsumeInboundSegments"); }
	void ConsumeOutboundMessages() { NativeCall<void>(this, "FUdpMessageProcessor.ConsumeOutboundMessages"); }
	bool EnqueueInboundSegment(const TSharedPtr<FArrayReader,1> * Data, const FIPv4Endpoint * InSender) { return NativeCall<bool, const TSharedPtr<FArrayReader,1> *, const FIPv4Endpoint *>(this, "FUdpMessageProcessor.EnqueueInboundSegment", Data, InSender); }
	bool EnqueueOutboundMessage(const TSharedRef<IMessageData,1> * Data, const FGuid * Recipient) { return NativeCall<bool, const TSharedRef<IMessageData,1> *, const FGuid *>(this, "FUdpMessageProcessor.EnqueueOutboundMessage", Data, Recipient); }
	void HandleMessageDataStateChanged() { NativeCall<void>(this, "FUdpMessageProcessor.HandleMessageDataStateChanged"); }
	bool Init() { return NativeCall<bool>(this, "FUdpMessageProcessor.Init"); }
	void ProcessByeSegment(FUdpMessageProcessor::FInboundSegment * Segment, FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FInboundSegment *, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.ProcessByeSegment", Segment, NodeInfo); }
	void ProcessDataSegment(FUdpMessageProcessor::FInboundSegment * Segment, FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FInboundSegment *, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.ProcessDataSegment", Segment, NodeInfo); }
	void ProcessHelloSegment(FUdpMessageProcessor::FInboundSegment * Segment, FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FInboundSegment *, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.ProcessHelloSegment", Segment, NodeInfo); }
	void ProcessRetransmitSegment(FUdpMessageProcessor::FInboundSegment * Segment, FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FInboundSegment *, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.ProcessRetransmitSegment", Segment, NodeInfo); }
	void ProcessTimeoutSegment(FUdpMessageProcessor::FInboundSegment * Segment, FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FInboundSegment *, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.ProcessTimeoutSegment", Segment, NodeInfo); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FUdpMessageProcessor.Run"); }
	void Stop() { NativeCall<void>(this, "FUdpMessageProcessor.Stop"); }
	void UpdateKnownNodes() { NativeCall<void>(this, "FUdpMessageProcessor.UpdateKnownNodes"); }
	void UpdateSegmenters(FUdpMessageProcessor::FNodeInfo * NodeInfo) { NativeCall<void, FUdpMessageProcessor::FNodeInfo *>(this, "FUdpMessageProcessor.UpdateSegmenters", NodeInfo); }
	void UpdateStaticNodes() { NativeCall<void>(this, "FUdpMessageProcessor.UpdateStaticNodes"); }
};

