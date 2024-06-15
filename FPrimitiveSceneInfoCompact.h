#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveSceneInfoCompact
{
	char __padding[0x40L];
	FPrimitiveSceneInfo * PrimitiveSceneInfoField() { return GetNativePointerField<FPrimitiveSceneInfo *>(this, "FPrimitiveSceneInfoCompact.PrimitiveSceneInfo"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FPrimitiveSceneInfoCompact.Bounds"); }
	float& MinDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneInfoCompact.MinDrawDistance"); }
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneInfoCompact.MaxDrawDistance"); }
	float& LpvBiasMultiplierField() { return *GetNativePointerField<float*>(this, "FPrimitiveSceneInfoCompact.LpvBiasMultiplier"); }
	int& VisibilityIdField() { return *GetNativePointerField<int*>(this, "FPrimitiveSceneInfoCompact.VisibilityId"); }
};

