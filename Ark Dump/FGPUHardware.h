#pragma once

#include "BaseDeclarations.h"
struct FGPUHardware
{
	char __padding[0x58L];
	const FGPUDriverInfo& DriverInfoField() { return *GetNativePointerField<const FGPUDriverInfo*>(this, "FGPUHardware.DriverInfo"); }

	// Functions

	FBlackListEntry * FindDriverBlacklistEntry(FBlackListEntry * result) { return NativeCall<FBlackListEntry *, FBlackListEntry *>(this, "FGPUHardware.FindDriverBlacklistEntry", result); }
};

