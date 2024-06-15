#pragma once

#include "BaseDeclarations.h"
struct FClothConstrainCoeff
{
	char __padding[0xcL];
	float& ClothMaxDistanceField() { return *GetNativePointerField<float*>(this, "FClothConstrainCoeff.ClothMaxDistance"); }
	float& ClothBackstopRadiusField() { return *GetNativePointerField<float*>(this, "FClothConstrainCoeff.ClothBackstopRadius"); }
	float& ClothBackstopDistanceField() { return *GetNativePointerField<float*>(this, "FClothConstrainCoeff.ClothBackstopDistance"); }
};

