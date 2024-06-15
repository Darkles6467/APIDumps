#pragma once

#include "BaseDeclarations.h"
struct FUdpMessageSegmenter
{
	char __padding[0x40L];
	TSharedPtr<IMessageData,1>& MessageField() { return *GetNativePointerField<TSharedPtr<IMessageData,1>*>(this, "FUdpMessageSegmenter.Message"); }
	unsigned __int16& PendingSegmentsCountField() { return *GetNativePointerField<unsigned __int16*>(this, "FUdpMessageSegmenter.PendingSegmentsCount"); }
	unsigned __int16& SegmentSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FUdpMessageSegmenter.SegmentSize"); }

	// Functions

	bool GetNextPendingSegment(TArray<unsigned char> * OutData, unsigned __int16 * OutSegment) { return NativeCall<bool, TArray<unsigned char> *, unsigned __int16 *>(this, "FUdpMessageSegmenter.GetNextPendingSegment", OutData, OutSegment); }
	void Initialize() { NativeCall<void>(this, "FUdpMessageSegmenter.Initialize"); }
	void MarkForRetransmission() { NativeCall<void>(this, "FUdpMessageSegmenter.MarkForRetransmission"); }
};

