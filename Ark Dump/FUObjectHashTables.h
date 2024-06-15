#pragma once

#include "BaseDeclarations.h"
struct FUObjectHashTables
{
	char __padding[0x1b8L];
	FWindowsCriticalSection& CriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FUObjectHashTables.CriticalSection"); }

	// Functions

	void Prune() { NativeCall<void>(this, "FUObjectHashTables.Prune"); }
};

