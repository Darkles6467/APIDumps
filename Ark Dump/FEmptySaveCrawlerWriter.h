#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FEmptySaveCrawlerWriter : FArchive
{

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FEmptySaveCrawlerWriter.GetArchiveName", result); }
};

