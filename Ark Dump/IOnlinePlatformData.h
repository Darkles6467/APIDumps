#pragma once

#include "BaseDeclarations.h"
struct IOnlinePlatformData
{
	char __padding[0x8L];

	// Functions

	bool Compare(IOnlinePlatformData * Other) { return NativeCall<bool, IOnlinePlatformData *>(this, "IOnlinePlatformData.Compare", Other); }
	int GetNetSize() { return NativeCall<int>(this, "IOnlinePlatformData.GetNetSize"); }
	FString * ToHumanReadableString(FString * result) { return NativeCall<FString *, FString *>(this, "IOnlinePlatformData.ToHumanReadableString", result); }
	bool operator==(IOnlinePlatformData * Other) { return NativeCall<bool, IOnlinePlatformData *>(this, "IOnlinePlatformData.operator==", Other); }
	bool operator!=(IOnlinePlatformData * Other) { return NativeCall<bool, IOnlinePlatformData *>(this, "IOnlinePlatformData.operator!=", Other); }
};

