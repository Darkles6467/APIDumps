#pragma once

#include "BaseDeclarations.h"
struct FVertexInfluence_DEPRECATED
{
	char __padding[0x8L];
	FInfluenceWeights_DEPRECATED& WeightsField() { return *GetNativePointerField<FInfluenceWeights_DEPRECATED*>(this, "FVertexInfluence_DEPRECATED.Weights"); }
	FInfluenceBones_DEPRECATED& BonesField() { return *GetNativePointerField<FInfluenceBones_DEPRECATED*>(this, "FVertexInfluence_DEPRECATED.Bones"); }
};

