#pragma once

#include "BaseDeclarations.h"
struct FLightSample
{
	char __padding[0x34L];
	FieldArray<float[4][3], 43> CoefficientsField() { return {this, "FLightSample.Coefficients"}; }
	bool& bIsMappedField() { return *GetNativePointerField<bool*>(this, "FLightSample.bIsMapped"); }
};

