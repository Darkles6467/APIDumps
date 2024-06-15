#pragma once

#include "BaseDeclarations.h"
struct FProxySettings
{
	char __padding[0x28L];
	int& ScreenSizeField() { return *GetNativePointerField<int*>(this, "FProxySettings.ScreenSize"); }
	int& TextureWidthField() { return *GetNativePointerField<int*>(this, "FProxySettings.TextureWidth"); }
	int& TextureHeightField() { return *GetNativePointerField<int*>(this, "FProxySettings.TextureHeight"); }
	bool& bRecalculateNormalsField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bRecalculateNormals"); }
	float& HardAngleThresholdField() { return *GetNativePointerField<float*>(this, "FProxySettings.HardAngleThreshold"); }
	int& MergeDistanceField() { return *GetNativePointerField<int*>(this, "FProxySettings.MergeDistance"); }
	bool& bUseClippingPlaneField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bUseClippingPlane"); }
	float& ClippingLevelField() { return *GetNativePointerField<float*>(this, "FProxySettings.ClippingLevel"); }
	int& AxisIndexField() { return *GetNativePointerField<int*>(this, "FProxySettings.AxisIndex"); }
	bool& bPlaneNegativeHalfspaceField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bPlaneNegativeHalfspace"); }
	bool& bUseMassiveLODField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bUseMassiveLOD"); }
	bool& bUseAggregateLODField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bUseAggregateLOD"); }
	bool& bFlatterMaterialBeforeProcessField() { return *GetNativePointerField<bool*>(this, "FProxySettings.bFlatterMaterialBeforeProcess"); }

	// Functions

};

