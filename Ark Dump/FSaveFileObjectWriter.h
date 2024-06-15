#pragma once

#include "BaseDeclarations.h"
#include "FMemoryWriter.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FSaveFileObjectWriter : FMemoryWriter
{
	char __padding[0x20L];
	TArray<FName> * ExpandingNameTableField() { return GetNativePointerField<TArray<FName> *>(this, "FSaveFileObjectWriter.ExpandingNameTable"); }
	TArray<int>& EntireNamesField() { return *GetNativePointerField<TArray<int>*>(this, "FSaveFileObjectWriter.EntireNames"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FSaveFileObjectWriter.GetArchiveName", result); }
};

