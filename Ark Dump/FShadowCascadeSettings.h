#pragma once

#include "BaseDeclarations.h"
struct FShadowCascadeSettings
{
	char __padding[0x170L];
	float& SplitNearField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.SplitNear"); }
	float& SplitFarField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.SplitFar"); }
	float& SplitNearFadeRegionField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.SplitNearFadeRegion"); }
	float& SplitFarFadeRegionField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.SplitFarFadeRegion"); }
	float& FadePlaneOffsetField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.FadePlaneOffset"); }
	float& FadePlaneLengthField() { return *GetNativePointerField<float*>(this, "FShadowCascadeSettings.FadePlaneLength"); }
	FConvexVolume& ShadowBoundsAccurateField() { return *GetNativePointerField<FConvexVolume*>(this, "FShadowCascadeSettings.ShadowBoundsAccurate"); }
	bool& bFarShadowCascadeField() { return *GetNativePointerField<bool*>(this, "FShadowCascadeSettings.bFarShadowCascade"); }

	// Functions

	FShadowCascadeSettings * operator=(const FShadowCascadeSettings * __that) { return NativeCall<FShadowCascadeSettings *, const FShadowCascadeSettings *>(this, "FShadowCascadeSettings.operator=", __that); }
};

