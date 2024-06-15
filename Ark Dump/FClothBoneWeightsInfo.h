#pragma once

#include "BaseDeclarations.h"
struct FClothBoneWeightsInfo
{
	char __padding[0x30L];
	FieldArray<unsigned __int16, 8> IndicesField() { return {this, "FClothBoneWeightsInfo.Indices"}; }
	FieldArray<float, 8> WeightsField() { return {this, "FClothBoneWeightsInfo.Weights"}; }
};

