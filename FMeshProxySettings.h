#pragma once

#include "BaseDeclarations.h"
struct FMeshProxySettings
{
	char __padding[0x28L];
	int& ScreenSizeField() { return *GetNativePointerField<int*>(this, "FMeshProxySettings.ScreenSize"); }
	int& TextureWidthField() { return *GetNativePointerField<int*>(this, "FMeshProxySettings.TextureWidth"); }
	int& TextureHeightField() { return *GetNativePointerField<int*>(this, "FMeshProxySettings.TextureHeight"); }
	bool& bRecalculateNormalsField() { return *GetNativePointerField<bool*>(this, "FMeshProxySettings.bRecalculateNormals"); }
	float& HardAngleThresholdField() { return *GetNativePointerField<float*>(this, "FMeshProxySettings.HardAngleThreshold"); }
	int& MergeDistanceField() { return *GetNativePointerField<int*>(this, "FMeshProxySettings.MergeDistance"); }
	bool& bUseClippingPlaneField() { return *GetNativePointerField<bool*>(this, "FMeshProxySettings.bUseClippingPlane"); }
	float& ClippingLevelField() { return *GetNativePointerField<float*>(this, "FMeshProxySettings.ClippingLevel"); }
	int& AxisIndexField() { return *GetNativePointerField<int*>(this, "FMeshProxySettings.AxisIndex"); }
	bool& bPlaneNegativeHalfspaceField() { return *GetNativePointerField<bool*>(this, "FMeshProxySettings.bPlaneNegativeHalfspace"); }

	// Functions

};

