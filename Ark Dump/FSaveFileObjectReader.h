#pragma once

#include "BaseDeclarations.h"
#include "FMemoryReader.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FSaveFileObjectReader : FMemoryReader
{
	char __padding[0x8L];
	TArray<FName> * NameTableField() { return GetNativePointerField<TArray<FName> *>(this, "FSaveFileObjectReader.NameTable"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FSaveFileObjectReader.GetArchiveName", result); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FSaveFileObjectReader.Seek", InPos); }
	__int64 Tell() { return NativeCall<__int64>(this, "FSaveFileObjectReader.Tell"); }
};

