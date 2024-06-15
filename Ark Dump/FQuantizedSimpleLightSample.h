#pragma once

#include "BaseDeclarations.h"
struct FQuantizedSimpleLightSample
{
	char __padding[0x8L];
	FieldArray<FColor, 2> CoefficientsField() { return {this, "FQuantizedSimpleLightSample.Coefficients"}; }
};

