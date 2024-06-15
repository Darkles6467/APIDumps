#pragma once

#include "BaseDeclarations.h"
struct FProxyMeshSettings
{
	char __padding[0xcL];
	float& MaxDrawDistanceField() { return *GetNativePointerField<float*>(this, "FProxyMeshSettings.MaxDrawDistance"); }
	float& TransitionDistanceField() { return *GetNativePointerField<float*>(this, "FProxyMeshSettings.TransitionDistance"); }
	float& TrianglePercentField() { return *GetNativePointerField<float*>(this, "FProxyMeshSettings.TrianglePercent"); }

	// Functions

};

