#pragma once

#include "BaseDeclarations.h"
struct FForceTarget
{
	char __padding[0x1cL];
	FVector& ForceField() { return *GetNativePointerField<FVector*>(this, "FForceTarget.Force"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FForceTarget.Position"); }
	bool& bPositionField() { return *GetNativePointerField<bool*>(this, "FForceTarget.bPosition"); }
};

