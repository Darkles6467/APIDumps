#pragma once

#include "BaseDeclarations.h"
struct FNetDeltaSerializeInfo
{
	char __padding[0x58L];
	void * DataField() { return GetNativePointerField<void *>(this, "FNetDeltaSerializeInfo.Data"); }
	int& NumPotentialBitsField() { return *GetNativePointerField<int*>(this, "FNetDeltaSerializeInfo.NumPotentialBits"); }
	int& NumBytesTouchedField() { return *GetNativePointerField<int*>(this, "FNetDeltaSerializeInfo.NumBytesTouched"); }
	FString& DebugNameField() { return *GetNativePointerField<FString*>(this, "FNetDeltaSerializeInfo.DebugName"); }
};

