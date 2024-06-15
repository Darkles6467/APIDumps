#pragma once

#include "BaseDeclarations.h"
#include "FMemoryWriter.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FSaveObjectWriter : FMemoryWriter
{
	char __padding[0x18L];
	TArray<FName> * ExpandingNameTableField() { return GetNativePointerField<TArray<FName> *>(this, "FSaveObjectWriter.ExpandingNameTable"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FSaveObjectWriter.GetArchiveName", result); }
};

