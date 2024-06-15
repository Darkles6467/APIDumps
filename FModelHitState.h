#pragma once

#include "BaseDeclarations.h"
struct FModelHitState
{
	char __padding[0x14L];
	unsigned int& SurfaceIndexField() { return *GetNativePointerField<unsigned int*>(this, "FModelHitState.SurfaceIndex"); }
	float& SurfaceWField() { return *GetNativePointerField<float*>(this, "FModelHitState.SurfaceW"); }
	bool& bHitSurfaceField() { return *GetNativePointerField<bool*>(this, "FModelHitState.bHitSurface"); }
	int& HitXField() { return *GetNativePointerField<int*>(this, "FModelHitState.HitX"); }
	int& HitYField() { return *GetNativePointerField<int*>(this, "FModelHitState.HitY"); }
};

