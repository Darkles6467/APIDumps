#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FArchiveCountConfigMem : FArchive
{
	char __padding[0x10L];
	unsigned __int64& NumField() { return *GetNativePointerField<unsigned __int64*>(this, "FArchiveCountConfigMem.Num"); }
	unsigned __int64& MaxField() { return *GetNativePointerField<unsigned __int64*>(this, "FArchiveCountConfigMem.Max"); }

	// Functions

	void CountBytes(unsigned __int64 InNum, unsigned __int64 InMax) { NativeCall<void, unsigned __int64, unsigned __int64>(this, "FArchiveCountConfigMem.CountBytes", InNum, InMax); }
};

