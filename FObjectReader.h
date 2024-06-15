#pragma once

#include "BaseDeclarations.h"
#include "FMemoryReader.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FObjectReader : FMemoryReader
{

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FObjectReader.GetArchiveName", result); }
};

