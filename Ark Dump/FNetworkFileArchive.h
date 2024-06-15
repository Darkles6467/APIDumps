#pragma once

#include "BaseDeclarations.h"
#include "FMemoryWriter.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FBufferArchive : FMemoryWriter
{
	char __padding[0x10L];

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FBufferArchive.GetArchiveName", result); }
};

struct FNetworkFileArchive : FBufferArchive
{
};

