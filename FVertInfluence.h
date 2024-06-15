#pragma once

#include "BaseDeclarations.h"
struct FVertInfluence
{
	char __padding[0xcL];
	float& WeightField() { return *GetNativePointerField<float*>(this, "FVertInfluence.Weight"); }
	unsigned int& VertIndexField() { return *GetNativePointerField<unsigned int*>(this, "FVertInfluence.VertIndex"); }
	unsigned __int16& BoneIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FVertInfluence.BoneIndex"); }
};

