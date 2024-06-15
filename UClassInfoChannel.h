#pragma once

#include "BaseDeclarations.h"
#include "UChannel.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UClassInfoChannel : UChannel
{
	char __padding[0x80L];
	FClassNetCacheMgr& PendingNetMgrField() { return *GetNativePointerField<FClassNetCacheMgr*>(this, "UClassInfoChannel.PendingNetMgr"); }
	int& UncompressedSizeField() { return *GetNativePointerField<int*>(this, "UClassInfoChannel.UncompressedSize"); }
	int& CompressedSizeField() { return *GetNativePointerField<int*>(this, "UClassInfoChannel.CompressedSize"); }
	TArray<unsigned char>& CompressedClassMemoryField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UClassInfoChannel.CompressedClassMemory"); }
	int& CurrentBytePositionField() { return *GetNativePointerField<int*>(this, "UClassInfoChannel.CurrentBytePosition"); }
	bool& bIsSendingField() { return *GetNativePointerField<bool*>(this, "UClassInfoChannel.bIsSending"); }
	bool& bHasRecievedClassInfoField() { return *GetNativePointerField<bool*>(this, "UClassInfoChannel.bHasRecievedClassInfo"); }

	// Functions

	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UClassInfoChannel.Describe", result); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UClassInfoChannel.ReceivedBunch", Bunch); }
	void Tick() { NativeCall<void>(this, "UClassInfoChannel.Tick"); }
};

