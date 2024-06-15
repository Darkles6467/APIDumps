#pragma once

#include "BaseDeclarations.h"
struct FAIResourceLock
{
	char __padding[0x4L];
	FieldArray<char, 4> LocksField() { return {this, "FAIResourceLock.Locks"}; }

	// Functions

	FString * GetLockSourceName(FString * result) { return NativeCall<FString *, FString *>(this, "FAIResourceLock.GetLockSourceName", result); }
};

