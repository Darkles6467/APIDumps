#pragma once

#include "BaseDeclarations.h"
#include "UChannel.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UControlChannel : UChannel
{
	char __padding[0x18L];
	bool& bNeedsEndianInspectionField() { return *GetNativePointerField<bool*>(this, "UControlChannel.bNeedsEndianInspection"); }
	TArray<TArray<unsigned char>>& QueuedMessagesField() { return *GetNativePointerField<TArray<TArray<unsigned char>>*>(this, "UControlChannel.QueuedMessages"); }

	// Functions

	bool CheckEndianess(FInBunch * Bunch) { return NativeCall<bool, FInBunch *>(this, "UControlChannel.CheckEndianess", Bunch); }
	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UControlChannel.Describe", result); }
	void Init(UNetConnection * InConnection, int InChannelIndex, bool InOpenedLocally) { NativeCall<void, UNetConnection *, int, bool>(this, "UControlChannel.Init", InConnection, InChannelIndex, InOpenedLocally); }
	void QueueMessage(const FOutBunch * Bunch) { NativeCall<void, const FOutBunch *>(this, "UControlChannel.QueueMessage", Bunch); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UControlChannel.ReceivedBunch", Bunch); }
	FPacketIdRange * SendBunch(FPacketIdRange * result, FOutBunch * Bunch, bool Merge) { return NativeCall<FPacketIdRange *, FPacketIdRange *, FOutBunch *, bool>(this, "UControlChannel.SendBunch", result, Bunch, Merge); }
	void Tick() { NativeCall<void>(this, "UControlChannel.Tick"); }
};

