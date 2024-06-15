#pragma once

#include "BaseDeclarations.h"
struct FUMGViewportCameraTransform
{
	char __padding[0x50L];
	TSharedPtr<FCurveSequence,0>& TransitionCurveField() { return *GetNativePointerField<TSharedPtr<FCurveSequence,0>*>(this, "FUMGViewportCameraTransform.TransitionCurve"); }
	FVector& ViewLocationField() { return *GetNativePointerField<FVector*>(this, "FUMGViewportCameraTransform.ViewLocation"); }
	FRotator& ViewRotationField() { return *GetNativePointerField<FRotator*>(this, "FUMGViewportCameraTransform.ViewRotation"); }
	FVector& DesiredLocationField() { return *GetNativePointerField<FVector*>(this, "FUMGViewportCameraTransform.DesiredLocation"); }
	FVector& LookAtField() { return *GetNativePointerField<FVector*>(this, "FUMGViewportCameraTransform.LookAt"); }
	FVector& StartLocationField() { return *GetNativePointerField<FVector*>(this, "FUMGViewportCameraTransform.StartLocation"); }
	float& OrthoZoomField() { return *GetNativePointerField<float*>(this, "FUMGViewportCameraTransform.OrthoZoom"); }

	// Functions

};

