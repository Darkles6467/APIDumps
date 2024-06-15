#pragma once

#include "BaseDeclarations.h"
struct FInfluenceWeights_DEPRECATED
{
	char __padding[0x4L];
	unsigned int& InfluenceWeightsDWORDField() { return *GetNativePointerField<unsigned int*>(this, "FInfluenceWeights_DEPRECATED.InfluenceWeightsDWORD"); }
};

