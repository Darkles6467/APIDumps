#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveCountMemGUID : FArchive
{
	char __padding[0x8L];
	unsigned __int64& MemField() { return *GetNativePointerField<unsigned __int64*>(this, "FArchiveCountMemGUID.Mem"); }

	// Functions

	void CountBytes(void * V, __int64 Length) { NativeCall<void, void *, __int64>(this, "FArchiveCountMemGUID.CountBytes", V, Length); }
};

