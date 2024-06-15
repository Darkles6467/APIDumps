#pragma once

#include "BaseDeclarations.h"
struct FHitData
{
	char __padding[0x10L];
	long double& HitTimeField() { return *GetNativePointerField<long double*>(this, "FHitData.HitTime"); }
	float& HitPercentageField() { return *GetNativePointerField<float*>(this, "FHitData.HitPercentage"); }
};

