#pragma once

#include "BaseDeclarations.h"
#include "FUniqueNetId.h"
#include "IOnlinePlatformData.h"

struct FUniqueNetIdUInt64 : FUniqueNetId
{
	char __padding[0x8L];
	unsigned __int64& UniqueNetIdField() { return *GetNativePointerField<unsigned __int64*>(this, "FUniqueNetIdUInt64.UniqueNetId"); }

	// Functions

	unsigned int GetHash() { return NativeCall<unsigned int>(this, "FUniqueNetIdUInt64.GetHash"); }
	FString * ToDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdUInt64.ToDebugString", result); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FUniqueNetIdUInt64.ToString", result); }
	bool IsValid() { return NativeCall<bool>(this, "FUniqueNetIdUInt64.IsValid"); }
};

