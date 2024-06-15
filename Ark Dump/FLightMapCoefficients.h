#pragma once

#include "BaseDeclarations.h"
struct FLightMapCoefficients
{
	char __padding[0x15L];
	char& CoverageField() { return *GetNativePointerField<char*>(this, "FLightMapCoefficients.Coverage"); }
	FieldArray<char[4][4], 44> CoefficientsField() { return {this, "FLightMapCoefficients.Coefficients"}; }
	FieldArray<char, 4> SkyOcclusionField() { return {this, "FLightMapCoefficients.SkyOcclusion"}; }
};

