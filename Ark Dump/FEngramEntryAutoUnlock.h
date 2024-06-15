#pragma once

#include "BaseDeclarations.h"
struct FEngramEntryAutoUnlock
{
	char __padding[0x18L];
	FString& EngramClassNameField() { return *GetNativePointerField<FString*>(this, "FEngramEntryAutoUnlock.EngramClassName"); }
	int& LevelToAutoUnlockField() { return *GetNativePointerField<int*>(this, "FEngramEntryAutoUnlock.LevelToAutoUnlock"); }

	// Functions

	FEngramEntryAutoUnlock * operator=(const FEngramEntryAutoUnlock * __that) { return NativeCall<FEngramEntryAutoUnlock *, const FEngramEntryAutoUnlock *>(this, "FEngramEntryAutoUnlock.operator=", __that); }
};

