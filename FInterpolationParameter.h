#pragma once

#include "BaseDeclarations.h"
struct FInterpolationParameter
{
	char __padding[0x8L];
	float& InterpolationTimeField() { return *GetNativePointerField<float*>(this, "FInterpolationParameter.InterpolationTime"); }
	TEnumAsByte<enum EFilterInterpolationType>& InterpolationTypeField() { return *GetNativePointerField<TEnumAsByte<enum EFilterInterpolationType>*>(this, "FInterpolationParameter.InterpolationType"); }

	// Functions

};

