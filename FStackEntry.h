#pragma once

#include "BaseDeclarations.h"
struct FStackEntry
{
	char __padding[0x18L];
	char * DataField() { return GetNativePointerField<char *>(this, "FStackEntry.Data"); }
	int& StrideField() { return *GetNativePointerField<int*>(this, "FStackEntry.Stride"); }
	int& CountField() { return *GetNativePointerField<int*>(this, "FStackEntry.Count"); }
	int& LoopStartIndexField() { return *GetNativePointerField<int*>(this, "FStackEntry.LoopStartIndex"); }
};

