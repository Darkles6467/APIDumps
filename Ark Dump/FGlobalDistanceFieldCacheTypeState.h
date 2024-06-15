#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldCacheTypeState
{
	char __padding[0x18L];
	TArray<FVector4>& PrimitiveModifiedBoundsField() { return *GetNativePointerField<TArray<FVector4>*>(this, "FGlobalDistanceFieldCacheTypeState.PrimitiveModifiedBounds"); }

	// Functions

};

