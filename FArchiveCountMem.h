#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FArchiveCountMem : FArchiveUObject
{
	char __padding[0x10L];
	unsigned __int64& NumField() { return *GetNativePointerField<unsigned __int64*>(this, "FArchiveCountMem.Num"); }
	unsigned __int64& MaxField() { return *GetNativePointerField<unsigned __int64*>(this, "FArchiveCountMem.Max"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchiveCountMem.GetArchiveName", result); }
};

