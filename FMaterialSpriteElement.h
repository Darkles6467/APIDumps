#pragma once

#include "BaseDeclarations.h"
struct FMaterialSpriteElement
{
	char __padding[0x28L];
	UCurveFloat * DistanceToOpacityCurveField() { return GetNativePointerField<UCurveFloat *>(this, "FMaterialSpriteElement.DistanceToOpacityCurve"); }
	float& BaseSizeXField() { return *GetNativePointerField<float*>(this, "FMaterialSpriteElement.BaseSizeX"); }
	float& BaseSizeYField() { return *GetNativePointerField<float*>(this, "FMaterialSpriteElement.BaseSizeY"); }
	UCurveFloat * DistanceToSizeCurveField() { return GetNativePointerField<UCurveFloat *>(this, "FMaterialSpriteElement.DistanceToSizeCurve"); }

	// Functions

};

