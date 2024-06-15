#pragma once

#include "BaseDeclarations.h"
#include "FMemoryReader.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FSaveObjectReader : FMemoryReader
{
	char __padding[0x10L];
	TArray<FName> * NameTableField() { return GetNativePointerField<TArray<FName> *>(this, "FSaveObjectReader.NameTable"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FSaveObjectReader.GetArchiveName", result); }
};

