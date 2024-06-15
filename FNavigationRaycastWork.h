#pragma once

#include "BaseDeclarations.h"
struct FNavigationRaycastWork
{
	char __padding[0x38L];
	const FVector& RayStartField() { return *GetNativePointerField<const FVector*>(this, "FNavigationRaycastWork.RayStart"); }
	const FVector& RayEndField() { return *GetNativePointerField<const FVector*>(this, "FNavigationRaycastWork.RayEnd"); }
	bool& bDidHitField() { return *GetNativePointerField<bool*>(this, "FNavigationRaycastWork.bDidHit"); }
};

