#pragma once

#include "BaseDeclarations.h"
struct FNetworkGUID
{
	char __padding[0x4L];
	unsigned int& ValueField() { return *GetNativePointerField<unsigned int*>(this, "FNetworkGUID.Value"); }

	// Functions

	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FNetworkGUID.NetSerialize", Ar, Map, bOutSuccess); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "FNetworkGUID.ToString", result); }
};

