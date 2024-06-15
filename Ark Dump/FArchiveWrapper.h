#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveWrapper : FArchive
{
	char __padding[0x8L];

	// Functions

	bool Close() { return NativeCall<bool>(this, "FArchiveWrapper.Close"); }
	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchiveWrapper.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FArchiveWrapper.Seek", InPos); }
	void Serialize(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FArchiveWrapper.Serialize", V, Length); }
	__int64 Tell() { return NativeCall<__int64>(this, "FArchiveWrapper.Tell"); }
};

