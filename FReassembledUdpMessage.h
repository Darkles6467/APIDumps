#pragma once

#include "BaseDeclarations.h"
struct FReassembledUdpMessage
{
	char __padding[0x60L];
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReassembledUdpMessage.Data"); }
	FDateTime& LastSegmentTimeField() { return *GetNativePointerField<FDateTime*>(this, "FReassembledUdpMessage.LastSegmentTime"); }
	unsigned __int16& PendingSegmentsCountField() { return *GetNativePointerField<unsigned __int16*>(this, "FReassembledUdpMessage.PendingSegmentsCount"); }
	int& ReceivedBytesField() { return *GetNativePointerField<int*>(this, "FReassembledUdpMessage.ReceivedBytes"); }
	int& RetransmitRequestsCountField() { return *GetNativePointerField<int*>(this, "FReassembledUdpMessage.RetransmitRequestsCount"); }
	FIPv4Endpoint& SenderField() { return *GetNativePointerField<FIPv4Endpoint*>(this, "FReassembledUdpMessage.Sender"); }
	unsigned __int64& SequenceField() { return *GetNativePointerField<unsigned __int64*>(this, "FReassembledUdpMessage.Sequence"); }

	// Functions

	void Reassemble(int SegmentNumber, int SegmentOffset, const TArray<unsigned char> * SegmentData, const FDateTime * CurrentTime) { NativeCall<void, int, int, const TArray<unsigned char> *, const FDateTime *>(this, "FReassembledUdpMessage.Reassemble", SegmentNumber, SegmentOffset, SegmentData, CurrentTime); }
};

