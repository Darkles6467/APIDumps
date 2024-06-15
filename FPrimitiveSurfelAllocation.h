#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveSurfelAllocation
{
	char __padding[0x10L];
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelAllocation.Offset"); }
	int& NumLOD0Field() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelAllocation.NumLOD0"); }
	int& NumSurfelsField() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelAllocation.NumSurfels"); }
	int& NumInstancesField() { return *GetNativePointerField<int*>(this, "FPrimitiveSurfelAllocation.NumInstances"); }
};

