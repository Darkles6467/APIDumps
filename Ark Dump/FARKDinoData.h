#pragma once

#include "BaseDeclarations.h"
struct FARKDinoData
{
	char __padding[0x40L];
	TArray<unsigned char>& DinoDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FARKDinoData.DinoData"); }
	FString& DinoNameInMapField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoNameInMap"); }
	FString& DinoNameField() { return *GetNativePointerField<FString*>(this, "FARKDinoData.DinoName"); }
	bool& bNetInfoFromClientField() { return *GetNativePointerField<bool*>(this, "FARKDinoData.bNetInfoFromClient"); }

	// Functions

	bool NetSerialize(FArchive * Ar, UPackageMap * Map, bool * bOutSuccess) { return NativeCall<bool, FArchive *, UPackageMap *, bool *>(this, "FARKDinoData.NetSerialize", Ar, Map, bOutSuccess); }
};

