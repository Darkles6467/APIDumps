#pragma once

#include "BaseDeclarations.h"
struct FSceneViewProjectionData
{
	char __padding[0xa0L];
	FMatrix& ViewMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FSceneViewProjectionData.ViewMatrix"); }
	FMatrix& ProjectionMatrixField() { return *GetNativePointerField<FMatrix*>(this, "FSceneViewProjectionData.ProjectionMatrix"); }
	FIntRect& ViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FSceneViewProjectionData.ViewRect"); }
	FIntRect& ConstrainedViewRectField() { return *GetNativePointerField<FIntRect*>(this, "FSceneViewProjectionData.ConstrainedViewRect"); }

	// Functions

	void SetViewRectangle(const FIntRect * InViewRect) { NativeCall<void, const FIntRect *>(this, "FSceneViewProjectionData.SetViewRectangle", InViewRect); }
};

struct FSceneViewInitOptions : FSceneViewProjectionData
{
	char __padding[0xc0L];
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneViewInitOptions.BackgroundColor"); }
	FLinearColor& OverlayColorField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneViewInitOptions.OverlayColor"); }
	FLinearColor& ColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "FSceneViewInitOptions.ColorScale"); }
	EStereoscopicPass& StereoPassField() { return *GetNativePointerField<EStereoscopicPass*>(this, "FSceneViewInitOptions.StereoPass"); }
	float& WorldToMetersScaleField() { return *GetNativePointerField<float*>(this, "FSceneViewInitOptions.WorldToMetersScale"); }
	FIntPoint& CursorPosField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneViewInitOptions.CursorPos"); }
	float& LODDistanceFactorField() { return *GetNativePointerField<float*>(this, "FSceneViewInitOptions.LODDistanceFactor"); }
	float& OverrideFarClippingPlaneDistanceField() { return *GetNativePointerField<float*>(this, "FSceneViewInitOptions.OverrideFarClippingPlaneDistance"); }
	bool& bInCameraCutField() { return *GetNativePointerField<bool*>(this, "FSceneViewInitOptions.bInCameraCut"); }
	bool& bOriginOffsetThisFrameField() { return *GetNativePointerField<bool*>(this, "FSceneViewInitOptions.bOriginOffsetThisFrame"); }

	// Functions

};

