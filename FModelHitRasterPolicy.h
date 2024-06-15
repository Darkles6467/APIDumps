#pragma once

#include "BaseDeclarations.h"
struct FModelHitRasterPolicy
{
	char __padding[0x10L];
	unsigned int& SurfaceIndexField() { return *GetNativePointerField<unsigned int*>(this, "FModelHitRasterPolicy.SurfaceIndex"); }
	FModelHitState * HitStateField() { return GetNativePointerField<FModelHitState *>(this, "FModelHitRasterPolicy.HitState"); }
};

