#pragma once

#include "BaseDeclarations.h"
#include "FMemoryWriter.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FObjectWriter : FMemoryWriter
{

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FObjectWriter.GetArchiveName", result); }
};

