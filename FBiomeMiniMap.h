#pragma once

#include "BaseDeclarations.h"
struct FBiomeMiniMap
{
	char __padding[0x18L];
	UFloatMap * MapField() { return GetNativePointerField<UFloatMap *>(this, "FBiomeMiniMap.Map"); }
	TArray<FBiomeMiniMapColor>& HeightsColorsField() { return *GetNativePointerField<TArray<FBiomeMiniMapColor>*>(this, "FBiomeMiniMap.HeightsColors"); }

	// Functions

	FBiomeMiniMap * operator=(const FBiomeMiniMap * __that) { return NativeCall<FBiomeMiniMap *, const FBiomeMiniMap *>(this, "FBiomeMiniMap.operator=", __that); }
};

