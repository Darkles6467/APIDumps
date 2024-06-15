#pragma once

#include "BaseDeclarations.h"
struct FMarkRelevantStaticMeshesForViewData
{
	char __padding[0x28L];
	FVector& ViewOriginField() { return *GetNativePointerField<FVector*>(this, "FMarkRelevantStaticMeshesForViewData.ViewOrigin"); }
	float& MaxDrawDistanceScaleSquaredField() { return *GetNativePointerField<float*>(this, "FMarkRelevantStaticMeshesForViewData.MaxDrawDistanceScaleSquared"); }
	int& ForcedLODLevelField() { return *GetNativePointerField<int*>(this, "FMarkRelevantStaticMeshesForViewData.ForcedLODLevel"); }
	float& LODScaleField() { return *GetNativePointerField<float*>(this, "FMarkRelevantStaticMeshesForViewData.LODScale"); }
	float& InvLODScaleField() { return *GetNativePointerField<float*>(this, "FMarkRelevantStaticMeshesForViewData.InvLODScale"); }
	float& MinScreenRadiusForCSMDepthSquaredField() { return *GetNativePointerField<float*>(this, "FMarkRelevantStaticMeshesForViewData.MinScreenRadiusForCSMDepthSquared"); }
	float& MinScreenRadiusForDepthPrepassSquaredField() { return *GetNativePointerField<float*>(this, "FMarkRelevantStaticMeshesForViewData.MinScreenRadiusForDepthPrepassSquared"); }
	bool& bForceEarlyZPassField() { return *GetNativePointerField<bool*>(this, "FMarkRelevantStaticMeshesForViewData.bForceEarlyZPass"); }
};

