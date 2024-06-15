#pragma once

#include "BaseDeclarations.h"
#include "FMemoryArchive.h"

struct FMemoryReader : FMemoryArchive
{
	char __padding[0x8L];
	const TArray<unsigned char> * BytesField() { return GetNativePointerField<const TArray<unsigned char> *>(this, "FMemoryReader.Bytes"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FMemoryReader.GetArchiveName", result); }
	void Serialize(void * Data, __int64 Num) { NativeCall<void, void *, __int64>(this, "FMemoryReader.Serialize", Data, Num); }
};

