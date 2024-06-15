#pragma once

#include "BaseDeclarations.h"
struct FSortedLines
{
	char __padding[0x18L];
	FString& LineField() { return *GetNativePointerField<FString*>(this, "FSortedLines.Line"); }
	int& SortIndexField() { return *GetNativePointerField<int*>(this, "FSortedLines.SortIndex"); }
	unsigned int& PoolIndexField() { return *GetNativePointerField<unsigned int*>(this, "FSortedLines.PoolIndex"); }
};

