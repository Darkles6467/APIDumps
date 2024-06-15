#pragma once

#include "BaseDeclarations.h"
#include "FReassembledUdpMessage.h"

struct FUdpMessageResequencer
{
	char __padding[0x28L];
	unsigned __int64& NextSequenceField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageResequencer.NextSequence"); }
	unsigned __int64& HighestReceivedSequenceField() { return *GetNativePointerField<unsigned __int64*>(this, "FUdpMessageResequencer.HighestReceivedSequence"); }
	TArray<TSharedPtr<FReassembledUdpMessage,1>>& MessageHeapField() { return *GetNativePointerField<TArray<TSharedPtr<FReassembledUdpMessage,1>>*>(this, "FUdpMessageResequencer.MessageHeap"); }
	unsigned __int16& WindowSizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FUdpMessageResequencer.WindowSize"); }

	// Functions

	bool Resequence(const TSharedPtr<FReassembledUdpMessage,1> * Message) { return NativeCall<bool, const TSharedPtr<FReassembledUdpMessage,1> *>(this, "FUdpMessageResequencer.Resequence", Message); }
};

