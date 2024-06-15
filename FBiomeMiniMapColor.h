#pragma once

#include "BaseDeclarations.h"
struct FBiomeMiniMapColor
{
	char __padding[0x14L];
	float& HeightField() { return *GetNativePointerField<float*>(this, "FBiomeMiniMapColor.Height"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBiomeMiniMapColor.Color"); }

	// Functions

};

