#pragma once

#include "BaseDeclarations.h"
#include "UChannel.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBattlEyeChannel : UChannel
{
	char __padding[0x18L];
	bool& bIsInitializedField() { return *GetNativePointerField<bool*>(this, "UBattlEyeChannel.bIsInitialized"); }
	bool& bIsServerField() { return *GetNativePointerField<bool*>(this, "UBattlEyeChannel.bIsServer"); }
	int& iPIDField() { return *GetNativePointerField<int*>(this, "UBattlEyeChannel.iPID"); }
	TArray<FBattlEyePacket>& DataPacketsField() { return *GetNativePointerField<TArray<FBattlEyePacket>*>(this, "UBattlEyeChannel.DataPackets"); }

	// Functions

	void AddPacket(const void * Data, unsigned __int64 DataLength) { NativeCall<void, const void *, unsigned __int64>(this, "UBattlEyeChannel.AddPacket", Data, DataLength); }
	FString * Describe(FString * result) { return NativeCall<FString *, FString *>(this, "UBattlEyeChannel.Describe", result); }
	void ReceivedBunch(FInBunch * Bunch) { NativeCall<void, FInBunch *>(this, "UBattlEyeChannel.ReceivedBunch", Bunch); }
	void Tick() { NativeCall<void>(this, "UBattlEyeChannel.Tick"); }
};

