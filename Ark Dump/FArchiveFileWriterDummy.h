#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveFileWriterDummy : FArchive
{
	char __padding[0x8L];
	__int64& PosField() { return *GetNativePointerField<__int64*>(this, "FArchiveFileWriterDummy.Pos"); }

	// Functions

	FString * GetArchiveName(FString * result) { return NativeCall<FString *, FString *>(this, "FArchiveFileWriterDummy.GetArchiveName", result); }
};

