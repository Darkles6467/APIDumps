#pragma once

#include "BaseDeclarations.h"
#include "FMemoryArchive.h"

struct FMemoryWriter : FMemoryArchive
{
	char __padding[0x10L];
	TArray<unsigned char> * BytesField() { return GetNativePointerField<TArray<unsigned char> *>(this, "FMemoryWriter.Bytes"); }
	const FName& ArchiveNameField() { return *GetNativePointerField<const FName*>(this, "FMemoryWriter.ArchiveName"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FMemoryWriter.GetArchiveName", result); }
	void Serialize(void * Data, __int64 Num) { NativeCall<void, void *, __int64>(this, "FMemoryWriter.Serialize", Data, Num); }
};

