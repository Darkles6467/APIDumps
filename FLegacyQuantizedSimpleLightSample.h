#pragma once

#include "BaseDeclarations.h"
struct FLegacyQuantizedSimpleLightSample
{
	char __padding[0x4L];
	FieldArray<FColor, 1> CoefficientsField() { return {this, "FLegacyQuantizedSimpleLightSample.Coefficients"}; }
};

