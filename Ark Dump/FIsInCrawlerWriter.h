#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FIsInCrawlerWriter : FArchive
{
	char __padding[0x8L];

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FIsInCrawlerWriter.GetArchiveName", result); }
};

