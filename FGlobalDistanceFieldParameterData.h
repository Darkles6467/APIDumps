#pragma once

#include "BaseDeclarations.h"
struct FGlobalDistanceFieldParameterData
{
	char __padding[0xb0L];
	FieldArray<FVector4[4], 44> CenterAndExtentField() { return {this, "FGlobalDistanceFieldParameterData.CenterAndExtent"}; }
	FieldArray<FVector4[4], 44> WorldToUVAddAndMulField() { return {this, "FGlobalDistanceFieldParameterData.WorldToUVAddAndMul"}; }
	float& GlobalDFResolutionField() { return *GetNativePointerField<float*>(this, "FGlobalDistanceFieldParameterData.GlobalDFResolution"); }
	float& MaxDistanceField() { return *GetNativePointerField<float*>(this, "FGlobalDistanceFieldParameterData.MaxDistance"); }
};

