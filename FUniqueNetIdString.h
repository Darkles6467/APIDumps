#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetId.h"
#include "IOnlinePlatformData.h"

struct FUniqueNetIdString : FUniqueNetId
{
	char __padding[0x10L];
	FString& UniqueNetIdStrField() { return *GetNativePointerField<FString*>(this, "FUniqueNetIdString.UniqueNetIdStr"); }

	// Functions

	unsigned int GetHash() { return NativeCall<unsigned int>(this, "FUniqueNetIdString.GetHash"); }
	int GetSize() { return NativeCall<int>(this, "FUniqueNetIdString.GetSize"); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdString.IsValid"); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdString.ToString", result); }
};

