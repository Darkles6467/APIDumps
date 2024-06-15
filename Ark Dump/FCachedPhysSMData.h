#pragma once

#include "BaseDeclarations.h"
struct FCachedPhysSMData
{
	char __padding[0x10L];
	FVector& Scale3DField() { return *GetNativePointerField<FVector*>(this, "FCachedPhysSMData.Scale3D"); }
	int& CachedDataIndexField() { return *GetNativePointerField<int*>(this, "FCachedPhysSMData.CachedDataIndex"); }

	// Functions

};

