#pragma once

#include "BaseDeclarations.h"
#include "FMemoryReader.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FArrayReader : FMemoryReader
{
	char __padding[0x10L];

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArrayReader.GetArchiveName", result); }
};

