#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveSurfelFreeEntry
{
	char __padding[0x8L];
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelFreeEntry.Offset"); }
	int& NumSurfelsField() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelFreeEntry.NumSurfels"); }
};

