#pragma once

#include "BaseDeclarations.h"
struct FQuantizedDirectionalLightSample
{
	char __padding[0x8L];
	FieldArray<FColor, 2> CoefficientsField() { return {this, "FQuantizedDirectionalLightSample.Coefficients"}; }
};

