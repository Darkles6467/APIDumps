#pragma once

#include "BaseDeclarations.h"
struct FCachedPerTriPhysSMData
{
	char __padding[0x10L];
	FVector& Scale3DField() { return *GetNativePointerField<FVector*>(this, "FCachedPerTriPhysSMData.Scale3D"); }
	int& CachedDataIndexField() { return *GetNativePointerField<int*>(this, "FCachedPerTriPhysSMData.CachedDataIndex"); }

	// Functions

};

