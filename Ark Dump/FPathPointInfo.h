#pragma once

#include "BaseDeclarations.h"
struct FPathPointInfo
{
	char __padding[0x38L];
	FNavPathPoint& PointField() { return *GetNativePointerField<FNavPathPoint*>(this, "FPathPointInfo.Point"); }
	FVector& EdgePt0Field() { return *GetNativePointerField<FVector*>(this, "FPathPointInfo.EdgePt0"); }
	FVector& EdgePt1Field() { return *GetNativePointerField<FVector*>(this, "FPathPointInfo.EdgePt1"); }
};

