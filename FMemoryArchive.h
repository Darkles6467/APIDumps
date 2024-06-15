#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FMemoryArchive : FArchive
{
	char __padding[0x8L];
	__int64& OffsetField() { return *GetNativePointerField<__int64*>(this, "FMemoryArchive.Offset"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FMemoryArchive.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FMemoryArchive.Seek", InPos); }
};

